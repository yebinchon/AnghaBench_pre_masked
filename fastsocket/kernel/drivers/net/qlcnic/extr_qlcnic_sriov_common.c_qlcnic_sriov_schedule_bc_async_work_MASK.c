
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct qlcnic_back_channel {int bc_async_wq; } ;
struct qlcnic_async_work_list {int work; void* ptr; } ;


 int FUNC_0 (int *,int ) ;
 struct qlcnic_async_work_list* FUNC_1 (struct qlcnic_back_channel*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_back_channel *VAR_0,
      work_func_t VAR_1, void *VAR_2)
{
 struct qlcnic_async_work_list *VAR_3 = ((void*)0);

 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return;

 VAR_3->ptr = VAR_2;
 FUNC_0(&VAR_3->work, VAR_1);
 FUNC_2(VAR_0->bc_async_wq, &VAR_3->work);
}
