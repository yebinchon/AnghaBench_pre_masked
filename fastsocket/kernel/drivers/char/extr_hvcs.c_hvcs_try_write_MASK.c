
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tty_struct {int dummy; } ;
struct hvcs_struct {int todo_mask; int chars_in_buffer; int * buffer; struct tty_struct* tty; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct hvcs_struct *VAR_1)
{
 uint32_t VAR_2 = VAR_1->vdev->unit_address;
 struct tty_struct *VAR_3 = VAR_1->tty;
 int VAR_4;

 if (VAR_1->todo_mask & VAR_0) {

  VAR_4 = FUNC_0(VAR_2,
    &VAR_1->buffer[0],
    VAR_1->chars_in_buffer );
  if (VAR_4 > 0) {
   VAR_1->chars_in_buffer = 0;

   VAR_1->todo_mask &= ~(VAR_0);
   if (VAR_3) {
    FUNC_1(VAR_3);
   }
  }
 }
}
