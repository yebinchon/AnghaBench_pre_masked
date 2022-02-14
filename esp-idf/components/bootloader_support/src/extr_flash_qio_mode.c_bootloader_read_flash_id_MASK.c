
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;

uint32_t FUNC_1(void)
{
    uint32_t VAR_1 = FUNC_0(VAR_0, 0, 0, 24);
    VAR_1 = ((VAR_1 & 0xff) << 16) | ((VAR_1 >> 16) & 0xff) | (VAR_1 & 0xff00);
    return VAR_1;
}
