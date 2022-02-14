
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int release; int * bus; void* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct device *VAR_2, void *VAR_3)
{
 VAR_2->platform_data = VAR_3;
 VAR_2->bus = &VAR_1;
 VAR_2->release = VAR_0;
}
