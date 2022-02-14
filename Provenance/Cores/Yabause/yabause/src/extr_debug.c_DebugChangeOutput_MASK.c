
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; void (* callback ) (char*) ;scalar_t__ stream; } ;
struct TYPE_5__ {int output_type; TYPE_1__ output; } ;
typedef int DebugOutType ;
typedef TYPE_2__ Debug ;







 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2(Debug * VAR_2, DebugOutType VAR_3, char * VAR_4) {
 if (VAR_3 != VAR_2->output_type) {
  if (VAR_2->output_type == 129)
                {
                   if (VAR_2->output.stream)
   FUNC_0(VAR_2->output.stream);
                }
  VAR_2->output_type = VAR_3;
 }
 switch(VAR_3) {
 case 129:
  VAR_2->output.stream = FUNC_1(VAR_4, "w");
  break;
 case 128:
  VAR_2->output.string = VAR_4;
  break;
 case 132:
                  VAR_2->output.callback = (void (*) (char*))VAR_4;
    break;
 case 130:
  VAR_2->output.stream = VAR_1;
  break;
 case 131:
  VAR_2->output.stream = VAR_0;
  break;
 }
}
