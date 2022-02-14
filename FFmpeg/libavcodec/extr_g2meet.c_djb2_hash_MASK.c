
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_1)
{
    uint32_t VAR_2 = 5381;

    VAR_2 = (VAR_2 * 33) ^ ((VAR_1 >> 24) & 0xFF);
    VAR_2 = (VAR_2 * 33) ^ ((VAR_1 >> 16) & 0xFF);
    VAR_2 = (VAR_2 * 33) ^ ((VAR_1 >> 8) & 0xFF);
    VAR_2 = (VAR_2 * 33) ^ (VAR_1 & 0xFF);

    return VAR_2 & (VAR_0 - 1);
}
