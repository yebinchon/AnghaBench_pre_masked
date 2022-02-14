
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; scalar_t__ tx_count; int tx_buf; int tx_active; int device_name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct slgt_info*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct slgt_info*,int ,scalar_t__) ;
 int FUNC_5 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0)
{
 struct slgt_info *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;

 if (FUNC_1(VAR_1, VAR_0->name, "tx_release"))
  return;
 FUNC_0(("%s tx_release\n", VAR_1->device_name));
 FUNC_2(&VAR_1->lock,VAR_2);
 if (!VAR_1->tx_active && VAR_1->tx_count) {
  FUNC_4(VAR_1, VAR_1->tx_buf, VAR_1->tx_count);
   FUNC_5(VAR_1);
 }
 FUNC_3(&VAR_1->lock,VAR_2);
}
