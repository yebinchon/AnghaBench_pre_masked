
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {int index; int * done_buff; } ;
struct mtd_info {int dummy; } ;


 struct sh_flctl* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_1(struct mtd_info *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
 struct sh_flctl *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5 = VAR_3->index;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->done_buff[VAR_5 + VAR_4] = VAR_1[VAR_4];
 VAR_3->index += VAR_2;
}
