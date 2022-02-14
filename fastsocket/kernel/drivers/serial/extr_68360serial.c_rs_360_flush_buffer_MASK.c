
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ ser_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 ser_info_t *VAR_2 = (ser_info_t *)VAR_1->driver_data;

 if (FUNC_0(VAR_2, VAR_1->name, "rs_flush_buffer"))
  return;




 FUNC_1(VAR_1);
 VAR_2->flags &= ~VAR_0;
}
