
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static inline bool FUNC_3(unsigned int VAR_1, unsigned char VAR_2)
{
 unsigned int VAR_3;
 FUNC_1(VAR_2, VAR_1);
 for (VAR_3 = 0; VAR_3 < 40000; VAR_3++) {
  if (FUNC_0(VAR_1) & VAR_0)
   return 0;
 }
 FUNC_2("3c505: send_pcb_fast timed out\n");
 return 1;
}
