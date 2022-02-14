
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route {int * ro_srcia; int * ro_rt; int * ro_lle; int ro_flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct route*,struct route*,size_t) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct route *VAR_0, struct route *VAR_1, size_t VAR_2)
{





 if (VAR_1->ro_rt == ((void*)0)) {




  if (VAR_1->ro_lle != ((void*)0))
   FUNC_1(VAR_1->ro_lle);




  if (VAR_1->ro_srcia != ((void*)0))
   FUNC_0(VAR_1->ro_srcia);





  FUNC_2(VAR_0, VAR_1, VAR_2);
  goto done;
 }






 if (VAR_1->ro_rt == VAR_0->ro_rt) {
  VAR_1->ro_flags = VAR_0->ro_flags;

  if (VAR_1->ro_lle != VAR_0->ro_lle) {
   if (VAR_1->ro_lle != ((void*)0))
    FUNC_1(VAR_1->ro_lle);
   VAR_1->ro_lle = VAR_0->ro_lle;
  } else if (VAR_0->ro_lle != ((void*)0)) {
   FUNC_1(VAR_0->ro_lle);
  }

  if (VAR_1->ro_srcia != VAR_0->ro_srcia) {
   if (VAR_1->ro_srcia != ((void*)0))
    FUNC_0(VAR_1->ro_srcia);
   VAR_1->ro_srcia = VAR_0->ro_srcia;
  } else if (VAR_0->ro_srcia != ((void*)0)) {
   FUNC_0(VAR_0->ro_srcia);
  }
  FUNC_3(VAR_0->ro_rt);
  goto done;
 }






 if (VAR_0->ro_rt != ((void*)0)) {
  FUNC_3(VAR_1->ro_rt);

  if (VAR_1->ro_lle != ((void*)0))
   FUNC_1(VAR_1->ro_lle);
  if (VAR_1->ro_srcia != ((void*)0))
   FUNC_0(VAR_1->ro_srcia);
  FUNC_2(VAR_0, VAR_1, VAR_2);
  goto done;
 }





 if (VAR_0->ro_srcia != ((void*)0)) {




  FUNC_0(VAR_0->ro_srcia);
 }
 if (VAR_0->ro_lle != ((void*)0)) {




  FUNC_1(VAR_0->ro_lle);
 }
done:

 VAR_0->ro_lle = ((void*)0);
 VAR_0->ro_rt = ((void*)0);
 VAR_0->ro_srcia = ((void*)0);
}
