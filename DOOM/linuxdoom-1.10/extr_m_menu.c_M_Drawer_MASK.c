
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {short x; short y; short numitems; TYPE_1__* menuitems; int (* routine ) () ;} ;
struct TYPE_5__ {int height; } ;
struct TYPE_4__ {scalar_t__* name; } ;


 short VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (short,short,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 short VAR_2 ;
 int FUNC_4 (short,int,int ,int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__** VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__** VAR_10 ;
 int FUNC_7 (char*,char*) ;
 short FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,short) ;
 int FUNC_10 () ;
 size_t VAR_11 ;

void FUNC_11 (void)
{
    static short VAR_12;
    static short VAR_13;
    short VAR_14;
    short VAR_15;
    char VAR_16[40];
    int VAR_17;

    VAR_5 = 0;



    if (VAR_9)
    {
 VAR_17 = 0;
 VAR_13 = 100 - FUNC_0(VAR_8)/2;
 while(*(VAR_8+VAR_17))
 {
     for (VAR_14 = 0;VAR_14 < FUNC_8(VAR_8+VAR_17);VAR_14++)
  if (*(VAR_8+VAR_17+VAR_14) == '\n')
  {
      FUNC_6(VAR_16,0,40);
      FUNC_9(VAR_16,VAR_8+VAR_17,VAR_14);
      VAR_17 += VAR_14+1;
      break;
  }

     if (VAR_14 == FUNC_8(VAR_8+VAR_17))
     {
  FUNC_7(VAR_16,VAR_8+VAR_17);
  VAR_17 += VAR_14;
     }

     VAR_12 = 160 - FUNC_1(VAR_16)/2;
     FUNC_2(VAR_12,VAR_13,VAR_16);
     VAR_13 += FUNC_3(VAR_4[0]->height);
 }
 return;
    }

    if (!VAR_7)
 return;

    if (VAR_3->routine)
 VAR_3->routine();


    VAR_12 = VAR_3->x;
    VAR_13 = VAR_3->y;
    VAR_15 = VAR_3->numitems;

    for (VAR_14=0;VAR_14<VAR_15;VAR_14++)
    {
 if (VAR_3->menuitems[VAR_14].name[0])
     FUNC_4 (VAR_12,VAR_13,0,
          FUNC_5(VAR_3->menuitems[VAR_14].name ,VAR_1));
 VAR_13 += VAR_0;
    }



    FUNC_4(VAR_12 + VAR_2,VAR_3->y - 5 + VAR_6*VAR_0, 0,
        FUNC_5(VAR_10[VAR_11],VAR_1));

}
