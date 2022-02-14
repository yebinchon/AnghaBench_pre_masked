
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {int pfik_states; int pfik_rules; } ;
typedef enum pfi_kif_refs { ____Placeholder_pfi_kif_refs } pfi_kif_refs ;




 int FUNC_0 (char*) ;

void
FUNC_1(struct pfi_kif *VAR_0, enum pfi_kif_refs VAR_1)
{
 switch (VAR_1) {
 case 129:
  VAR_0->pfik_rules++;
  break;
 case 128:
  VAR_0->pfik_states++;
  break;
 default:
  FUNC_0("pfi_kif_ref with unknown type");
 }
}
