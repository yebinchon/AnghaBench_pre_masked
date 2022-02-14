
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int private_data; } ;
struct TYPE_2__ {unsigned int adapter_nr; } ;
typedef TYPE_1__ diva_um_idi_os_context_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 diva_um_idi_os_context_t *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 if (!(VAR_2->private_data)) {
  VAR_5 = -VAR_0;
  goto out;
 }

 if (!(VAR_3 =
  (diva_um_idi_os_context_t *) FUNC_0(VAR_2->private_data))) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4 = VAR_3->adapter_nr;

 if ((VAR_5 = FUNC_2(VAR_2->private_data))) {
  goto out;
 }

 if (FUNC_1
     ((int) VAR_4, VAR_2->private_data)) {
  VAR_5 = -VAR_0;
  goto out;
 }

      out:
 return (VAR_5);
}
