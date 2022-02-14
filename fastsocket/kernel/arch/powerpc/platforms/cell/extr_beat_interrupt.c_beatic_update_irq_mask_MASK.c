
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long* VAR_0 ;
 unsigned long* VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline void FUNC_2(unsigned int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4[4];

 VAR_3 = (VAR_2 / 256) * 4;
 VAR_4[0] = VAR_1[VAR_3 + 0]
  & VAR_0[VAR_3 + 0];
 VAR_4[1] = VAR_1[VAR_3 + 1]
  & VAR_0[VAR_3 + 1];
 VAR_4[2] = VAR_1[VAR_3 + 2]
  & VAR_0[VAR_3 + 2];
 VAR_4[3] = VAR_1[VAR_3 + 3]
  & VAR_0[VAR_3 + 3];
 if (FUNC_0(VAR_2&~255UL,
  VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]) != 0)
  FUNC_1("Failed to set mask IRQ!");
}
