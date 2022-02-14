
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int VAR_4 ;

void FUNC_4(int VAR_5)
{
 if (!VAR_5 && (VAR_4 & 0x80)){

  FUNC_1(FUNC_3("votrax IRQ generated\n"));
  FUNC_0();
  VAR_0 |= VAR_3;
 }
 else if (VAR_5 && (VAR_0 & VAR_3)) {

  VAR_0 &= ~VAR_3;

  FUNC_2(VAR_2, VAR_1);
 }
}
