
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mallinfo {int usmblks; } ;


 struct mallinfo FUNC_0 () ;

__attribute__((used)) static uint64_t FUNC_1(void)
{
   struct mallinfo VAR_0 = FUNC_0();
   return VAR_0.usmblks;
}
