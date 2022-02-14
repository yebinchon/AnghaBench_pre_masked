
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int address ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int *,int,int *,int ) ;
 scalar_t__ VAR_1 ;

int FUNC_1(uint32_t VAR_2, uint8_t * VAR_3, uint32_t VAR_4)
{
    if(VAR_1 < 0)
        return VAR_1;

    if(!VAR_3 || !VAR_4)
        return -1;

    return FUNC_0(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2), VAR_3, VAR_4);
}
