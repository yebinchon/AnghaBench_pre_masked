
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(void)
{
 unsigned char *VAR_7 = (unsigned char *)VAR_2 + 16;


 if (VAR_4 == 0 || VAR_3) return;

 VAR_7 += 512 * (VAR_6 + VAR_1);
 VAR_7 += VAR_5 + VAR_0;
 VAR_7[ -1] = 0xe0; VAR_7[ 0] = 0xf0; VAR_7[ 1] = 0xe0;
 VAR_7[ 511] = 0xf0; VAR_7[ 512] = 0xf0; VAR_7[ 513] = 0xf0;
 VAR_7[1023] = 0xe0; VAR_7[1024] = 0xf0; VAR_7[1025] = 0xe0;
}
