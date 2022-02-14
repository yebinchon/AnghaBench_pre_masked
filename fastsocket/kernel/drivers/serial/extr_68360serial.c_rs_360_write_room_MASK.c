
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct TYPE_5__ {int flags; TYPE_1__* tx_cur; } ;
typedef TYPE_2__ ser_info_t ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3)
{
 ser_info_t *VAR_4 = (ser_info_t *)VAR_3->driver_data;
 int VAR_5;

 if (FUNC_0(VAR_4, VAR_3->name, "rs_write_room"))
  return 0;

 if ((VAR_4->tx_cur->status & VAR_0) == 0) {
  VAR_4->flags &= ~VAR_2;
  VAR_5 = VAR_1;
 }
 else {
  VAR_4->flags |= VAR_2;
  VAR_5 = 0;
 }
 return VAR_5;
}
