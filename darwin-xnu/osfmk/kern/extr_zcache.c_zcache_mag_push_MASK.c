
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcc_magazine {int zcc_magazine_index; void** zcc_elements; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zcc_magazine*) ;

void FUNC_2(struct zcc_magazine *VAR_0, void *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0));
 VAR_0->zcc_elements[VAR_0->zcc_magazine_index ++] = VAR_1;
}
