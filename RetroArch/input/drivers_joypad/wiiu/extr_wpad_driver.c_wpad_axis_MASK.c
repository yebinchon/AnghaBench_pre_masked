
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int int16_t ;
struct TYPE_4__ {int is_negative; int axis; } ;
typedef TYPE_1__ axis_data ;
struct TYPE_5__ {int (* get_axis_value ) (int ,int ,int ) ;int (* read_axis_data ) (scalar_t__,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int16_t FUNC_3(unsigned VAR_3, uint32_t VAR_4)
{
   axis_data VAR_5;

   if (!FUNC_2(VAR_3) || VAR_4 == VAR_0)
      return 0;

   VAR_2.read_axis_data(VAR_4, &VAR_5);
   return VAR_2.get_axis_value(VAR_5.axis, VAR_1, VAR_5.is_negative);
}
