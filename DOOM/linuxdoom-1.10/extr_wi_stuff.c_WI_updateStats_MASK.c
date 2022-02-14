
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int skills; int sitems; int ssecret; int stime; } ;
struct TYPE_3__ {int maxkills; int maxitems; int maxsecret; int partime; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;

void FUNC_4(void)
{

    FUNC_3();

    if (VAR_1 && VAR_16 != 10)
    {
 VAR_1 = 0;
 VAR_4[0] = (VAR_12[VAR_11].skills * 100) / VAR_17->maxkills;
 VAR_3[0] = (VAR_12[VAR_11].sitems * 100) / VAR_17->maxitems;
 VAR_7[0] = (VAR_12[VAR_11].ssecret * 100) / VAR_17->maxsecret;
 VAR_8 = VAR_12[VAR_11].stime / VAR_0;
 VAR_5 = VAR_17->partime / VAR_0;
 FUNC_0(0, VAR_13);
 VAR_16 = 10;
    }

    if (VAR_16 == 2)
    {
 VAR_4[0] += 2;

 if (!(VAR_2&3))
     FUNC_0(0, VAR_14);

 if (VAR_4[0] >= (VAR_12[VAR_11].skills * 100) / VAR_17->maxkills)
 {
     VAR_4[0] = (VAR_12[VAR_11].skills * 100) / VAR_17->maxkills;
     FUNC_0(0, VAR_13);
     VAR_16++;
 }
    }
    else if (VAR_16 == 4)
    {
 VAR_3[0] += 2;

 if (!(VAR_2&3))
     FUNC_0(0, VAR_14);

 if (VAR_3[0] >= (VAR_12[VAR_11].sitems * 100) / VAR_17->maxitems)
 {
     VAR_3[0] = (VAR_12[VAR_11].sitems * 100) / VAR_17->maxitems;
     FUNC_0(0, VAR_13);
     VAR_16++;
 }
    }
    else if (VAR_16 == 6)
    {
 VAR_7[0] += 2;

 if (!(VAR_2&3))
     FUNC_0(0, VAR_14);

 if (VAR_7[0] >= (VAR_12[VAR_11].ssecret * 100) / VAR_17->maxsecret)
 {
     VAR_7[0] = (VAR_12[VAR_11].ssecret * 100) / VAR_17->maxsecret;
     FUNC_0(0, VAR_13);
     VAR_16++;
 }
    }

    else if (VAR_16 == 8)
    {
 if (!(VAR_2&3))
     FUNC_0(0, VAR_14);

 VAR_8 += 3;

 if (VAR_8 >= VAR_12[VAR_11].stime / VAR_0)
     VAR_8 = VAR_12[VAR_11].stime / VAR_0;

 VAR_5 += 3;

 if (VAR_5 >= VAR_17->partime / VAR_0)
 {
     VAR_5 = VAR_17->partime / VAR_0;

     if (VAR_8 >= VAR_12[VAR_11].stime / VAR_0)
     {
  FUNC_0(0, VAR_13);
  VAR_16++;
     }
 }
    }
    else if (VAR_16 == 10)
    {
 if (VAR_1)
 {
     FUNC_0(0, VAR_15);

     if (VAR_10 == VAR_9)
  FUNC_1();
     else
  FUNC_2();
 }
    }
    else if (VAR_16 & 1)
    {
 if (!--VAR_6)
 {
     VAR_16++;
     VAR_6 = VAR_0;
 }
    }

}
