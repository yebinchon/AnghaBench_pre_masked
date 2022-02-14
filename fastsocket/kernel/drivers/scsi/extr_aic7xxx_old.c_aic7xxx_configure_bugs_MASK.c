
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {int chip; int bugs; int pdev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 int FUNC_0 (struct aic7xxx_host*,int ) ;
 int FUNC_1 (struct aic7xxx_host*,int,int ) ;
 int FUNC_2 (int ,int ,unsigned short*) ;
 int FUNC_3 (int ,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_4(struct aic7xxx_host *VAR_12)
{
  unsigned short VAR_13;

  switch(VAR_12->chip & VAR_7)
  {
    case 135:
      VAR_12->bugs |= VAR_3;

    case 136:
    case 134:
      VAR_12->bugs |= VAR_6 | VAR_1 | VAR_4;
      break;
    case 133:
      VAR_12->bugs |= VAR_6 | VAR_3 |
                 VAR_1 | VAR_4;
      break;
    case 132:
      VAR_12->bugs |= VAR_0 | VAR_1;
      break;
    case 131:
      VAR_12->bugs |= VAR_5;
      break;
    case 130:
      VAR_12->bugs |= VAR_6 | VAR_3 |
                 VAR_1 | VAR_4;
      break;
    case 129:
      VAR_12->bugs |= VAR_2;
      break;
    case 128:
      VAR_12->bugs |= VAR_5;
      break;
    default:

      break;
  }




  FUNC_2(VAR_12->pdev, VAR_10, &VAR_13);
  if(VAR_12->bugs & VAR_4)
  {
    VAR_13 &= ~VAR_11;
  }
  else
  {
    VAR_13 |= VAR_11;
  }
  FUNC_3(VAR_12->pdev, VAR_10, VAR_13);

  if(VAR_12->bugs & VAR_1)
  {
    FUNC_1(VAR_12, FUNC_0(VAR_12, VAR_9) & ~VAR_8, VAR_9);
  }
  else if (VAR_12->bugs & VAR_2)
  {
    FUNC_1(VAR_12, FUNC_0(VAR_12, VAR_9) | VAR_8, VAR_9);
  }

  return;
}
