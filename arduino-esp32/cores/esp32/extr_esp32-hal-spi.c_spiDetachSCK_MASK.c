
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num; } ;
typedef TYPE_1__ spi_t ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(spi_t * VAR_3, int8_t VAR_4)
{
    if(!VAR_3) {
        return;
    }
    if(VAR_4 < 0) {
        if(VAR_3->num == VAR_0) {
            VAR_4 = 14;
        } else if(VAR_3->num == VAR_2) {
            VAR_4 = 18;
        } else {
            VAR_4 = 6;
        }
    }
    FUNC_0(VAR_4, 0, 0);
    FUNC_1(VAR_4, VAR_1);
}
