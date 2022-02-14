
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct esp_struct* driver_data; } ;
struct esp_struct {int timeout; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct esp_struct*,int ) ;
 int FUNC_3 (struct esp_struct*,int ,int ) ;
 scalar_t__ FUNC_4 (struct esp_struct*,int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_9, int VAR_10)
{
 struct esp_struct *VAR_11 = VAR_9->driver_data;
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14;

 if (FUNC_4(VAR_11, VAR_9->name, "rs_wait_until_sent"))
  return;

 VAR_12 = VAR_8;
 VAR_13 = ((VAR_11->timeout - VAR_2 / 50) / 1024) / 5;

 if (!VAR_13)
  VAR_13 = 1;

 FUNC_7(&VAR_11->lock, VAR_14);
 FUNC_3(VAR_11, VAR_4, VAR_1);
 FUNC_3(VAR_11, VAR_4, VAR_0);

 while ((FUNC_2(VAR_11, VAR_5) != 0x03) ||
  (FUNC_2(VAR_11, VAR_6) != 0xff)) {

  FUNC_8(&VAR_11->lock, VAR_14);
  FUNC_1(FUNC_0(VAR_13));

  if (FUNC_6(VAR_7))
   return;

  if (VAR_10 && FUNC_9(VAR_8, VAR_12 + VAR_10))
   return;

  FUNC_7(&VAR_11->lock, VAR_14);
  FUNC_3(VAR_11, VAR_4, VAR_1);
  FUNC_3(VAR_11, VAR_4, VAR_0);
 }
 FUNC_8(&VAR_11->lock, VAR_14);
 FUNC_5(VAR_3);
}
