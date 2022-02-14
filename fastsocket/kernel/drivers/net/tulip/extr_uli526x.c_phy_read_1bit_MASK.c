
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(unsigned long VAR_0, u32 VAR_1)
{
 u16 VAR_2;

 FUNC_1(0x50000 , VAR_0);
 FUNC_2(1);
 VAR_2 = ( FUNC_0(VAR_0) >> 19 ) & 0x1;
 FUNC_1(0x40000 , VAR_0);
 FUNC_2(1);

 return VAR_2;
}
