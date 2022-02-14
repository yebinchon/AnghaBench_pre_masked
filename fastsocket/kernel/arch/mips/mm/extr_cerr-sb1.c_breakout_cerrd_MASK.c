
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
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_8)
{
 switch (VAR_8 & VAR_0) {
 case 129:
  FUNC_0(" load,");
  break;
 case 128:
  FUNC_0(" store,");
  break;
 case 130:
  FUNC_0(" fill/wb,");
  break;
 case 132:
  FUNC_0(" coherency,");
  break;
 case 131:
  FUNC_0(" duptags,");
  break;
 default:
  FUNC_0(" NO CAUSE,");
  break;
 }
 if (!(VAR_8 & VAR_7))
  FUNC_0(" NO TYPE");
 else {
  if (VAR_8 & VAR_4)
   FUNC_0(" multi-err");
  if (VAR_8 & VAR_6)
   FUNC_0(" tag-state");
  if (VAR_8 & VAR_5)
   FUNC_0(" tag-address");
  if (VAR_8 & VAR_2)
   FUNC_0(" data-SBE");
  if (VAR_8 & VAR_1)
   FUNC_0(" data-DBE");
  if (VAR_8 & VAR_3)
   FUNC_0(" external");
 }
 FUNC_0("\n");
}
