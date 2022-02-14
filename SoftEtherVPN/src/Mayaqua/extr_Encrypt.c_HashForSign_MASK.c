
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sign_data ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,void*,scalar_t__) ;

bool FUNC_3(void *VAR_1, UINT VAR_2, void *VAR_3, UINT VAR_4)
{
 UCHAR *VAR_5 = (UCHAR *)VAR_1;
 UCHAR VAR_6[] =
 {
  0x30, 0x21, 0x30, 0x09, 0x06, 0x05, 0x2B, 0x0E,
  0x03, 0x02, 0x1A, 0x05, 0x00, 0x04, 0x14,
 };

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0 || VAR_0 > VAR_2)
 {
  return 0;
 }


 FUNC_0(VAR_5, VAR_6, sizeof(VAR_6));


 FUNC_2(FUNC_1(VAR_5), VAR_3, VAR_4);

 return 1;
}
