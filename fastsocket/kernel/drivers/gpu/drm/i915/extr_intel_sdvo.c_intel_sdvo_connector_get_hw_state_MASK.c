
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_sdvo_connector {int output_flag; } ;
struct intel_sdvo {int dummy; } ;
struct intel_connector {int base; } ;


 struct intel_sdvo* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_sdvo*,int*) ;
 struct intel_sdvo_connector* FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct intel_connector *VAR_0)
{
 struct intel_sdvo_connector *VAR_1 =
  FUNC_2(&VAR_0->base);
 struct intel_sdvo *VAR_2 = FUNC_0(&VAR_0->base);
 u16 VAR_3;

 FUNC_1(VAR_2, &VAR_3);

 if (VAR_3 & VAR_1->output_flag)
  return 1;
 else
  return 0;
}
