
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sh2irqs; int* sh2irqi; } ;
typedef int SH2 ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int VAR_4 ;

void FUNC_5(SH2 *VAR_5, int VAR_6)
{
  int VAR_7, VAR_8 = 0, VAR_9 = 0;
  int VAR_10, VAR_11;

  if (VAR_5 != ((void*)0))
    VAR_6 = FUNC_2(VAR_5);


  VAR_7 = VAR_1.sh2irqs | VAR_1.sh2irqi[0];
  while ((VAR_7 >>= 1))
    VAR_8++;
  VAR_8 *= 2;


  VAR_7 = VAR_1.sh2irqs | VAR_1.sh2irqi[1];
  while ((VAR_7 >>= 1))
    VAR_9++;
  VAR_9 *= 2;

  VAR_10 = FUNC_4(&VAR_3, VAR_8, VAR_5 == &VAR_3);
  if (VAR_10) {
    FUNC_1(&VAR_3, VAR_2, VAR_6);
    if (VAR_5 == &VAR_3)
      FUNC_3(VAR_5, 1);
  }

  VAR_11 = FUNC_4(&VAR_4, VAR_9, VAR_5 == &VAR_4);
  if (VAR_11) {
    FUNC_1(&VAR_4, VAR_2, VAR_6);
    if (VAR_5 == &VAR_4)
      FUNC_3(VAR_5, 1);
  }

  FUNC_0(VAR_0, "update_irls: m %d/%d, s %d/%d", VAR_8, VAR_10, VAR_9, VAR_11);
}
