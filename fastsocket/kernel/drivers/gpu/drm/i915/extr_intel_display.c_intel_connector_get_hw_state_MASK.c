
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int (* get_hw_state ) (struct intel_encoder*,int*) ;} ;
struct intel_connector {struct intel_encoder* encoder; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct intel_encoder*,int*) ;

bool FUNC_1(struct intel_connector *VAR_0)
{
 enum pipe VAR_1 = 0;
 struct intel_encoder *VAR_2 = VAR_0->encoder;

 return VAR_2->get_hw_state(VAR_2, &VAR_1);
}
