
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
 int FUNC_0 (struct esp_struct*,int ,int) ;
 scalar_t__ FUNC_1 (struct esp_struct*,int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 struct esp_struct *VAR_5 = VAR_4->driver_data;
 unsigned long VAR_6;

 if (FUNC_1(VAR_5, VAR_4->name, "rs_stop"))
  return;

 FUNC_2(&VAR_5->lock, VAR_6);
 if (VAR_5->IER & VAR_3) {
  VAR_5->IER &= ~VAR_3;
  FUNC_0(VAR_5, VAR_1, VAR_0);
  FUNC_0(VAR_5, VAR_2, VAR_5->IER);
 }
 FUNC_3(&VAR_5->lock, VAR_6);
}
