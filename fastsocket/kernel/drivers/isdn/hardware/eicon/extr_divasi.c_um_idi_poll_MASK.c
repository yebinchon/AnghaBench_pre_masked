
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {scalar_t__ aborted; int read_wait; } ;
typedef TYPE_1__ diva_um_idi_os_context_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct file*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_3, poll_table * VAR_4)
{
 diva_um_idi_os_context_t *VAR_5;

 if (!VAR_3->private_data) {
  return (VAR_0);
 }

 if ((!(VAR_5 =
        (diva_um_idi_os_context_t *)
        FUNC_0(VAR_3->private_data)))
     || VAR_5->aborted) {
  return (VAR_0);
 }

 FUNC_2(VAR_3, &VAR_5->read_wait, VAR_4);

 if (VAR_5->aborted) {
  return (VAR_0);
 }

 switch (FUNC_1(VAR_3->private_data, VAR_3)) {
 case (-1):
  return (VAR_0);

 case 0:
  return (0);
 }

 return (VAR_1 | VAR_2);
}
