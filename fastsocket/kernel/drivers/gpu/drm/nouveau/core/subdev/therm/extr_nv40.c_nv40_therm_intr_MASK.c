
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nouveau_therm {int dummy; } ;
struct nouveau_subdev {int dummy; } ;


 struct nouveau_therm* FUNC_0 (struct nouveau_subdev*) ;
 int FUNC_1 (struct nouveau_therm*,char*,int ) ;
 int FUNC_2 (struct nouveau_therm*,int) ;
 int FUNC_3 (struct nouveau_therm*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_subdev *VAR_0)
{
 struct nouveau_therm *VAR_1 = FUNC_0(VAR_0);
 uint32_t VAR_2 = FUNC_2(VAR_1, 0x1100);




 FUNC_3(VAR_1, 0x1100, 0x70000);

 FUNC_1(VAR_1, "THERM received an IRQ: stat = %x\n", VAR_2);
}
