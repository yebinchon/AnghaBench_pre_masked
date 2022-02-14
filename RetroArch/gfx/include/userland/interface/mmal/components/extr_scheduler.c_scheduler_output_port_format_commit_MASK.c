
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t index; TYPE_2__* component; int format; } ;
struct TYPE_6__ {TYPE_1__** input; } ;
struct TYPE_5__ {int format; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_1)
{

   if (FUNC_1(VAR_1->format, VAR_1->component->input[VAR_1->index]->format))
      FUNC_0("output port format different from input port");

   return VAR_0;
}
