
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int stream; } ;
struct TYPE_6__ {int output_type; struct TYPE_6__* name; TYPE_1__ output; } ;
typedef TYPE_2__ Debug ;







 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(Debug * VAR_0) {
        if (VAR_0 == ((void*)0))
           return;

 switch(VAR_0->output_type) {
 case 129:
                if (VAR_0->output.stream)
                   FUNC_0(VAR_0->output.stream);
  break;
 case 128:
 case 130:
 case 131:
 case 132:
  break;
 }
        if (VAR_0->name)
           FUNC_1(VAR_0->name);
 FUNC_1(VAR_0);
}
