
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static inline void FUNC_3(unsigned int VAR_6)
{
 if ((VAR_1 <= VAR_6) && (VAR_6 <= VAR_0)) {
  FUNC_0(0, 1 << VAR_6);
 } else if ((VAR_3 <= VAR_6) &&
  (VAR_6 <= VAR_2)) {
  FUNC_2(VAR_6 - VAR_3);
 } else if ((VAR_5 <= VAR_6) &&
  (VAR_6 <= VAR_4)) {
  FUNC_0(0, 1 << 7);
 } else {
  FUNC_1("mask_irq: irq %d doesn't exist!\n", VAR_6);
 }
}
