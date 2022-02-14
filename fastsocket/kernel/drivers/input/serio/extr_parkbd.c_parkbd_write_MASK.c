
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_4, unsigned char VAR_5)
{
 unsigned char VAR_6;

 if (!VAR_2) return -1;

        VAR_6 = VAR_5 ^ (VAR_5 >> 4);
 VAR_6 = VAR_6 ^ (VAR_6 >> 2);
 VAR_6 = VAR_6 ^ (VAR_6 >> 1);

 VAR_1 = 0;
 VAR_3 = 1;
 VAR_0 = VAR_5 | (((int) (~VAR_6 & 1)) << 8) | 0x600;

 FUNC_0(2);

 return 0;
}
