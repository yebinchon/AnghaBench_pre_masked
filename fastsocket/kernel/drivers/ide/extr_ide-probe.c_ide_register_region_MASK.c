
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int minors; int first_minor; int major; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int ,int ,struct gendisk*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct gendisk *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2->major, VAR_2->first_minor),
       VAR_2->minors, ((void*)0), VAR_1, VAR_0, VAR_2);
}
