
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_4);

 VAR_8 = VAR_5 - FUNC_1(0);

 if (VAR_6 & VAR_1) {
  FUNC_0("rising edges\n");
  VAR_7 |= (1 << 26) << VAR_8;
 }
 if (VAR_6 & VAR_0) {
  FUNC_0("falling edges\n");
  VAR_7 &= ~((1 << 26) << VAR_8);
 }
 if (VAR_6 & VAR_3) {
  FUNC_0("low level\n");
  VAR_7 &= ~((1 << 26) << VAR_8);
 }
 if (VAR_6 & VAR_2) {
  FUNC_0("high level\n");
  VAR_7 |= (1 << 26) << VAR_8;
 }

 FUNC_3(VAR_7, VAR_4);

 return 0;
}
