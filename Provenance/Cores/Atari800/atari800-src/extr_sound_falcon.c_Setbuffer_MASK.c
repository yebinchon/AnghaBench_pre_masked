
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long* VAR_0 ;

void FUNC_0(long VAR_1, long VAR_2)
{
 long VAR_3 = VAR_1 + VAR_2;
 VAR_0[1] = (VAR_1 >> 16) & 0xff;
 VAR_0[2] = (VAR_1 >> 8) & 0xff;
 VAR_0[3] = VAR_1 & 0xff;
 VAR_0[7] = (VAR_3 >> 16) & 0xff;
 VAR_0[8] = (VAR_3 >> 8) & 0xff;
 VAR_0[9] = VAR_3 & 0xff;
}
