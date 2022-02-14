
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int patch_t ;
struct TYPE_4__ {int nanims; void** p; } ;
typedef TYPE_1__ anim_t ;
struct TYPE_5__ {int epsd; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,void*) ;
 void* FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 TYPE_1__** VAR_6 ;
 void* VAR_7 ;
 void** VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int ** VAR_21 ;
 scalar_t__ VAR_22 ;
 void** VAR_23 ;
 void** VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 scalar_t__ VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 int FUNC_3 (char*,char*,int,...) ;
 void* VAR_31 ;
 int FUNC_4 (char*,char*) ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 TYPE_2__* VAR_36 ;
 void* VAR_37 ;
 void** VAR_38 ;

void FUNC_5(void)
{
    int VAR_39;
    int VAR_40;
    char VAR_41[9];
    anim_t* VAR_42;

    if (VAR_17 == VAR_11)
 FUNC_4(VAR_41, "INTERPIC");
    else
 FUNC_3(VAR_41, "WIMAP%d", VAR_36->epsd);

    if ( VAR_17 == VAR_27 )
    {
      if (VAR_36->epsd == 3)
 FUNC_4(VAR_41,"INTERPIC");
    }


    VAR_7 = FUNC_1(VAR_41, VAR_4);
    FUNC_0(0, 0, 1, VAR_7);
    if (VAR_17 == VAR_11)
    {
 VAR_2 = 32;
 VAR_21 = (patch_t **) FUNC_2(sizeof(patch_t*) * VAR_2,
           VAR_5, 0);
 for (VAR_39=0 ; VAR_39<VAR_2 ; VAR_39++)
 {
     FUNC_3(VAR_41, "CWILV%2.2d", VAR_39);
     VAR_21[VAR_39] = FUNC_1(VAR_41, VAR_5);
 }
    }
    else
    {
 VAR_21 = (patch_t **) FUNC_2(sizeof(patch_t*) * VAR_3,
           VAR_5, 0);
 for (VAR_39=0 ; VAR_39<VAR_3 ; VAR_39++)
 {
     FUNC_3(VAR_41, "WILV%d%d", VAR_36->epsd, VAR_39);
     VAR_21[VAR_39] = FUNC_1(VAR_41, VAR_5);
 }


 VAR_38[0] = FUNC_1("WIURH0", VAR_5);


 VAR_38[1] = FUNC_1("WIURH1", VAR_5);


 VAR_30 = FUNC_1("WISPLAT", VAR_5);

 if (VAR_36->epsd < 3)
 {
     for (VAR_40=0;VAR_40<VAR_1[VAR_36->epsd];VAR_40++)
     {
  VAR_42 = &VAR_6[VAR_36->epsd][VAR_40];
  for (VAR_39=0;VAR_39<VAR_42->nanims;VAR_39++)
  {

      if (VAR_36->epsd != 1 || VAR_40 != 8)
      {

   FUNC_3(VAR_41, "WIA%d%.2d%.2d", VAR_36->epsd, VAR_40, VAR_39);
   VAR_42->p[VAR_39] = FUNC_1(VAR_41, VAR_5);
      }
      else
      {

   VAR_42->p[VAR_39] = VAR_6[1][4].p[VAR_39];
      }
  }
     }
 }
    }


    VAR_37 = FUNC_1("WIMINUS", VAR_5);

    for (VAR_39=0;VAR_39<10;VAR_39++)
    {

 FUNC_3(VAR_41, "WINUM%d", VAR_39);
 VAR_23[VAR_39] = FUNC_1(VAR_41, VAR_5);
    }


    VAR_26 = FUNC_1("WIPCNT", VAR_5);


    VAR_14 = FUNC_1("WIF", VAR_5);


    VAR_13 = FUNC_1("WIENTER", VAR_5);


    VAR_20 = FUNC_1("WIOSTK", VAR_5);


    VAR_28 = FUNC_1("WIOSTS", VAR_5);


    VAR_29 = FUNC_1("WISCRT2", VAR_5);


    if (VAR_16)
    {

 if (VAR_22 && !VAR_12)
     VAR_18 = FUNC_1("WIOBJ", VAR_5);
   else
     VAR_18 = FUNC_1("WIOSTI", VAR_5);
    } else
 VAR_18 = FUNC_1("WIOSTI", VAR_5);


    VAR_15 = FUNC_1("WIFRGS", VAR_5);


    VAR_10 = FUNC_1("WICOLON", VAR_5);


    VAR_33 = FUNC_1("WITIME", VAR_5);


    VAR_32 = FUNC_1("WISUCKS", VAR_5);


    VAR_25 = FUNC_1("WIPAR", VAR_5);


    VAR_19 = FUNC_1("WIKILRS", VAR_5);


    VAR_35 = FUNC_1("WIVCTMS", VAR_5);


    VAR_34 = FUNC_1("WIMSTT", VAR_5);


    VAR_31 = FUNC_1("STFST01", VAR_5);


    VAR_9 = FUNC_1("STFDEAD0", VAR_5);

    for (VAR_39=0 ; VAR_39<VAR_0 ; VAR_39++)
    {

 FUNC_3(VAR_41, "STPB%d", VAR_39);
 VAR_24[VAR_39] = FUNC_1(VAR_41, VAR_5);


 FUNC_3(VAR_41, "WIBP%d", VAR_39+1);
 VAR_8[VAR_39] = FUNC_1(VAR_41, VAR_5);
    }

}
