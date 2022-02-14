
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mask; int addr; } ;
struct TYPE_8__ {int rtlabel; TYPE_1__ a; } ;
struct TYPE_7__ {int tbl; TYPE_2__* dyn; } ;
struct pf_addr_wrap {int type; TYPE_4__ v; TYPE_3__ p; } ;
struct TYPE_6__ {int pfid_kt; } ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct pf_addr_wrap *VAR_0, struct pf_addr_wrap *VAR_1)
{
 if (VAR_0->type != VAR_1->type)
  return (1);
 switch (VAR_0->type) {
 case 134:
 case 131:
  if (FUNC_0(&VAR_0->v.a.addr, &VAR_1->v.a.addr, 0))
   return (1);
  if (FUNC_0(&VAR_0->v.a.mask, &VAR_1->v.a.mask, 0))
   return (1);
  return (0);
 case 133:
  return (VAR_0->p.dyn == ((void*)0) || VAR_1->p.dyn == ((void*)0) ||
      VAR_0->p.dyn->pfid_kt != VAR_1->p.dyn->pfid_kt);
 case 132:
 case 128:
  return (0);
 case 129:
  return (VAR_0->p.tbl != VAR_1->p.tbl);
 case 130:
  return (VAR_0->v.rtlabel != VAR_1->v.rtlabel);
 default:
  FUNC_1("invalid address type: %d\n", VAR_0->type);
  return (1);
 }
}
