
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int ppnum_t ;
typedef int pmap_paddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (int,int ,unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_7(pmap_paddr_t VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 ppnum_t VAR_8 = (VAR_3 >> VAR_1);
 unsigned char VAR_9;
 unsigned short VAR_10;
 vm_offset_t VAR_11 = 0;

 FUNC_1();
 VAR_7 = FUNC_3(VAR_8);
 VAR_5 = FUNC_5(VAR_8, VAR_2, VAR_7);
 VAR_11 = FUNC_4(FUNC_0(), VAR_5) | ((uint32_t)VAR_3 & VAR_0);;

 switch (VAR_4) {
  case 1:
   VAR_9 = *(volatile unsigned char *)(VAR_11);
   VAR_6 = VAR_9;
   break;
  case 2:
   VAR_10 = *(volatile unsigned short *)(VAR_11);
   VAR_6 = VAR_10;
   break;
  case 4:
  default:
   VAR_6 = *(volatile unsigned int *)(VAR_11);
   break;
 }

 FUNC_6(VAR_5);
 FUNC_2();

 return VAR_6;
}
