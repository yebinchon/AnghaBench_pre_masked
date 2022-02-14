
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int16_t *VAR_2)
{
    int VAR_3, VAR_4;

    VAR_3 = VAR_2[VAR_0];
    VAR_4 = VAR_2[VAR_1];
    return (VAR_3 + (VAR_4 * (1 << 8)) + (VAR_4 * (1 << 16))) * 2;
}
