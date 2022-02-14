
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 unsigned int VAR_2;
 int VAR_3 = 0;




 VAR_2 = *VAR_1;
 if (VAR_2 & 0xf900) {
  FUNC_0("\t\t\tPCI: P0 - status = 0x%08x\n", VAR_2);
  *VAR_1 = VAR_2 & 0xf900;
  VAR_3 = 1;
 }

 VAR_2 = *VAR_0;
 if (VAR_2 & 0x679f) {
  FUNC_0("\t\t\tPCI: P1 - status = 0x%08x\n", VAR_2);
  *VAR_0 = VAR_2 & 0x679f;
  VAR_3 = 1;
 }

 return VAR_3;
}
