
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_state {int chstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bc_state*) ;
 int FUNC_1 (struct bc_state*) ;
 int FUNC_2 (struct bc_state*,int ) ;

__attribute__((used)) static void FUNC_3(struct bc_state *VAR_5)
{
 if (VAR_5->chstate & VAR_0) {
  VAR_5->chstate &= ~VAR_0;
  FUNC_2(VAR_5, VAR_3);
 }

 if (VAR_5->chstate & (VAR_1 | VAR_2)) {
  VAR_5->chstate &= ~(VAR_1 | VAR_2);
  FUNC_2(VAR_5, VAR_4);
 }

 FUNC_1(VAR_5);

 FUNC_0(VAR_5);
}
