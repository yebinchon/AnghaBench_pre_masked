
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned char,unsigned int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static inline bool FUNC_4(unsigned int VAR_3, unsigned char VAR_4)
{
 unsigned long VAR_5;
 FUNC_1(VAR_4, VAR_3);
 for (VAR_5 = VAR_2 + 5*VAR_1/100; FUNC_3(VAR_2, VAR_5);) {
  if (FUNC_0(VAR_3) & VAR_0)
   return 0;
 }
 FUNC_2("3c505: send_pcb_slow timed out\n");
 return 1;
}
