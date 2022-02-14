
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char* msn; size_t pre_device; int pre_channel; int flags; int hupflags; int slavedelay; int chargeint; int dialtimeout; int dialwait; TYPE_2__* master; TYPE_1__* slave; int pppbind; int triggercps; int dialmax; int cbdelay; int p_encap; int l3_proto; int l2_proto; int charge; int onhtime; int exclusive; } ;
typedef TYPE_3__ isdn_net_local ;
struct TYPE_12__ {char* eaz; char* drvid; int secure; int callback; int cbhup; int dialmode; int chargehup; int ihup; int slavedelay; int chargeint; int dialtimeout; int dialwait; char* slave; char* master; int pppbind; int triggercps; int dialmax; int cbdelay; int p_encap; int l3_proto; int l2_proto; int charge; int onhtime; int exclusive; int name; } ;
typedef TYPE_4__ isdn_net_ioctl_cfg ;
struct TYPE_13__ {TYPE_3__* local; } ;
typedef TYPE_5__ isdn_net_dev ;
struct TYPE_14__ {char** drvid; } ;
struct TYPE_10__ {char* name; } ;
struct TYPE_9__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(isdn_net_ioctl_cfg * VAR_9)
{
 isdn_net_dev *VAR_10 = FUNC_0(VAR_9->name);

 if (VAR_10) {
  isdn_net_local *VAR_11 = VAR_10->local;

  FUNC_2(VAR_9->eaz, VAR_11->msn);
  VAR_9->exclusive = VAR_11->exclusive;
  if (VAR_11->pre_device >= 0) {
   FUNC_1(VAR_9->drvid, "%s,%d", VAR_8->drvid[VAR_11->pre_device],
    VAR_11->pre_channel);
  } else
   VAR_9->drvid[0] = '\0';
  VAR_9->onhtime = VAR_11->onhtime;
  VAR_9->charge = VAR_11->charge;
  VAR_9->l2_proto = VAR_11->l2_proto;
  VAR_9->l3_proto = VAR_11->l3_proto;
  VAR_9->p_encap = VAR_11->p_encap;
  VAR_9->secure = (VAR_11->flags & VAR_7) ? 1 : 0;
  VAR_9->callback = 0;
  if (VAR_11->flags & VAR_3)
   VAR_9->callback = 1;
  if (VAR_11->flags & VAR_5)
   VAR_9->callback = 2;
  VAR_9->cbhup = (VAR_11->flags & VAR_4) ? 1 : 0;
  VAR_9->dialmode = VAR_11->flags & VAR_6;
  VAR_9->chargehup = (VAR_11->hupflags & 4) ? 1 : 0;
  VAR_9->ihup = (VAR_11->hupflags & 8) ? 1 : 0;
  VAR_9->cbdelay = VAR_11->cbdelay;
  VAR_9->dialmax = VAR_11->dialmax;
  VAR_9->triggercps = VAR_11->triggercps;
  VAR_9->slavedelay = VAR_11->slavedelay / VAR_1;
  VAR_9->chargeint = (VAR_11->hupflags & VAR_2) ?
      (VAR_11->chargeint / VAR_1) : 0;
  VAR_9->pppbind = VAR_11->pppbind;
  VAR_9->dialtimeout = VAR_11->dialtimeout >= 0 ? VAR_11->dialtimeout / VAR_1 : -1;
  VAR_9->dialwait = VAR_11->dialwait / VAR_1;
  if (VAR_11->slave) {
   if (FUNC_3(VAR_11->slave->name) > 8)
    FUNC_2(VAR_9->slave, "too-long");
   else
    FUNC_2(VAR_9->slave, VAR_11->slave->name);
  } else
   VAR_9->slave[0] = '\0';
  if (VAR_11->master) {
   if (FUNC_3(VAR_11->master->name) > 8)
    FUNC_2(VAR_9->master, "too-long");
   FUNC_2(VAR_9->master, VAR_11->master->name);
  } else
   VAR_9->master[0] = '\0';
  return 0;
 }
 return -VAR_0;
}
