
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, short VAR_1, short VAR_2, unsigned char *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, ((void*)0), 10);
 short VAR_5 = (VAR_4 < 0x40) ? VAR_1 : VAR_2;
 VAR_4 &= 0x3f;
 VAR_3[0] = VAR_5 >> 7;
 VAR_3[1] = VAR_4 | (VAR_5 & 0x7f);
}
