
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int*) ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned long
FUNC_4(int VAR_3)
{
 unsigned int VAR_4[2];
 unsigned long (*VAR_5)(void);
 unsigned long VAR_6 = -1UL;
 VAR_5 = (unsigned long (*)(void)) VAR_4;



 VAR_4[0] = 0x7c6002a6 + ((VAR_3 & 0x1F) << 16) + ((VAR_3 & 0x3e0) << 6);
 VAR_4[1] = 0x4e800020;
 FUNC_2(VAR_4);
 FUNC_2(VAR_4+1);

 if (FUNC_1(VAR_0) == 0) {
  VAR_1 = 1;
  FUNC_3();

  VAR_6 = VAR_5();

  FUNC_3();

  FUNC_0(200);
  VAR_3 = VAR_2;
 }

 return VAR_6;
}
