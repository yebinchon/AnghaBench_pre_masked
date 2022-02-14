
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int shift; int min_delta_ns; int max_delta_ns; int mult; } ;
struct sh_tmu_priv {int rate; int periodic; struct clock_event_device ced; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct clock_event_device*) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (struct sh_tmu_priv*) ;
 int FUNC_3 (struct sh_tmu_priv*,int,int) ;

__attribute__((used)) static void FUNC_4(struct sh_tmu_priv *VAR_2, int VAR_3)
{
 struct clock_event_device *VAR_4 = &VAR_2->ced;

 FUNC_2(VAR_2);



 VAR_4->shift = 32;
 VAR_4->mult = FUNC_1(VAR_2->rate, VAR_1, VAR_4->shift);
 VAR_4->max_delta_ns = FUNC_0(0xffffffff, VAR_4);
 VAR_4->min_delta_ns = 5000;

 if (VAR_3) {
  VAR_2->periodic = (VAR_2->rate + VAR_0/2) / VAR_0;
  FUNC_3(VAR_2, VAR_2->periodic, 1);
 }
}
