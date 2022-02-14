
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int minx; int maxx; size_t picnum; scalar_t__* top; scalar_t__* bottom; int lightlevel; scalar_t__ height; } ;
typedef TYPE_1__ visplane_t ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,scalar_t__,int,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__* VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_1__* VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 size_t VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 TYPE_1__* VAR_34 ;
 int* VAR_35 ;
 int * VAR_36 ;

void FUNC_7 (void)
{
    visplane_t* VAR_37;
    int VAR_38;
    int VAR_39;
    int VAR_40;
    int VAR_41;
    for (VAR_37 = VAR_34 ; VAR_37 < VAR_24 ; VAR_37++)
    {
 if (VAR_37->minx > VAR_37->maxx)
     continue;



 if (VAR_37->picnum == VAR_29)
 {
     VAR_10 = VAR_28>>VAR_16;





     VAR_9 = VAR_8;
     VAR_12 = VAR_31;
     for (VAR_39=VAR_37->minx ; VAR_39 <= VAR_37->maxx ; VAR_39++)
     {
  VAR_15 = VAR_37->top[VAR_39];
  VAR_14 = VAR_37->bottom[VAR_39];

  if (VAR_15 <= VAR_14)
  {
      VAR_41 = (VAR_32 + VAR_35[VAR_39])>>VAR_0;
      VAR_13 = VAR_39;
      VAR_11 = FUNC_1(VAR_30, VAR_41);
      FUNC_6 ();
  }
     }
     continue;
 }


 VAR_19 = FUNC_3(VAR_21 +
       VAR_22[VAR_37->picnum],
       VAR_7);

 VAR_26 = FUNC_5(VAR_37->height-VAR_33);
 VAR_38 = (VAR_37->lightlevel >> VAR_2)+VAR_20;

 if (VAR_38 >= VAR_1)
     VAR_38 = VAR_1-1;

 if (VAR_38 < 0)
     VAR_38 = 0;

 VAR_27 = VAR_36[VAR_38];

 VAR_37->top[VAR_37->maxx+1] = 0xff;
 VAR_37->top[VAR_37->minx-1] = 0xff;

 VAR_40 = VAR_37->maxx + 1;

 for (VAR_39=VAR_37->minx ; VAR_39<= VAR_40 ; VAR_39++)
 {
     FUNC_2(VAR_39,VAR_37->top[VAR_39-1],
   VAR_37->bottom[VAR_39-1],
   VAR_37->top[VAR_39],
   VAR_37->bottom[VAR_39]);
 }

 FUNC_4 (VAR_19, VAR_6);
    }
}
