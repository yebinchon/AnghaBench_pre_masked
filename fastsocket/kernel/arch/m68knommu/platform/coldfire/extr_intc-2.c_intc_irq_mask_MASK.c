
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_6)
{
 if ((VAR_6 >= VAR_4) && (VAR_6 <= VAR_4 + 128)) {
  unsigned long VAR_7;
  u32 VAR_8, VAR_9;

  VAR_6 -= VAR_4;
  VAR_7 = VAR_5;
  VAR_7 += (VAR_6 & 0x40) ? VAR_1 : VAR_0;
  VAR_7 += (VAR_6 & 0x20) ? VAR_2 : VAR_3;
  VAR_9 = 0x1 << (VAR_6 & 0x1f);

  VAR_8 = FUNC_0(VAR_7);
  FUNC_1(VAR_8 | VAR_9, VAR_7);
 }
}
