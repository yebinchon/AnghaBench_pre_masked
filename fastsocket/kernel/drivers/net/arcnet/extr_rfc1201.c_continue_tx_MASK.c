
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct Outgoing {int segnum; int numsegs; int dataleft; scalar_t__ length; TYPE_2__* pkt; } ;
struct arcnet_local {struct Outgoing outgoing; } ;
struct arc_rfc1201 {int split_flag; int sequence; int proto; } ;
struct arc_hardware {int dummy; } ;
struct TYPE_3__ {scalar_t__ raw; struct arc_rfc1201 rfc1201; } ;
struct TYPE_4__ {TYPE_1__ soft; struct arc_hardware hard; } ;


 int BUGMSG (int ,char*,int,int,int ) ;
 int D_DURING ;
 int RFC1201_HDR_SIZE ;
 int XMTU ;
 int load_pkt (struct net_device*,struct arc_hardware*,struct arc_rfc1201*,int,int) ;
 struct arcnet_local* netdev_priv (struct net_device*) ;

__attribute__((used)) static int continue_tx(struct net_device *dev, int bufnum)
{
 struct arcnet_local *lp = netdev_priv(dev);
 struct Outgoing *out = &lp->outgoing;
 struct arc_hardware *hard = &out->pkt->hard;
 struct arc_rfc1201 *soft = &out->pkt->soft.rfc1201, *newsoft;
 int maxsegsize = XMTU - RFC1201_HDR_SIZE;
 int seglen;

 BUGMSG(D_DURING,
   "rfc1201 continue_tx: loading segment %d(+1) of %d (seq=%d)\n",
        out->segnum, out->numsegs, soft->sequence);


 newsoft = (struct arc_rfc1201 *)
     (out->pkt->soft.raw + out->length - out->dataleft);

 if (!out->segnum)
  newsoft->split_flag = ((out->numsegs - 2) << 1) | 1;
 else {
  newsoft->split_flag = out->segnum << 1;
  newsoft->proto = soft->proto;
  newsoft->sequence = soft->sequence;
 }

 seglen = maxsegsize;
 if (seglen > out->dataleft)
  seglen = out->dataleft;
 out->dataleft -= seglen;

 load_pkt(dev, hard, newsoft, seglen + RFC1201_HDR_SIZE, bufnum);

 out->segnum++;
 if (out->segnum >= out->numsegs)
  return 1;
 else
  return 0;
}
