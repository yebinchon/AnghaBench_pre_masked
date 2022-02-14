
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT16 ;
struct TYPE_2__ {scalar_t__ service_handle; scalar_t__ max_handle; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

BOOLEAN FUNC_0(UINT16 VAR_3)
{
    if (VAR_3 >= VAR_2.service_handle && VAR_3 <= VAR_2.max_handle) {
        return VAR_1;
    } else {
        return VAR_0;
    }
}
