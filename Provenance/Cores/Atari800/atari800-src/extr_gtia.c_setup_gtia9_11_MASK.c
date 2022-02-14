
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* UWORD ;
typedef int ULONG ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 void** VAR_3 ;

__attribute__((used)) static void FUNC_0(void) {
 int VAR_4;
 ULONG VAR_5 = 0;
 ULONG VAR_6 = 0;
 VAR_0[0] = VAR_1[0] & 0xf0f0f0f0;
 for (VAR_4 = 1; VAR_4 < 16; VAR_4++) {
  VAR_1[VAR_4] = VAR_1[0] | (VAR_5 += 0x01010101);
  VAR_0[VAR_4] = VAR_1[0] | (VAR_6 += 0x10101010);
 }

}
