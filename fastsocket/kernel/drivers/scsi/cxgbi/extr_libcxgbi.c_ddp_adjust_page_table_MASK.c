
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned long* VAR_5 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_6;
 unsigned int VAR_7, VAR_8;

 if (VAR_3 < (1UL << VAR_5[0])) {
  FUNC_1("PAGE_SIZE 0x%lx too small, min 0x%lx\n",
   VAR_3, 1UL << VAR_5[0]);
  return -VAR_1;
 }

 VAR_7 = FUNC_0(1UL << VAR_5[0]);
 VAR_8 = FUNC_0(1UL << VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  VAR_4[VAR_6] = VAR_8 - VAR_7 + VAR_6;
  VAR_5[VAR_6] = VAR_2 + VAR_6;
 }
 return 0;
}
