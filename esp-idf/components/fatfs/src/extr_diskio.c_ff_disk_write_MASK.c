
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;
typedef int DRESULT ;
typedef int BYTE ;





 int FUNC_0 (int const*,int ,int ) ;
 int FUNC_1 (int const*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int const*,int ,int ) ;

DRESULT FUNC_3 (
 BYTE VAR_1,
 const BYTE *VAR_2,
 DWORD VAR_3,
 UINT VAR_4
)
{
 DRESULT VAR_5;
 int VAR_6;

 switch (VAR_1) {
 case 129 :


  VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);



  return VAR_5;

 case 130 :


  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);



  return VAR_5;

 case 128 :


  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);



  return VAR_5;
 }

 return VAR_0;
}
