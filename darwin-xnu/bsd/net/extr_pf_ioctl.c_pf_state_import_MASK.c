
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_23__ {int xport; int addr; } ;
struct TYPE_21__ {int xport; int addr; } ;
struct TYPE_19__ {int xport; int addr; } ;
struct TYPE_17__ {int xport; int addr; } ;
struct pfsync_state {scalar_t__ expire; size_t timeout; int dst; int src; int creatorid; int id; int direction; int af_gwy; int af_lan; int proto; int tag; int proto_variant; TYPE_8__ ext_gwy; TYPE_6__ ext_lan; TYPE_4__ gwy; TYPE_2__ lan; } ;
struct TYPE_22__ {int xport; int addr; } ;
struct TYPE_20__ {int xport; int addr; } ;
struct TYPE_18__ {int xport; int addr; } ;
struct TYPE_16__ {int xport; int addr; } ;
struct pf_state_key {int flowhash; int direction; int af_gwy; int af_lan; int proto; int proto_variant; TYPE_7__ ext_gwy; TYPE_5__ ext_lan; TYPE_3__ gwy; TYPE_1__ lan; } ;
struct TYPE_14__ {int * ptr; } ;
struct TYPE_13__ {int * ptr; } ;
struct TYPE_24__ {TYPE_12__* ptr; } ;
struct pf_state {scalar_t__* bytes; scalar_t__* packets; scalar_t__ pfsync_time; void* expire; void* creation; int * rt_kif; TYPE_11__ anchor; TYPE_10__ nat_rule; TYPE_9__ rule; int dst; int src; int creatorid; int id; int tag; } ;
struct TYPE_15__ {scalar_t__* timeout; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct pf_state_key*) ;
 TYPE_12__ VAR_0 ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct pfsync_state *VAR_1, struct pf_state_key *VAR_2,
    struct pf_state *VAR_3)
{

 VAR_2->lan.addr = VAR_1->lan.addr;
 VAR_2->lan.xport = VAR_1->lan.xport;
 VAR_2->gwy.addr = VAR_1->gwy.addr;
 VAR_2->gwy.xport = VAR_1->gwy.xport;
 VAR_2->ext_lan.addr = VAR_1->ext_lan.addr;
 VAR_2->ext_lan.xport = VAR_1->ext_lan.xport;
 VAR_2->ext_gwy.addr = VAR_1->ext_gwy.addr;
 VAR_2->ext_gwy.xport = VAR_1->ext_gwy.xport;
 VAR_2->proto_variant = VAR_1->proto_variant;
 VAR_3->tag = VAR_1->tag;
 VAR_2->proto = VAR_1->proto;
 VAR_2->af_lan = VAR_1->af_lan;
 VAR_2->af_gwy = VAR_1->af_gwy;
 VAR_2->direction = VAR_1->direction;
 VAR_2->flowhash = FUNC_1(VAR_2);


 FUNC_0(&VAR_3->id, &VAR_1->id, sizeof (VAR_1->id));
 VAR_3->creatorid = VAR_1->creatorid;
 FUNC_2(&VAR_1->src, &VAR_3->src);
 FUNC_2(&VAR_1->dst, &VAR_3->dst);

 VAR_3->rule.ptr = &VAR_0;
 VAR_3->nat_rule.ptr = ((void*)0);
 VAR_3->anchor.ptr = ((void*)0);
 VAR_3->rt_kif = ((void*)0);
 VAR_3->creation = FUNC_3();
 VAR_3->expire = FUNC_3();
 if (VAR_1->expire > 0)
  VAR_3->expire -= VAR_0.timeout[VAR_1->timeout] - VAR_1->expire;
 VAR_3->pfsync_time = 0;
 VAR_3->packets[0] = VAR_3->packets[1] = 0;
 VAR_3->bytes[0] = VAR_3->bytes[1] = 0;
}
