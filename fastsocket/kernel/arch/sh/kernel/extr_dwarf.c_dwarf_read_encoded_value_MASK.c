
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;






 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, unsigned long *VAR_1,
        char VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4 = 0;

 switch (VAR_2 & 0x70) {
 case 131:
  break;
 case 130:
  VAR_3 = (unsigned long)VAR_0;
  break;
 default:
  FUNC_3("encoding=0x%x\n", (VAR_2 & 0x70));
  FUNC_0();
 }

 if ((VAR_2 & 0x07) == 0x00)
  VAR_2 |= 128;

 switch (VAR_2 & 0x0f) {
 case 129:
 case 128:
  VAR_4 += 4;
  VAR_3 += FUNC_2((u32 *)VAR_0);
  FUNC_1(VAR_3, VAR_1);
  break;
 default:
  FUNC_3("encoding=0x%x\n", VAR_2);
  FUNC_0();
 }

 return VAR_4;
}
