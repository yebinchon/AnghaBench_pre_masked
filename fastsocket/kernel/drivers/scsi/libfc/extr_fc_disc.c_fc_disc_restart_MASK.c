
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_disc {int requested; int disc_id; scalar_t__ retry_count; scalar_t__ pending; int disc_callback; } ;


 int FUNC_0 (struct fc_disc*,char*) ;
 int FUNC_1 (struct fc_disc*) ;

__attribute__((used)) static void FUNC_2(struct fc_disc *VAR_0)
{
 if (!VAR_0->disc_callback)
  return;

 FUNC_0(VAR_0, "Restarting discovery\n");

 VAR_0->requested = 1;
 if (VAR_0->pending)
  return;






 VAR_0->disc_id = (VAR_0->disc_id + 2) | 1;
 VAR_0->retry_count = 0;
 FUNC_1(VAR_0);
}
