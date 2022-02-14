
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_size; void* ptr; int table_addr; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ gart; int pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ,int) ;
 void* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (unsigned long,int) ;

int FUNC_3(struct radeon_device *VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_1(VAR_6->pdev, VAR_6->gart.table_size,
       &VAR_6->gart.table_addr);
 if (VAR_7 == ((void*)0)) {
  return -VAR_4;
 }







 VAR_6->gart.ptr = VAR_7;
 FUNC_0((void *)VAR_6->gart.ptr, 0, VAR_6->gart.table_size);
 return 0;
}
