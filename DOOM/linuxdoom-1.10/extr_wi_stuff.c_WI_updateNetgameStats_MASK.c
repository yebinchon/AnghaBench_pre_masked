
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int boolean ;
struct TYPE_4__ {int skills; int sitems; int ssecret; } ;
struct TYPE_3__ {int maxkills; int maxitems; int maxsecret; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 TYPE_2__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__* VAR_19 ;

void FUNC_5(void)
{

    int VAR_20;
    int VAR_21;

    boolean VAR_22;

    FUNC_4();

    if (VAR_2 && VAR_12 != 10)
    {
 VAR_2 = 0;

 for (VAR_20=0 ; VAR_20<VAR_0 ; VAR_20++)
 {
     if (!VAR_13[VAR_20])
  continue;

     VAR_6[VAR_20] = (VAR_14[VAR_20].skills * 100) / VAR_19->maxkills;
     VAR_5[VAR_20] = (VAR_14[VAR_20].sitems * 100) / VAR_19->maxitems;
     VAR_8[VAR_20] = (VAR_14[VAR_20].ssecret * 100) / VAR_19->maxsecret;

     if (VAR_10)
  VAR_4[VAR_20] = FUNC_1(VAR_20);
 }
 FUNC_0(0, VAR_15);
 VAR_12 = 10;
    }

    if (VAR_12 == 2)
    {
 if (!(VAR_3&3))
     FUNC_0(0, VAR_16);

 VAR_22 = 0;

 for (VAR_20=0 ; VAR_20<VAR_0 ; VAR_20++)
 {
     if (!VAR_13[VAR_20])
  continue;

     VAR_6[VAR_20] += 2;

     if (VAR_6[VAR_20] >= (VAR_14[VAR_20].skills * 100) / VAR_19->maxkills)
  VAR_6[VAR_20] = (VAR_14[VAR_20].skills * 100) / VAR_19->maxkills;
     else
  VAR_22 = 1;
 }

 if (!VAR_22)
 {
     FUNC_0(0, VAR_15);
     VAR_12++;
 }
    }
    else if (VAR_12 == 4)
    {
 if (!(VAR_3&3))
     FUNC_0(0, VAR_16);

 VAR_22 = 0;

 for (VAR_20=0 ; VAR_20<VAR_0 ; VAR_20++)
 {
     if (!VAR_13[VAR_20])
  continue;

     VAR_5[VAR_20] += 2;
     if (VAR_5[VAR_20] >= (VAR_14[VAR_20].sitems * 100) / VAR_19->maxitems)
  VAR_5[VAR_20] = (VAR_14[VAR_20].sitems * 100) / VAR_19->maxitems;
     else
  VAR_22 = 1;
 }
 if (!VAR_22)
 {
     FUNC_0(0, VAR_15);
     VAR_12++;
 }
    }
    else if (VAR_12 == 6)
    {
 if (!(VAR_3&3))
     FUNC_0(0, VAR_16);

 VAR_22 = 0;

 for (VAR_20=0 ; VAR_20<VAR_0 ; VAR_20++)
 {
     if (!VAR_13[VAR_20])
  continue;

     VAR_8[VAR_20] += 2;

     if (VAR_8[VAR_20] >= (VAR_14[VAR_20].ssecret * 100) / VAR_19->maxsecret)
  VAR_8[VAR_20] = (VAR_14[VAR_20].ssecret * 100) / VAR_19->maxsecret;
     else
  VAR_22 = 1;
 }

 if (!VAR_22)
 {
     FUNC_0(0, VAR_15);
     VAR_12 += 1 + 2*!VAR_10;
 }
    }
    else if (VAR_12 == 8)
    {
 if (!(VAR_3&3))
     FUNC_0(0, VAR_16);

 VAR_22 = 0;

 for (VAR_20=0 ; VAR_20<VAR_0 ; VAR_20++)
 {
     if (!VAR_13[VAR_20])
  continue;

     VAR_4[VAR_20] += 1;

     if (VAR_4[VAR_20] >= (VAR_21 = FUNC_1(VAR_20)))
  VAR_4[VAR_20] = VAR_21;
     else
  VAR_22 = 1;
 }

 if (!VAR_22)
 {
     FUNC_0(0, VAR_17);
     VAR_12++;
 }
    }
    else if (VAR_12 == 10)
    {
 if (VAR_2)
 {
     FUNC_0(0, VAR_18);
     if ( VAR_11 == VAR_9 )
  FUNC_2();
     else
  FUNC_3();
 }
    }
    else if (VAR_12 & 1)
    {
 if (!--VAR_7)
 {
     VAR_12++;
     VAR_7 = VAR_1;
 }
    }
}
