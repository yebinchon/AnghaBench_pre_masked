
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfi_kif {scalar_t__ pfik_states; scalar_t__ pfik_rules; int * pfik_ifp; } ;
typedef enum pfi_kif_refs { ____Placeholder_pfi_kif_refs } pfi_kif_refs ;





 int VAR_0 ;
 int FUNC_0 (int ,int *,struct pfi_kif*) ;
 int FUNC_1 (struct pfi_kif*,int ) ;
 int FUNC_2 (char*) ;
 struct pfi_kif* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct pfi_kif *VAR_4, enum pfi_kif_refs VAR_5)
{
 if (VAR_4 == ((void*)0))
  return;

 switch (VAR_5) {
 case 130:
  break;
 case 129:
  if (VAR_4->pfik_rules <= 0) {
   FUNC_3("pfi_kif_unref: rules refcount <= 0\n");
   return;
  }
  VAR_4->pfik_rules--;
  break;
 case 128:
  if (VAR_4->pfik_states <= 0) {
   FUNC_3("pfi_kif_unref: state refcount <= 0\n");
   return;
  }
  VAR_4->pfik_states--;
  break;
 default:
  FUNC_2("pfi_kif_unref with unknown type");
 }

 if (VAR_4->pfik_ifp != ((void*)0) || VAR_4 == VAR_1)
  return;

 if (VAR_4->pfik_rules || VAR_4->pfik_states)
  return;

 FUNC_0(VAR_2, &VAR_3, VAR_4);
 FUNC_1(VAR_4, VAR_0);
}
