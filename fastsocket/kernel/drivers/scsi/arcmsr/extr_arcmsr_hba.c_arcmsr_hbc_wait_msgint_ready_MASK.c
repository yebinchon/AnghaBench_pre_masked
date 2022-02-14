
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct MessageUnit_C {int outbound_doorbell_clear; int outbound_doorbell; } ;
struct AdapterControlBlock {scalar_t__ pmuC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static uint8_t FUNC_3(struct AdapterControlBlock *VAR_2)
{
 struct MessageUnit_C *VAR_3 = (struct MessageUnit_C *)VAR_2->pmuC;
 unsigned char VAR_4 = 0x00;
 uint32_t VAR_5;
 do {
  for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
   if (FUNC_1(&VAR_3->outbound_doorbell) & VAR_0) {
    FUNC_2(VAR_1, &VAR_3->outbound_doorbell_clear);
    return 1;
   }

   FUNC_0(10);
  }
 } while (VAR_4++ < 20);
 return 0;
}
