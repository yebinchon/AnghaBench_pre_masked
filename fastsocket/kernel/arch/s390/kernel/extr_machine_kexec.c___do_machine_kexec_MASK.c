
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int start; int head; int control_code_page; } ;
typedef int (* relocate_kernel_t ) (int *,int ) ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 relocate_kernel_t VAR_1;
 struct kimage *VAR_2 = VAR_0;

 VAR_1 = (relocate_kernel_t) FUNC_0(VAR_2->control_code_page);


 (*VAR_1)(&VAR_2->head, VAR_2->start);
}
