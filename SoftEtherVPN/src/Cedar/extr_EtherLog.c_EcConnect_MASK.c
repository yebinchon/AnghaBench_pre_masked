
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retcode ;
typedef int response ;
typedef int rand ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int SOCK ;
typedef int RPC ;


 int * FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int *,int*,int,int) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int*,int*,int*) ;
 int FUNC_5 (int *,int*,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int*,char*,int ) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int*,int) ;

UINT FUNC_11(char *VAR_8, UINT VAR_9, char *VAR_10, RPC **VAR_11)
{
 SOCK *VAR_12;
 UCHAR VAR_13[VAR_7];
 UCHAR VAR_14[VAR_7];
 UCHAR VAR_15[VAR_7];
 bool VAR_16;

 if (VAR_8 == ((void*)0))
 {
  VAR_8 = "localhost";
 }
 if (VAR_9 == 0)
 {
  VAR_9 = VAR_0;
 }
 if (VAR_10 == ((void*)0))
 {
  VAR_10 = "";
 }
 if (VAR_11 == ((void*)0))
 {
  return VAR_3;
 }


 VAR_12 = FUNC_0(VAR_8, VAR_9);
 if (VAR_12 == ((void*)0))
 {

  return VAR_2;
 }

 FUNC_6(VAR_12, 5000);


 FUNC_7(VAR_13, VAR_10, FUNC_9(VAR_10));


 FUNC_10(VAR_14, sizeof(VAR_14));
 (void)FUNC_2(VAR_12, VAR_14, sizeof(VAR_14), 0);
 FUNC_4(VAR_15, VAR_13, VAR_14);


 FUNC_5(VAR_12, VAR_15, sizeof(VAR_15), 0);


 VAR_16 = 0;
 if (FUNC_2(VAR_12, &VAR_16, sizeof(VAR_16), 0) == 0)
 {

  FUNC_3(VAR_12);
  return VAR_5;
 }
 VAR_16 = FUNC_1(VAR_16);

 if (VAR_16 == 0)
 {

  FUNC_3(VAR_12);
  return VAR_1;
 }


 FUNC_6(VAR_12, VAR_6);

 *VAR_11 = FUNC_8(VAR_12, ((void*)0));

 FUNC_3(VAR_12);

 return VAR_4;
}
