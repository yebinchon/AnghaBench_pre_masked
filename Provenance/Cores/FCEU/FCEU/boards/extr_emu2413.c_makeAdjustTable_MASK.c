
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int int32 ;


 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void) {
 int32 VAR_2;

 VAR_0[0] = (1 << VAR_1);
 for (VAR_2 = 1; VAR_2 < 128; VAR_2++)
  VAR_0[VAR_2] = (uint16)((double)(1 << VAR_1) - 1 - (1 << VAR_1) * FUNC_0(VAR_2) / FUNC_0(128));
}
