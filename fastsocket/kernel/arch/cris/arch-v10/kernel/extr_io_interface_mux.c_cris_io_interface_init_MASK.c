
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;
 void** VAR_1 ;
 void** VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_0(void)
{
 static int VAR_4 = 1;
 int VAR_5;

 if (!VAR_4) {
  return 0;
 }
 VAR_4 = 0;

 for (VAR_5 = 0; VAR_5<8; VAR_5++) {
  VAR_0[VAR_5] = VAR_3;
  VAR_1[VAR_5] = VAR_3;
  VAR_2[VAR_5] = VAR_3;
 }
 for (; VAR_5<32; VAR_5++) {
  VAR_2[VAR_5] = VAR_3;
 }
 return 0;
}
