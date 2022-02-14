
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {void* private_data; } ;
typedef int dword ;
struct TYPE_4__ {unsigned long data; void* function; } ;
struct TYPE_3__ {int adapter_nr; scalar_t__ aborted; TYPE_2__ diva_timer_id; int close_wait; int read_wait; } ;
typedef TYPE_1__ diva_um_idi_os_context_t ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ,void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, int VAR_2)
{
 diva_um_idi_os_context_t *VAR_3;
 void *VAR_4 =
     FUNC_1((dword) VAR_2, (void *) VAR_1);

 if (!(VAR_1->private_data = VAR_4)) {
  return (0);
 }
 VAR_3 = (diva_um_idi_os_context_t *) FUNC_0(VAR_4);
 FUNC_3(&VAR_3->read_wait);
 FUNC_3(&VAR_3->close_wait);
 FUNC_2(&VAR_3->diva_timer_id);
 VAR_3->diva_timer_id.function = (void *) VAR_0;
 VAR_3->diva_timer_id.data = (unsigned long) VAR_3;
 VAR_3->aborted = 0;
 VAR_3->adapter_nr = VAR_2;
 return (1);
}
