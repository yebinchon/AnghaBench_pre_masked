
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_handle_int {int handle; } ;
struct intc_desc_int {int nr_prio; int prio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 struct intc_desc_int* FUNC_3 (unsigned int) ;
 struct intc_handle_int* FUNC_4 (int ,int ,unsigned int) ;
 unsigned int* VAR_2 ;

int FUNC_5(unsigned int VAR_3, unsigned int VAR_4)
{
 struct intc_desc_int *VAR_5 = FUNC_3(VAR_3);
 struct intc_handle_int *VAR_6;

 if (!VAR_2[VAR_3] || VAR_4 <= 1)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5->prio, VAR_5->nr_prio, VAR_3);
 if (VAR_6) {
  if (VAR_4 >= (1 << FUNC_1(VAR_6->handle)))
   return -VAR_0;

  VAR_2[VAR_3] = VAR_4;







  if (FUNC_0(VAR_6->handle) != VAR_1)
   FUNC_2(VAR_3, VAR_6->handle);
 }
 return 0;
}
