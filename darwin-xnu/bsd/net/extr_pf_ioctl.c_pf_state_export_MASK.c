
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_28__ {int xport; int addr; } ;
struct TYPE_26__ {int xport; int addr; } ;
struct TYPE_24__ {int xport; int addr; } ;
struct TYPE_22__ {int xport; int addr; } ;
struct pfsync_state {unsigned int nat_rule; unsigned int anchor; scalar_t__ expire; int sync_flags; int timeout; int allow_opts; int log; scalar_t__ creation; int * packets; int * bytes; int rule; int dst; int src; int ifname; int creatorid; int id; int flowhash; int direction; int af_gwy; int af_lan; int proto; int tag; int proto_variant; TYPE_7__ ext_gwy; TYPE_5__ ext_lan; TYPE_3__ gwy; TYPE_1__ lan; } ;
struct TYPE_29__ {int xport; int addr; } ;
struct TYPE_27__ {int xport; int addr; } ;
struct TYPE_25__ {int xport; int addr; } ;
struct TYPE_23__ {int xport; int addr; } ;
struct pf_state_key {int flowhash; int direction; int af_gwy; int af_lan; int proto; int proto_variant; TYPE_8__ ext_gwy; TYPE_6__ ext_lan; TYPE_4__ gwy; TYPE_2__ lan; } ;
struct TYPE_21__ {TYPE_14__* ptr; } ;
struct TYPE_19__ {TYPE_12__* ptr; } ;
struct TYPE_17__ {TYPE_10__* ptr; } ;
struct pf_state {scalar_t__ creation; scalar_t__ nat_src_node; scalar_t__ src_node; int timeout; int allow_opts; int log; int * packets; int * bytes; TYPE_15__ anchor; TYPE_13__ nat_rule; TYPE_11__ rule; int dst; int src; TYPE_9__* kif; int creatorid; int id; int tag; } ;
struct TYPE_30__ {int pfik_name; } ;
struct TYPE_20__ {unsigned int nr; } ;
struct TYPE_18__ {unsigned int nr; } ;
struct TYPE_16__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pfsync_state*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct pf_state*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct pfsync_state *VAR_2, struct pf_state_key *VAR_3,
    struct pf_state *VAR_4)
{
 uint64_t VAR_5 = FUNC_5();
 FUNC_0(VAR_2, sizeof (struct pfsync_state));


 VAR_2->lan.addr = VAR_3->lan.addr;
 VAR_2->lan.xport = VAR_3->lan.xport;
 VAR_2->gwy.addr = VAR_3->gwy.addr;
 VAR_2->gwy.xport = VAR_3->gwy.xport;
 VAR_2->ext_lan.addr = VAR_3->ext_lan.addr;
 VAR_2->ext_lan.xport = VAR_3->ext_lan.xport;
 VAR_2->ext_gwy.addr = VAR_3->ext_gwy.addr;
 VAR_2->ext_gwy.xport = VAR_3->ext_gwy.xport;
 VAR_2->proto_variant = VAR_3->proto_variant;
 VAR_2->tag = VAR_4->tag;
 VAR_2->proto = VAR_3->proto;
 VAR_2->af_lan = VAR_3->af_lan;
 VAR_2->af_gwy = VAR_3->af_gwy;
 VAR_2->direction = VAR_3->direction;
 VAR_2->flowhash = VAR_3->flowhash;


 FUNC_1(&VAR_2->id, &VAR_4->id, sizeof (VAR_2->id));
 VAR_2->creatorid = VAR_4->creatorid;
 FUNC_6(VAR_2->ifname, VAR_4->kif->pfik_name, sizeof (VAR_2->ifname));
 FUNC_4(&VAR_4->src, &VAR_2->src);
 FUNC_4(&VAR_4->dst, &VAR_2->dst);

 VAR_2->rule = VAR_4->rule.ptr->nr;
 VAR_2->nat_rule = (VAR_4->nat_rule.ptr == ((void*)0)) ?
     (unsigned)-1 : VAR_4->nat_rule.ptr->nr;
 VAR_2->anchor = (VAR_4->anchor.ptr == ((void*)0)) ?
     (unsigned)-1 : VAR_4->anchor.ptr->nr;

 FUNC_2(VAR_4->bytes[0], VAR_2->bytes[0]);
 FUNC_2(VAR_4->bytes[1], VAR_2->bytes[1]);
 FUNC_2(VAR_4->packets[0], VAR_2->packets[0]);
 FUNC_2(VAR_4->packets[1], VAR_2->packets[1]);
 VAR_2->creation = VAR_5 - VAR_4->creation;
 VAR_2->expire = FUNC_3(VAR_4);
 VAR_2->log = VAR_4->log;
 VAR_2->allow_opts = VAR_4->allow_opts;
 VAR_2->timeout = VAR_4->timeout;

 if (VAR_4->src_node)
  VAR_2->sync_flags |= VAR_1;
 if (VAR_4->nat_src_node)
  VAR_2->sync_flags |= VAR_0;

 if (VAR_2->expire > VAR_5)
  VAR_2->expire -= VAR_5;
 else
  VAR_2->expire = 0;

}
