
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nouveau_mxm {int* mxms; } ;
struct nouveau_i2c_port {int dummy; } ;
struct nouveau_i2c {struct nouveau_i2c_port* (* find ) (struct nouveau_i2c*,int) ;} ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nouveau_bios*,int) ;
 scalar_t__ FUNC_3 (struct nouveau_i2c_port*,int,int ,int,int*) ;
 int FUNC_4 (struct nouveau_mxm*) ;
 int FUNC_5 (struct nouveau_mxm*) ;
 struct nouveau_bios* FUNC_6 (struct nouveau_mxm*) ;
 struct nouveau_i2c* FUNC_7 (struct nouveau_mxm*) ;
 struct nouveau_i2c_port* FUNC_8 (struct nouveau_i2c*,int) ;

__attribute__((used)) static bool
FUNC_9(struct nouveau_mxm *VAR_1, u8 VAR_2)
{
 struct nouveau_bios *VAR_3 = FUNC_6(VAR_1);
 struct nouveau_i2c *VAR_4 = FUNC_7(VAR_1);
 struct nouveau_i2c_port *VAR_5 = ((void*)0);
 u8 VAR_6, VAR_7[6], VAR_8, VAR_9;

 VAR_6 = FUNC_2(VAR_3, 1 ) & 0x0f;
 if (VAR_6 < 0x0f)
  VAR_5 = VAR_4->find(VAR_4, VAR_6);
 if (!VAR_5)
  return 0;

 VAR_8 = 0x54;
 if (!FUNC_3(VAR_5, VAR_8, 0, 6, VAR_7)) {
  VAR_8 = 0x56;
  if (!FUNC_3(VAR_5, VAR_8, 0, 6, VAR_7))
   return 0;
 }

 VAR_1->mxms = VAR_7;
 VAR_9 = FUNC_4(VAR_1) + FUNC_5(VAR_1);
 VAR_1->mxms = FUNC_1(VAR_9, VAR_0);

 if (VAR_1->mxms &&
     FUNC_3(VAR_5, VAR_8, 0, VAR_9, VAR_1->mxms))
  return 1;

 FUNC_0(VAR_1->mxms);
 VAR_1->mxms = ((void*)0);
 return 0;
}
