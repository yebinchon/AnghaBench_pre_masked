
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int MultiConnection ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,char const*) ;
 int VAR_3 ;

int
FUNC_7(MultiConnection *VAR_4, const char *VAR_5,
        PGresult **VAR_6)
{
 int VAR_7 = 0;
 PGresult *VAR_8 = ((void*)0);
 bool VAR_9 = 1;

 VAR_7 = FUNC_6(VAR_4, VAR_5);
 if (VAR_7 == 0)
 {
  FUNC_4(VAR_4, VAR_3);
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_4, VAR_9);
 if (!FUNC_2(VAR_8))
 {
  FUNC_5(VAR_4, VAR_8, VAR_3);
  FUNC_3(VAR_8);
  FUNC_0(VAR_4);
  return VAR_1;
 }





 if (VAR_6 != ((void*)0))
 {
  *VAR_6 = VAR_8;
 }
 else
 {
  FUNC_3(VAR_8);
  FUNC_0(VAR_4);
 }

 return VAR_2;
}
