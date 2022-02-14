
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_req {struct ep_td_struct* tail; int dtd_count; struct ep_td_struct* head; } ;
struct ep_td_struct {void* next_td_ptr; struct ep_td_struct* next_td_virt; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct ep_td_struct* FUNC_1 (struct fsl_req*,unsigned int*,int *,int*) ;

__attribute__((used)) static int FUNC_2(struct fsl_req *VAR_2)
{
 unsigned VAR_3;
 int VAR_4;
 int VAR_5 =1;
 struct ep_td_struct *VAR_6 = ((void*)0), *VAR_7;
 dma_addr_t VAR_8;

 do {
  VAR_7 = FUNC_1(VAR_2, &VAR_3, &VAR_8, &VAR_4);
  if (VAR_7 == ((void*)0))
   return -VAR_1;

  if (VAR_5) {
   VAR_5 = 0;
   VAR_2->head = VAR_7;
  } else {
   VAR_6->next_td_ptr = FUNC_0(VAR_8);
   VAR_6->next_td_virt = VAR_7;
  }
  VAR_6 = VAR_7;

  VAR_2->dtd_count++;
 } while (!VAR_4);

 VAR_7->next_td_ptr = FUNC_0(VAR_0);

 VAR_2->tail = VAR_7;

 return 0;
}
