
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 unsigned char FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*,unsigned char) ;

__attribute__((used)) static unsigned char
FUNC_2(struct parport *VAR_0, unsigned char VAR_1,
      unsigned char VAR_2)
{
 unsigned char VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, (VAR_3 & ~VAR_1) ^ VAR_2);
 return VAR_3;
}
