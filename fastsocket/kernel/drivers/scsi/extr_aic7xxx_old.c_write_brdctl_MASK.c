
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int features; int chip; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 int FUNC_1 (struct aic7xxx_host*,unsigned char,int ) ;
 int FUNC_2 (struct aic7xxx_host*) ;

__attribute__((used)) static void
FUNC_3(struct aic7xxx_host *VAR_8, unsigned char VAR_9)
{
  unsigned char VAR_10;




  FUNC_0(VAR_8);
  if (VAR_8->features & VAR_3)
  {
    VAR_10 = VAR_9;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    VAR_10 |= VAR_7;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    VAR_10 &= ~VAR_7;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    FUNC_2(VAR_8);
    FUNC_0(VAR_8);
  }
  else
  {
    VAR_10 = VAR_6;
    if ( !((VAR_8->chip & VAR_1) == VAR_0) ||
          (VAR_8->flags & VAR_2) )
    {
      VAR_10 |= VAR_4;
    }
    VAR_10 = VAR_6 | VAR_4;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    VAR_10 |= VAR_9;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    VAR_10 &= ~VAR_6;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
    VAR_10 &= ~VAR_4;
    FUNC_1(VAR_8, VAR_10, VAR_5);
    FUNC_0(VAR_8);
  }
}
