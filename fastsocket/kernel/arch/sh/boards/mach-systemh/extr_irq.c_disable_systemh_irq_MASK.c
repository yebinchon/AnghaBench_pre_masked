
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 if (VAR_0) {
  unsigned long VAR_3, VAR_4 = 0x01 << 1;


  VAR_3 = FUNC_0((unsigned long)VAR_0);
  VAR_3 &= ~VAR_4;
  FUNC_1(VAR_3, (unsigned long)VAR_0);

  VAR_3 = FUNC_0((unsigned long)VAR_1);
  VAR_3 |= VAR_4;
  FUNC_1(VAR_3, (unsigned long)VAR_1);
 }
}
