
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsmount {int nm_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfsmount*) ;

void
FUNC_1(struct nfsmount *VAR_5, int VAR_6)
{
 int VAR_7 = !(VAR_5->nm_state & VAR_3);

 VAR_5->nm_state |= VAR_3;
 if ((VAR_6 == VAR_0) ||
     (VAR_6 == VAR_1) ||
     (VAR_6 == VAR_2))
  VAR_5->nm_state |= VAR_4;
 if (VAR_7)
  FUNC_0(VAR_5);
}
