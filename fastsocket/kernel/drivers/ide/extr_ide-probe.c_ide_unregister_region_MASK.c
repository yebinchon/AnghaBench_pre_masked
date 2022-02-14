
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int minors; int first_minor; int major; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct gendisk *VAR_0)
{
 FUNC_1(FUNC_0(VAR_0->major, VAR_0->first_minor),
         VAR_0->minors);
}
