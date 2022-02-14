
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo_connector {int dummy; } ;
struct edid {int input; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct intel_sdvo_connector*) ;

__attribute__((used)) static bool
FUNC_2(struct intel_sdvo_connector *VAR_1,
      struct edid *VAR_2)
{
 bool VAR_3 = !!(VAR_2->input & VAR_0);
 bool VAR_4 = !!FUNC_1(VAR_1);

 FUNC_0("connector_is_digital? %d, monitor_is_digital? %d\n",
        VAR_4, VAR_3);
 return VAR_4 == VAR_3;
}
