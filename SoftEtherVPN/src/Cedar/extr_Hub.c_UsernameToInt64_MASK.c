
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int ret ;
typedef int UINT64 ;
typedef int UCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

UINT64 FUNC_9(char *VAR_4)
{
 UCHAR VAR_5[VAR_3];
 UINT64 VAR_6;
 char VAR_7[VAR_2 + 1];

 if (VAR_4 == 0 || FUNC_1(VAR_4))
 {
  return 0;
 }

 if (FUNC_5(VAR_4, VAR_1) || FUNC_5(VAR_4, VAR_0))
 {
  return FUNC_3();
 }

 FUNC_2(VAR_7, sizeof(VAR_7), VAR_4);
 FUNC_8(VAR_7);
 FUNC_7(VAR_7);

 if (FUNC_6(VAR_7) == 0)
 {
  return 0;
 }

 FUNC_4(VAR_5, VAR_7, FUNC_6(VAR_7));
 FUNC_0(&VAR_6, VAR_5, sizeof(VAR_6));

 return VAR_6;
}
