
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t spi_host_device_t ;
struct TYPE_2__ {int module; } ;


 int FUNC_0 (int ,char*,size_t,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int ) ;
 char const** VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

bool FUNC_3(spi_host_device_t VAR_4, const char* VAR_5)
{
    bool VAR_6 = 0;
    bool VAR_7 = FUNC_1(&VAR_2[VAR_4], &VAR_6, 1);
    if (VAR_7) {
        VAR_1[VAR_4] = VAR_5;
        FUNC_2(VAR_3[VAR_4].module);
    } else {
        FUNC_0(VAR_0, "SPI%d already claimed by %s.", VAR_4+1, VAR_1[VAR_4]);
    }
    return VAR_7;
}
