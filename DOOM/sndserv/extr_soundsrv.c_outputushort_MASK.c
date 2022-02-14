
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,...) ;

void FUNC_1(int VAR_0)
{

    static unsigned char VAR_1[5] = { 0, 0, 0, 0, '\n' };
    static char* VAR_2 = "xxxx\n";


    if (VAR_0 < 0)
    {
 FUNC_0(1, VAR_2, 5);
    }
    else
    {
 VAR_1[0] = VAR_0>>12;
 VAR_1[0] += VAR_1[0] > 9 ? 'a'-10 : '0';
 VAR_1[1] = (VAR_0>>8) & 0xf;
 VAR_1[1] += VAR_1[1] > 9 ? 'a'-10 : '0';
 VAR_1[2] = (VAR_0>>4) & 0xf;
 VAR_1[2] += VAR_1[2] > 9 ? 'a'-10 : '0';
 VAR_1[3] = VAR_0 & 0xf;
 VAR_1[3] += VAR_1[3] > 9 ? 'a'-10 : '0';
 FUNC_0(1, VAR_1, 5);
    }
}
