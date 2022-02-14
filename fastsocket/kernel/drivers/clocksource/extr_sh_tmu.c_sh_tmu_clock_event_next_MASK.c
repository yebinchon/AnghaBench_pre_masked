
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_tmu_priv {int dummy; } ;
struct clock_event_device {scalar_t__ mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct sh_tmu_priv* FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct sh_tmu_priv*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1,
       struct clock_event_device *VAR_2)
{
 struct sh_tmu_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2->mode != VAR_0);


 FUNC_2(VAR_3, VAR_1, 0);
 return 0;
}
