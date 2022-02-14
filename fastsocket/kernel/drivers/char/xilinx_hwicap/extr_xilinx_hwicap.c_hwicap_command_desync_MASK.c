
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hwicap_drvdata {TYPE_1__* config; TYPE_2__* config_regs; } ;
struct TYPE_4__ {int CMD; } ;
struct TYPE_3__ {int (* set_configuration ) (struct hwicap_drvdata*,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hwicap_drvdata*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct hwicap_drvdata *VAR_2)
{
 u32 VAR_3[4];
 u32 VAR_4 = 0;




 VAR_3[VAR_4++] = FUNC_0(VAR_2->config_regs->CMD) | 1;
 VAR_3[VAR_4++] = VAR_0;
 VAR_3[VAR_4++] = VAR_1;
 VAR_3[VAR_4++] = VAR_1;





 return VAR_2->config->set_configuration(VAR_2,
   &VAR_3[0], VAR_4);
}
