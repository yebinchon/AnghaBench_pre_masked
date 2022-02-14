
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_mxm {int dummy; } ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int *,int ) ;
 int FUNC_1 (struct nouveau_bios*,int*,int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_mxm*,int,int ,int *) ;
 struct nouveau_bios* FUNC_3 (struct nouveau_mxm*) ;
 int FUNC_4 (struct nouveau_mxm*,char*) ;

__attribute__((used)) static void
FUNC_5(struct nouveau_mxm *VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_3(VAR_2);
 u8 VAR_4, VAR_5, VAR_6, VAR_7;
 u16 VAR_8 = FUNC_1(VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_8 == 0x0000 || VAR_4 != 0x40) {
  FUNC_4(VAR_2, "unsupported DCB version\n");
  return;
 }

 FUNC_0(VAR_3, ((void*)0), VAR_0);
 FUNC_2(VAR_2, 0x01, VAR_1, ((void*)0));
}
