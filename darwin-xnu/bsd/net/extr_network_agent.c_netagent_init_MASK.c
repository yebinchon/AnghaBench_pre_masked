
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_10 () ;

errno_t
FUNC_11(void)
{
 errno_t VAR_9 = 0;

 VAR_9 = FUNC_10();
 if (VAR_9 != 0) {
  goto done;
 }

 VAR_4 = FUNC_6();
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_1, "lck_grp_attr_alloc_init failed");
  VAR_9 = VAR_0;
  goto done;
 }

 VAR_8 = FUNC_5(VAR_2, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_1, "lck_grp_alloc_init failed");
  VAR_9 = VAR_0;
  goto done;
 }

 VAR_7 = FUNC_3();
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_1, "lck_attr_alloc_init failed");
  VAR_9 = VAR_0;
  goto done;
 }

 FUNC_9(&VAR_6, VAR_8, VAR_7);

 FUNC_0(&VAR_3);

done:
 if (VAR_9 != 0) {
  if (VAR_7 != ((void*)0)) {
   FUNC_4(VAR_7);
   VAR_7 = ((void*)0);
  }
  if (VAR_8 != ((void*)0)) {
   FUNC_8(VAR_8);
   VAR_8 = ((void*)0);
  }
  if (VAR_4 != ((void*)0)) {
   FUNC_7(VAR_4);
   VAR_4 = ((void*)0);
  }
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_5);
   VAR_5 = ((void*)0);
  }
 }
 return (VAR_9);
}
