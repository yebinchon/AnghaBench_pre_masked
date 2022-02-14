
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (long,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned int*,int) ;
 int FUNC_2 (unsigned char*,unsigned int*,int) ;
 int FUNC_3 (unsigned char*,unsigned int*,int) ;
 unsigned char* VAR_2 ;

__attribute__((used)) static void FUNC_4(unsigned char VAR_3, long VAR_4, long VAR_5)
{
 unsigned char *VAR_6 = FUNC_0(VAR_4 << 3, VAR_5 << 4);
 unsigned char *VAR_7 = &VAR_2[((unsigned int)VAR_3) * 16];
 int VAR_8 = VAR_1;

 switch(VAR_0) {
 case 24:
 case 32:
  FUNC_2(VAR_7, (unsigned int *)VAR_6, VAR_8);
  break;
 case 15:
 case 16:
  FUNC_1(VAR_7, (unsigned int *)VAR_6, VAR_8);
  break;
 case 8:
  FUNC_3(VAR_7, (unsigned int *)VAR_6, VAR_8);
  break;
 }
}
