
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_host {int flags; TYPE_1__* scb_data; } ;
struct TYPE_2__ {int maxhscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct aic7xxx_host*,scalar_t__) ;
 int FUNC_1 (struct aic7xxx_host*,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct aic7xxx_host *VAR_9)
{
  int VAR_10;





  if (VAR_9->scb_data->maxhscbs == 0)
  {




    FUNC_1(VAR_9, 0, VAR_2);

    for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
    {
      FUNC_1(VAR_9, VAR_10, VAR_3);
      FUNC_1(VAR_9, VAR_10, VAR_5);
      if (FUNC_0(VAR_9, VAR_5) != VAR_10)
        break;
      FUNC_1(VAR_9, 0, VAR_3);
      if (FUNC_0(VAR_9, VAR_5) != 0)
        break;

      FUNC_1(VAR_9, VAR_10, VAR_3);
      FUNC_1(VAR_9, 0, VAR_5);
      FUNC_1(VAR_9, VAR_10 + 1, VAR_7);
      FUNC_1(VAR_9, VAR_6, VAR_8);
      FUNC_1(VAR_9, VAR_6, VAR_4);
      FUNC_1(VAR_9, VAR_6, VAR_4+1);
      FUNC_1(VAR_9, VAR_6, VAR_4+2);
      FUNC_1(VAR_9, VAR_6, VAR_4+3);
    }


    FUNC_1(VAR_9, VAR_10 - 1, VAR_3);
    FUNC_1(VAR_9, VAR_6, VAR_7);


    FUNC_1(VAR_9, 0, VAR_3);
    FUNC_1(VAR_9, 0, VAR_5);

    VAR_9->scb_data->maxhscbs = VAR_10;



    if ( VAR_10 == VAR_1 )
      VAR_9->flags &= ~VAR_0;
  }

}
