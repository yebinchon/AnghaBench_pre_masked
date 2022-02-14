
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 () ;

uint64_t FUNC_1()
{
 union {
  uint64_t u;
  uint8_t chr[8];
 } VAR_0;
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  VAR_0.chr[VAR_1] = FUNC_0() & 0xff;
 return VAR_0.u;
}
