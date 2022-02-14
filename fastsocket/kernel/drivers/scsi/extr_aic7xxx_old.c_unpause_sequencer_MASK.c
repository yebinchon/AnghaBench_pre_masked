
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int flags; int unpause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aic7xxx_host*,int ) ;
 int FUNC_1 (struct aic7xxx_host*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_6, int VAR_7)
{
  if (VAR_7 ||
      ( !(FUNC_0(VAR_6, VAR_3) & (VAR_4 | VAR_5 | VAR_1)) &&
        !(VAR_6->flags & VAR_0) ) )
  {
    FUNC_1(VAR_6, VAR_6->unpause, VAR_2);
  }
}
