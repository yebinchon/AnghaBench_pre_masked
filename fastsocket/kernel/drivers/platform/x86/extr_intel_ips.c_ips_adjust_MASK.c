
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ips_driver {TYPE_1__* dev; scalar_t__ gpu_turbo_enabled; scalar_t__ cpu_turbo_enabled; int turbo_status_lock; scalar_t__ poll_turbo_status; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ips_driver*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ips_driver*) ;
 int FUNC_3 (struct ips_driver*) ;
 int FUNC_4 (struct ips_driver*) ;
 int FUNC_5 (struct ips_driver*) ;
 int FUNC_6 (struct ips_driver*) ;
 int FUNC_7 (struct ips_driver*) ;
 int FUNC_8 (struct ips_driver*) ;
 int FUNC_9 (struct ips_driver*) ;
 int FUNC_10 (struct ips_driver*) ;
 int FUNC_11 (struct ips_driver*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct ips_driver*) ;
 scalar_t__ FUNC_14 (struct ips_driver*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (struct ips_driver*) ;

__attribute__((used)) static int FUNC_20(void *VAR_1)
{
 struct ips_driver *VAR_2 = VAR_1;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->dev->dev, "starting ips-adjust thread\n");





 do {
  bool VAR_4 = FUNC_2(VAR_2);
  bool VAR_5 = FUNC_9(VAR_2);

  FUNC_17(&VAR_2->turbo_status_lock, VAR_3);
  if (VAR_2->poll_turbo_status)
   FUNC_19(VAR_2);
  FUNC_18(&VAR_2->turbo_status_lock, VAR_3);


  if (VAR_2->cpu_turbo_enabled)
   FUNC_7(VAR_2);
  else
   FUNC_5(VAR_2);

  if (VAR_2->gpu_turbo_enabled)
   FUNC_8(VAR_2);
  else
   FUNC_6(VAR_2);


  if (FUNC_14(VAR_2)) {
   FUNC_3(VAR_2);
   FUNC_10(VAR_2);
   goto sleep;
  }

  if (!FUNC_0(VAR_2, 0) && VAR_4)
   FUNC_4(VAR_2);
  else
   FUNC_3(VAR_2);

  if (!FUNC_13(VAR_2) && VAR_5)
   FUNC_11(VAR_2);
  else
   FUNC_10(VAR_2);

sleep:
  FUNC_16(FUNC_15(VAR_0));
 } while (!FUNC_12());

 FUNC_1(&VAR_2->dev->dev, "ips-adjust thread stopped\n");

 return 0;
}
