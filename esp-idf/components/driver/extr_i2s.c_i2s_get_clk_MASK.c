
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t i2s_port_t ;
struct TYPE_2__ {float real_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_1 ;
 TYPE_1__** VAR_2 ;

float FUNC_1(i2s_port_t VAR_3)
{
    FUNC_0((VAR_3 < VAR_1), "i2s_num error", VAR_0);
    return VAR_2[VAR_3]->real_rate;
}
