
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct aic7xxx_host*,int ) ;
 int FUNC_1 (struct aic7xxx_host*,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct aic7xxx_host*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct aic7xxx_host*,int ) ;

__attribute__((used)) static void
FUNC_6(struct aic7xxx_host *VAR_9, int VAR_10)
{
  int VAR_11, VAR_12, VAR_13;

  FUNC_1(VAR_9, VAR_3|VAR_2|VAR_0|VAR_1, VAR_6);
  FUNC_1(VAR_9, 0, VAR_4);
  FUNC_1(VAR_9, 0, VAR_5);

  VAR_12 = 0;
  for (VAR_11=0; VAR_11 < VAR_10; VAR_11++)
  {
    if ( VAR_12 == 0 )
      FUNC_4("%03x: ", VAR_11);
    VAR_13 = FUNC_0(VAR_9, VAR_7);
    VAR_13 |= (FUNC_0(VAR_9, VAR_7) << 8);
    VAR_13 |= (FUNC_0(VAR_9, VAR_7) << 16);
    VAR_13 |= (FUNC_0(VAR_9, VAR_7) << 24);
    FUNC_4("%08x", VAR_13);
    if ( ++VAR_12 == 8 )
    {
      FUNC_4("\n");
      VAR_12 = 0;
    }
    else
      FUNC_4(" ");
  }
  FUNC_1(VAR_9, 0, VAR_4);
  FUNC_1(VAR_9, 0, VAR_5);
  FUNC_1(VAR_9, VAR_1 | VAR_0, VAR_6);
  FUNC_5(VAR_9, VAR_8);
  FUNC_2(1);
  FUNC_3(VAR_9);
  FUNC_1(VAR_9, VAR_1, VAR_6);
  FUNC_4("\n");
}
