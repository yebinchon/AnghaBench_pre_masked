
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GKeyFile ;
typedef int GError ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int **) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char) ;

GKeyFile *FUNC_4(const char *VAR_2, GError **VAR_3) {
 GKeyFile *VAR_4;





 VAR_4 = FUNC_2();
 FUNC_3(VAR_4, ',');

 if (VAR_0 == FUNC_1(VAR_4, VAR_2, VAR_1, VAR_3)) {
  FUNC_0(VAR_4);

  return ((void*)0);
 }

 return VAR_4;
}
