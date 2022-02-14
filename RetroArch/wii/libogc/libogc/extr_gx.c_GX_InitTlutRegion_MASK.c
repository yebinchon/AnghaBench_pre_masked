
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct __gx_tlutregion {int tmem_addr_conf; } ;
typedef int GXTlutRegion ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

void FUNC_2(GXTlutRegion *VAR_0,u32 VAR_1,u8 VAR_2)
{
 struct __gx_tlutregion *VAR_3 = (struct __gx_tlutregion*)VAR_0;

 VAR_1 -= 0x80000;

 VAR_3->tmem_addr_conf = 0;
 VAR_3->tmem_addr_conf = (VAR_3->tmem_addr_conf&~0x3ff)|(FUNC_1(VAR_1,9,10));
 VAR_3->tmem_addr_conf = (VAR_3->tmem_addr_conf&~0x1FFC00)|(FUNC_0(VAR_2,10,10));
 VAR_3->tmem_addr_conf = (VAR_3->tmem_addr_conf&~0xff000000)|(FUNC_0(0x65,24,8));
}
