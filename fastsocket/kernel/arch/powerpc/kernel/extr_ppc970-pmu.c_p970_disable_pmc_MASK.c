
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_2, unsigned long VAR_3[])
{
 int VAR_4, VAR_5;

 if (VAR_2 <= 1) {
  VAR_4 = VAR_0 - 7 * VAR_2;
  VAR_5 = 0;
 } else {
  VAR_4 = VAR_1 - 5 * (VAR_2 - 2);
  VAR_5 = 1;
 }



 VAR_3[VAR_5] = (VAR_3[VAR_5] & ~(0x1fUL << VAR_4)) | (0x08UL << VAR_4);
}
