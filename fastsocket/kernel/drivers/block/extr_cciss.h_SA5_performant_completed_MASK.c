
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reply_pool_head; int reply_pool_wraparound; unsigned long* reply_pool; int max_commands; int commands_outstanding; scalar_t__ vaddr; scalar_t__ msix_vector; scalar_t__ msi_vector; } ;
typedef TYPE_1__ ctlr_info_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_2(ctlr_info_t *VAR_4)
{
 unsigned long VAR_5 = VAR_0;




 VAR_5 = FUNC_0(VAR_4->vaddr + VAR_3);

 if (!(VAR_4->msi_vector || VAR_4->msix_vector)) {
  FUNC_1(VAR_2, VAR_4->vaddr + VAR_1);



  VAR_5 = FUNC_0(VAR_4->vaddr + VAR_3);
 }

 if ((*(VAR_4->reply_pool_head) & 1) == (VAR_4->reply_pool_wraparound)) {
  VAR_5 = *(VAR_4->reply_pool_head);
  (VAR_4->reply_pool_head)++;
  VAR_4->commands_outstanding--;
 } else {
  VAR_5 = VAR_0;
 }

 if (VAR_4->reply_pool_head == (VAR_4->reply_pool + VAR_4->max_commands)) {
  VAR_4->reply_pool_head = VAR_4->reply_pool;
  VAR_4->reply_pool_wraparound ^= 1;
 }

 return VAR_5;
}
