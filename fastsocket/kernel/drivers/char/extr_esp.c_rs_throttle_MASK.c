
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {int IER; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct esp_struct*,int ,int) ;
 scalar_t__ FUNC_2 (struct esp_struct*,int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,char*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_5)
{
 struct esp_struct *VAR_6 = VAR_5->driver_data;
 unsigned long VAR_7;







 if (FUNC_2(VAR_6, VAR_5->name, "rs_throttle"))
  return;

 FUNC_3(&VAR_6->lock, VAR_7);
 VAR_6->IER &= ~VAR_4;
 FUNC_1(VAR_6, VAR_2, VAR_1);
 FUNC_1(VAR_6, VAR_3, VAR_6->IER);
 FUNC_1(VAR_6, VAR_2, VAR_0);
 FUNC_1(VAR_6, VAR_3, 0x00);
 FUNC_4(&VAR_6->lock, VAR_7);
}
