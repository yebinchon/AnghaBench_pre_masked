
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* uuid_t ;


 int FUNC_0 (int*) ;

__attribute__((used)) static inline void
FUNC_1(uuid_t VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0);

 if (VAR_1) {
  VAR_0[9] |= 0x01;
 } else {
  VAR_0[9] &= ~0x01;
 }
}
