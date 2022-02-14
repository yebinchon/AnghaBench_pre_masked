
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int UCHAR ;
typedef int PKT ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;

PKT *FUNC_6(UCHAR *VAR_1, UINT VAR_2)
{
 UCHAR *VAR_3;
 UINT VAR_4;
 PKT *VAR_5;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = VAR_2 + 14;
 VAR_3 = FUNC_2(VAR_4);
 FUNC_5(VAR_3, 12);
 FUNC_4(VAR_3 + 12, VAR_0);
 FUNC_0(VAR_3 + 14, VAR_1, VAR_2);

 VAR_5 = FUNC_3(VAR_3, VAR_4);

 if (VAR_5 == ((void*)0))
 {
  FUNC_1(VAR_3);
 }

 return VAR_5;
}
