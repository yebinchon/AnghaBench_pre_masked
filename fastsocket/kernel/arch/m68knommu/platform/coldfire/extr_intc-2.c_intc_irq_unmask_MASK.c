
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_8)
{
 if ((VAR_8 >= VAR_5) && (VAR_8 <= VAR_5 + 128)) {
  unsigned long VAR_9, VAR_10, VAR_11;
  u32 VAR_12, VAR_13;

  VAR_8 -= VAR_5;
  VAR_9 = VAR_6;
  VAR_9 += (VAR_8 & 0x40) ? VAR_1 : VAR_0;
  VAR_10 = VAR_9 + ((VAR_8 & 0x20) ? VAR_3 : VAR_4);
  VAR_11 = VAR_9 + VAR_2 + (VAR_8 & 0x3f);
  VAR_13 = 0x1 << (VAR_8 & 0x1f);


  if ((VAR_8 & 0x20) == 0)
   VAR_13 |= 0x1;

  if (FUNC_0(VAR_11) == 0)
   FUNC_2(VAR_7--, VAR_11);

  VAR_12 = FUNC_1(VAR_10);
  FUNC_3(VAR_12 & ~VAR_13, VAR_10);
 }
}
