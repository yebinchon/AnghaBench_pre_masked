
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 double FUNC_0 (int,double,int) ;
 int FUNC_1 (int,int) ;

double FUNC_2(uint8_t VAR_0, double VAR_1)
{
    if(VAR_0 > 15) {
        return 0;
    }
    if(!VAR_1) {
        FUNC_1(VAR_0, 0);
        return 0;
    }
    double VAR_2 = FUNC_0(VAR_0, VAR_1, 10);
    FUNC_1(VAR_0, 0x1FF);
    return VAR_2;
}
