
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int portTickType ;
typedef scalar_t__ BaseType_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,size_t,int ) ;

size_t FUNC_1(const uint8_t *VAR_2, size_t VAR_3)
{
    BaseType_t VAR_4 = FUNC_0(VAR_1, (void *)VAR_2, VAR_3, (portTickType)VAR_0);
    if(VAR_4){
        return VAR_3;
    } else {
        return 0;
    }
}
