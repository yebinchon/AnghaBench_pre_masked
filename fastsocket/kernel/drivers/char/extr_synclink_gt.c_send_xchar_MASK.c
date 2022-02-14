
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {char x_char; int lock; int tx_enabled; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0, char VAR_1)
{
 struct slgt_info *VAR_2 = VAR_0->driver_data;
 unsigned long VAR_3;

 if (FUNC_1(VAR_2, VAR_0->name, "send_xchar"))
  return;
 FUNC_0(("%s send_xchar(%d)\n", VAR_2->device_name, VAR_1));
 VAR_2->x_char = VAR_1;
 if (VAR_1) {
  FUNC_2(&VAR_2->lock,VAR_3);
  if (!VAR_2->tx_enabled)
    FUNC_4(VAR_2);
  FUNC_3(&VAR_2->lock,VAR_3);
 }
}
