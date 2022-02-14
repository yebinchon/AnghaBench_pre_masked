
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {scalar_t__ time24; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(struct rs5c372 *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;

 if (VAR_0->time24)
  return FUNC_0(VAR_1 & 0x3f);

 VAR_2 = FUNC_0(VAR_1 & 0x1f);
 if (VAR_2 == 12)
  VAR_2 = 0;
 if (VAR_1 & 0x20)
  VAR_2 += 12;
 return VAR_2;
}
