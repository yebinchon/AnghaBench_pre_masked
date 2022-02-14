
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct proc {int dummy; } ;
struct TYPE_14__ {int port; } ;
struct pfioc_natlook {int direction; TYPE_7__ sxport; int rsxport; int af; int saddr; int rsaddr; int rdxport; int rdaddr; TYPE_7__ dxport; int daddr; int proto; int proto_variant; } ;
struct TYPE_11__ {int xport; int addr; } ;
struct TYPE_10__ {int xport; int addr; } ;
struct TYPE_9__ {int xport; int addr; } ;
struct TYPE_8__ {int xport; int addr; } ;
struct pf_state_key_cmp {TYPE_4__ ext_lan; TYPE_3__ lan; int af_lan; TYPE_2__ gwy; TYPE_1__ ext_gwy; int af_gwy; int proto_variant; int proto; } ;
struct TYPE_13__ {TYPE_7__ xport; int addr; } ;
struct TYPE_12__ {TYPE_7__ xport; int addr; } ;
struct pf_state_key {TYPE_6__ gwy; int af_gwy; TYPE_5__ lan; int af_lan; } ;
struct pf_state {struct pf_state_key* state_key; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_7__*,int) ;
 struct pf_state* FUNC_4 (struct pf_state_key_cmp*,int,int*) ;

__attribute__((used)) static int
FUNC_5(u_long VAR_7, struct pfioc_natlook *VAR_8, struct proc *VAR_9)
{
#pragma unused(p)
 int VAR_10 = 0;

 switch (VAR_7) {
 case 128: {
  struct pf_state_key *VAR_11;
  struct pf_state *VAR_12;
  struct pf_state_key_cmp VAR_13;
  int VAR_14 = 0, VAR_15 = VAR_8->direction;

  VAR_13.proto = VAR_8->proto;
  VAR_13.proto_variant = VAR_8->proto_variant;

  if (!VAR_8->proto ||
      FUNC_1(&VAR_8->saddr, VAR_8->af) ||
      FUNC_1(&VAR_8->daddr, VAR_8->af) ||
      ((VAR_8->proto == VAR_3 ||
      VAR_8->proto == VAR_4) &&
      (!VAR_8->dxport.port || !VAR_8->sxport.port)))
   VAR_10 = VAR_1;
  else {






   if (VAR_15 == VAR_5) {
    VAR_13.af_gwy = VAR_8->af;
    FUNC_0(&VAR_13.ext_gwy.addr, &VAR_8->daddr,
     VAR_8->af);
    FUNC_3(&VAR_13.ext_gwy.xport, &VAR_8->dxport,
        sizeof (VAR_13.ext_gwy.xport));
    FUNC_0(&VAR_13.gwy.addr, &VAR_8->saddr, VAR_8->af);
    FUNC_3(&VAR_13.gwy.xport, &VAR_8->sxport,
        sizeof (VAR_13.gwy.xport));
    VAR_12 = FUNC_4(&VAR_13, VAR_5, &VAR_14);
   } else {
    VAR_13.af_lan = VAR_8->af;
    FUNC_0(&VAR_13.lan.addr, &VAR_8->daddr, VAR_8->af);
    FUNC_3(&VAR_13.lan.xport, &VAR_8->dxport,
        sizeof (VAR_13.lan.xport));
    FUNC_0(&VAR_13.ext_lan.addr, &VAR_8->saddr,
     VAR_8->af);
    FUNC_3(&VAR_13.ext_lan.xport, &VAR_8->sxport,
        sizeof (VAR_13.ext_lan.xport));
    VAR_12 = FUNC_4(&VAR_13, VAR_6, &VAR_14);
   }
   if (VAR_14 > 1)
    VAR_10 = VAR_0;
   else if (VAR_12 != ((void*)0)) {
    VAR_11 = VAR_12->state_key;
    if (VAR_15 == VAR_5) {
     FUNC_0(&VAR_8->rsaddr, &VAR_11->lan.addr,
         VAR_11->af_lan);
     FUNC_3(&VAR_8->rsxport, &VAR_11->lan.xport,
         sizeof (VAR_8->rsxport));
     FUNC_0(&VAR_8->rdaddr, &VAR_8->daddr,
         VAR_8->af);
     FUNC_3(&VAR_8->rdxport, &VAR_8->dxport,
         sizeof (VAR_8->rdxport));
    } else {
     FUNC_0(&VAR_8->rdaddr, &VAR_11->gwy.addr,
         VAR_11->af_gwy);
     FUNC_3(&VAR_8->rdxport, &VAR_11->gwy.xport,
         sizeof (VAR_8->rdxport));
     FUNC_0(&VAR_8->rsaddr, &VAR_8->saddr,
         VAR_8->af);
     FUNC_3(&VAR_8->rsxport, &VAR_8->sxport,
         sizeof (VAR_8->rsxport));
    }
   } else
    VAR_10 = VAR_2;
  }
  break;
 }

 default:
  FUNC_2(0);

 }

 return (VAR_10);
}
