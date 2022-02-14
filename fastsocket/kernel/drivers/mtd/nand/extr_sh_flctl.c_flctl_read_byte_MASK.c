
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {int index; int * done_buff; } ;
struct mtd_info {int dummy; } ;


 struct sh_flctl* FUNC_0 (struct mtd_info*) ;

__attribute__((used)) static uint8_t FUNC_1(struct mtd_info *VAR_0)
{
 struct sh_flctl *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->index;
 uint8_t VAR_3;

 VAR_3 = VAR_1->done_buff[VAR_2];
 VAR_1->index++;
 return VAR_3;
}
