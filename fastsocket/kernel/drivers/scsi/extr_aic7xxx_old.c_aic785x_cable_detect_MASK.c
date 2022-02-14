
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct aic7xxx_host*,int ) ;
 int FUNC_2 (struct aic7xxx_host*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct aic7xxx_host *VAR_7, int *VAR_8,
    int *VAR_9, int *VAR_10)
{
  unsigned char VAR_11;

  FUNC_2(VAR_7, VAR_4 | VAR_0, VAR_1);
  FUNC_0(VAR_7);
  FUNC_2(VAR_7, 0, VAR_1);
  FUNC_0(VAR_7);
  VAR_11 = FUNC_1(VAR_7, VAR_1);
  FUNC_0(VAR_7);
  *VAR_8 = !(VAR_11 & VAR_2);
  *VAR_9 = !(VAR_11 & VAR_3);
  *VAR_10 = (FUNC_1(VAR_7, VAR_6) & VAR_5);
}
