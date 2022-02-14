
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_5__ {int is_negative; int axis; } ;
typedef TYPE_1__ axis_data ;
struct TYPE_7__ {int (* get_axis_value ) (int ,int ,int ) ;int (* read_axis_data ) (scalar_t__,TYPE_1__*) ;} ;
struct TYPE_6__ {int analog_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (unsigned int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int16_t FUNC_4(unsigned VAR_3, uint32_t VAR_4)
{
   axis_data VAR_5;
   int VAR_6 = FUNC_3(VAR_3);

   if (!FUNC_0(VAR_3) || VAR_6 < 0 || VAR_4 == VAR_0)
      return 0;

   VAR_1.read_axis_data(VAR_4, &VAR_5);
   return VAR_1.get_axis_value(VAR_5.axis,
         VAR_2[VAR_6].analog_state,
         VAR_5.is_negative);
}
