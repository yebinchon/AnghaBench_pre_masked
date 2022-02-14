
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sh_flctl {int dummy; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_1, int VAR_2)
{
 struct sh_flctl *VAR_3 = FUNC_2(VAR_1);
 uint32_t VAR_4 = FUNC_3(FUNC_1(VAR_3));

 switch (VAR_2) {
 case -1:
  VAR_4 &= ~VAR_0;
  FUNC_4(VAR_4, FUNC_1(VAR_3));
  break;
 case 0:
  VAR_4 |= VAR_0;
  FUNC_4(VAR_4, FUNC_1(VAR_3));
  break;
 default:
  FUNC_0();
 }
}
