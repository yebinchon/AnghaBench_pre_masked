
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* string; void (* callback ) (char*) ;int stream; } ;
struct TYPE_6__ {int output_type; TYPE_1__ output; int * name; } ;
typedef int DebugOutType ;
typedef TYPE_2__ Debug ;







 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (char const*) ;

Debug * FUNC_4(const char * VAR_2, DebugOutType VAR_3, char * VAR_4) {
 Debug * VAR_5;

        if ((VAR_5 = (Debug *) FUNC_2(sizeof(Debug))) == ((void*)0))
           return ((void*)0);

 VAR_5->output_type = VAR_3;

        if ((VAR_5->name = FUNC_3(VAR_2)) == ((void*)0))
        {
           FUNC_1(VAR_5);
           return ((void*)0);
        }

 switch(VAR_3) {
 case 129:
                VAR_5->output.stream = FUNC_0(VAR_4, "w");
  break;
 case 128:
  VAR_5->output.string = VAR_4;
  break;
 case 130:
  VAR_5->output.stream = VAR_1;
  break;
 case 131:
  VAR_5->output.stream = VAR_0;
  break;
        case 132:
                VAR_5->output.callback = (void (*) (char*))VAR_4;
         break;
 }

 return VAR_5;
}
