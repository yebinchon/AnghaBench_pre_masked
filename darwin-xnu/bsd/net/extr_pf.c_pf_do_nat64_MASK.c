
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int addr; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int addr; } ;
struct pf_state_key {scalar_t__ af_lan; TYPE_4__ ext_gwy; TYPE_3__ gwy; TYPE_2__ ext_lan; TYPE_1__ lan; } ;
struct pf_pdesc {scalar_t__ af; int ndaddr; int naddr; } ;
typedef int pbuf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,struct pf_pdesc*) ;
 int FUNC_1 (int *,int,struct pf_pdesc*) ;

__attribute__((used)) static int
FUNC_2(struct pf_state_key *VAR_3, struct pf_pdesc *VAR_4, pbuf_t *VAR_5,
     int VAR_6)
{
 if (VAR_4->af == VAR_0) {
  if (VAR_4->af != VAR_3->af_lan) {
   VAR_4->ndaddr = VAR_3->lan.addr;
   VAR_4->naddr = VAR_3->ext_lan.addr;
  } else {
   VAR_4->naddr = VAR_3->gwy.addr;
   VAR_4->ndaddr = VAR_3->ext_gwy.addr;
  }
  return (FUNC_0(VAR_5, VAR_6, VAR_4));
 }
 else if (VAR_4->af == VAR_1) {
  if (VAR_4->af != VAR_3->af_lan) {
   VAR_4->ndaddr = VAR_3->lan.addr;
   VAR_4->naddr = VAR_3->ext_lan.addr;
   } else {
    VAR_4->naddr = VAR_3->gwy.addr;
    VAR_4->ndaddr = VAR_3->ext_gwy.addr;
   }
   return (FUNC_1(VAR_5, VAR_6, VAR_4));
 }
 return (VAR_2);
}
