
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int*) ;
 int FUNC_1 (int *,int ,int,int*) ;

__attribute__((used)) static int FUNC_2(rtl8150_t * VAR_2)
{
 u8 VAR_3 = 0x10;
 int VAR_4 = VAR_1;

 FUNC_1(VAR_2, VAR_0, 1, &VAR_3);
 do {
  FUNC_0(VAR_2, VAR_0, 1, &VAR_3);
 } while ((VAR_3 & 0x10) && --VAR_4);

 return (VAR_4 > 0) ? 1 : 0;
}
