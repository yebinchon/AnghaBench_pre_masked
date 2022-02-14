
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int PACK ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int *,int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int VAR_0 ;

PACK *FUNC_3(UCHAR *VAR_1)
{
 PACK *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0();
 FUNC_2(VAR_2, "method", "additional_connect");
 FUNC_1(VAR_2, "session_key", VAR_1, VAR_0);

 return VAR_2;
}
