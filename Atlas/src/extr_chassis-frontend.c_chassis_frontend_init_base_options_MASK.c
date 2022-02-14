
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int chassis_options_t ;
typedef int GOptionEntry ;
typedef int GOptionContext ;
typedef int GError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int*,char**) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int*,char***,int **) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(GOptionContext *VAR_2,
  int *VAR_3, char ***VAR_4,
  int *VAR_5,
  char **VAR_6,
  GError **VAR_7) {
 chassis_options_t *VAR_8;
 GOptionEntry *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_1();
 FUNC_2(VAR_8, VAR_5, VAR_6);
 VAR_9 = FUNC_3(VAR_8);

 FUNC_5(VAR_2, VAR_9, ((void*)0));
 FUNC_7(VAR_2, VAR_0);
 FUNC_8(VAR_2, VAR_1);

 if (VAR_0 == FUNC_6(VAR_2, VAR_3, VAR_4, VAR_7)) {
  VAR_10 = -1;
 }


 FUNC_4(VAR_9);
 FUNC_0(VAR_8);

 return VAR_10;
}
