
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__,int,int) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(uint8_t VAR_3, uint8_t VAR_4)
{
    if(VAR_4 > 15) {
        return;
    }
    FUNC_1(VAR_3, VAR_2);
    FUNC_0(VAR_3, ((VAR_4/8)?VAR_1:VAR_0) + (VAR_4%8), 0, 0);
}
