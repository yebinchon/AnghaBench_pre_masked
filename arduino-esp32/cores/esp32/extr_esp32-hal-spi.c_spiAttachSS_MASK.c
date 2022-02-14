
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {scalar_t__ num; } ;
typedef TYPE_1__ spi_t ;
typedef int int8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(spi_t * VAR_3, uint8_t VAR_4, int8_t VAR_5)
{
    if(!VAR_3) {
        return;
    }
    if(VAR_4 > 2) {
        return;
    }
    if(VAR_5 < 0) {
        VAR_4 = 0;
        if(VAR_3->num == VAR_0) {
            VAR_5 = 15;
        } else if(VAR_3->num == VAR_2) {
            VAR_5 = 5;
        } else {
            VAR_5 = 11;
        }
    }
    FUNC_2(VAR_5, VAR_1);
    FUNC_1(VAR_5, FUNC_0(VAR_3->num, VAR_4), 0, 0);
    FUNC_3(VAR_3, (1 << VAR_4));
}
