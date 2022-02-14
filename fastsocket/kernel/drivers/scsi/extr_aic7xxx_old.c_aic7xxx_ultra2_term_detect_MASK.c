
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char FUNC_0 (struct aic7xxx_host*) ;

__attribute__((used)) static void
FUNC_1(struct aic7xxx_host *VAR_5, int *VAR_6,
                           int *VAR_7, int *VAR_8,
                           int *VAR_9, int *VAR_10)
{
  unsigned char VAR_11;

  VAR_11 = FUNC_0(VAR_5);

  *VAR_10 = (VAR_11 & VAR_4);
  *VAR_7 = (VAR_11 & VAR_3);
  *VAR_6 = (VAR_11 & VAR_2);
  *VAR_9 = (VAR_11 & VAR_1);
  *VAR_8 = (VAR_11 & VAR_0);
}
