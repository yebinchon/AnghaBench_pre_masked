
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0, uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_0(VAR_0);
}
