
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BusLogic_ByteCounter {unsigned int Units; int Billions; } ;



__attribute__((used)) static inline void FUNC_0(struct BusLogic_ByteCounter
       *VAR_0, unsigned int VAR_1)
{
 VAR_0->Units += VAR_1;
 if (VAR_0->Units > 999999999) {
  VAR_0->Units -= 1000000000;
  VAR_0->Billions++;
 }
}
