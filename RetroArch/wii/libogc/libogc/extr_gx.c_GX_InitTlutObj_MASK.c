
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct __gx_tlutobj {int tlut_fmt; int tlut_maddr; int tlut_nentries; } ;
typedef int GXTlutObj ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(GXTlutObj *VAR_0,void *VAR_1,u8 VAR_2,u16 VAR_3)
{
 struct __gx_tlutobj *VAR_4 = (struct __gx_tlutobj*)VAR_0;

 FUNC_3(VAR_0,0,sizeof(GXTlutObj));

 VAR_4->tlut_fmt = FUNC_1(VAR_2,10,2);
 VAR_4->tlut_maddr = (VAR_4->tlut_maddr&~0x00ffffff)|(FUNC_2(FUNC_0(VAR_1),5,24));
 VAR_4->tlut_maddr = (VAR_4->tlut_maddr&~0xff000000)|(FUNC_1(0x64,24,8));
 VAR_4->tlut_nentries = VAR_3;
}
