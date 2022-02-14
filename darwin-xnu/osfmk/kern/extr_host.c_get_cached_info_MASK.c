
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mach_msg_type_number_t ;
typedef int integer_t ;
typedef int host_info64_t ;
struct TYPE_2__ {int count; scalar_t__ data; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, host_info64_t VAR_3, mach_msg_type_number_t* VAR_4)
{
    if (VAR_2 < 0 || VAR_2 >= VAR_0) {
        *VAR_4 = 0;
        return;
    }

    *VAR_4 = VAR_1[VAR_2].count;
    FUNC_0(VAR_3, (void *)VAR_1[VAR_2].data, VAR_1[VAR_2].count * sizeof(integer_t));
}
