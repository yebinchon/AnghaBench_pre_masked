
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gx_tlutregion {int tmem_addr_conf; int tmem_addr_base; int tlut_maddr; int tlut_nentries; } ;
struct __gx_tlutobj {int tlut_maddr; int tlut_fmt; int tlut_nentries; } ;
typedef int GXTlutObj ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(GXTlutObj *VAR_0,u32 VAR_1)
{
 struct __gx_tlutregion *VAR_2 = ((void*)0);
 struct __gx_tlutobj *VAR_3 = (struct __gx_tlutobj*)VAR_0;

 if(&FUNC_2)
  VAR_2 = (struct __gx_tlutregion*)FUNC_2(VAR_1);

 FUNC_1();
 FUNC_0(VAR_3->tlut_maddr);
 FUNC_0(VAR_2->tmem_addr_conf);
 FUNC_1();

 VAR_2->tmem_addr_base = (VAR_3->tlut_fmt&~0x3ff)|(VAR_2->tmem_addr_conf&0x3ff);
 VAR_2->tlut_maddr = VAR_3->tlut_maddr;
 VAR_2->tlut_nentries = VAR_3->tlut_nentries;
}
