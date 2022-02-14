
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fixed_t ;
typedef size_t angle_t ;
struct TYPE_4__ {int* top; int* bottom; } ;
struct TYPE_3__ {int* top; int* bottom; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 int* VAR_19 ;
 TYPE_1__* VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int* VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 unsigned int VAR_35 ;
 scalar_t__ VAR_36 ;
 size_t VAR_37 ;
 int VAR_38 ;
 size_t VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int VAR_44 ;
 int * VAR_45 ;
 size_t* VAR_46 ;

void FUNC_3 (void)
{
    angle_t VAR_47;
    unsigned VAR_48;
    int VAR_49;
    int VAR_50;
    int VAR_51;
    fixed_t VAR_52;
    int VAR_53;
    int VAR_54;



    for ( ; VAR_39 < VAR_37 ; VAR_39++)
    {

 VAR_49 = (VAR_41+VAR_3-1)>>VAR_2;


 if (VAR_49 < VAR_9[VAR_39]+1)
     VAR_49 = VAR_9[VAR_39]+1;

 if (VAR_21)
 {
     VAR_53 = VAR_9[VAR_39]+1;
     VAR_54 = VAR_49-1;

     if (VAR_54 >= VAR_19[VAR_39])
  VAR_54 = VAR_19[VAR_39]-1;

     if (VAR_53 <= VAR_54)
     {
  VAR_10->top[VAR_39] = VAR_53;
  VAR_10->bottom[VAR_39] = VAR_54;
     }
 }

 VAR_50 = VAR_6>>VAR_2;

 if (VAR_50 >= VAR_19[VAR_39])
     VAR_50 = VAR_19[VAR_39]-1;

 if (VAR_22)
 {
     VAR_53 = VAR_50+1;
     VAR_54 = VAR_19[VAR_39]-1;
     if (VAR_53 <= VAR_9[VAR_39])
  VAR_53 = VAR_9[VAR_39]+1;
     if (VAR_53 <= VAR_54)
     {
  VAR_20->top[VAR_39] = VAR_53;
  VAR_20->bottom[VAR_39] = VAR_54;
     }
 }


 if (VAR_40)
 {

     VAR_47 = (VAR_31 + VAR_46[VAR_39])>>VAR_0;
     VAR_52 = VAR_34-FUNC_0(VAR_18[VAR_47],VAR_32);
     VAR_52 >>= VAR_1;

     VAR_48 = VAR_35>>VAR_4;

     if (VAR_48 >= VAR_5 )
  VAR_48 = VAR_5-1;

     VAR_11 = VAR_45[VAR_48];
     VAR_15 = VAR_39;
     VAR_12 = 0xffffffffu / (unsigned)VAR_35;
 }


 if (VAR_25)
 {

     VAR_17 = VAR_49;
     VAR_16 = VAR_50;
     VAR_14 = VAR_33;
     VAR_13 = FUNC_1(VAR_25,VAR_52);
     FUNC_2 ();
     VAR_9[VAR_39] = VAR_44;
     VAR_19[VAR_39] = -1;
 }
 else
 {

     if (VAR_43)
     {

  VAR_51 = VAR_26>>VAR_2;
  VAR_26 += VAR_27;

  if (VAR_51 >= VAR_19[VAR_39])
      VAR_51 = VAR_19[VAR_39]-1;

  if (VAR_51 >= VAR_49)
  {
      VAR_17 = VAR_49;
      VAR_16 = VAR_51;
      VAR_14 = VAR_38;
      VAR_13 = FUNC_1(VAR_43,VAR_52);
      FUNC_2 ();
      VAR_9[VAR_39] = VAR_51;
  }
  else
      VAR_9[VAR_39] = VAR_49-1;
     }
     else
     {

  if (VAR_21)
      VAR_9[VAR_39] = VAR_49-1;
     }

     if (VAR_8)
     {

  VAR_51 = (VAR_28+VAR_3-1)>>VAR_2;
  VAR_28 += VAR_29;


  if (VAR_51 <= VAR_9[VAR_39])
      VAR_51 = VAR_9[VAR_39]+1;

  if (VAR_51 <= VAR_50)
  {
      VAR_17 = VAR_51;
      VAR_16 = VAR_50;
      VAR_14 = VAR_30;
      VAR_13 = FUNC_1(VAR_8,
         VAR_52);
      FUNC_2 ();
      VAR_19[VAR_39] = VAR_51;
  }
  else
      VAR_19[VAR_39] = VAR_50+1;
     }
     else
     {

  if (VAR_22)
      VAR_19[VAR_39] = VAR_50+1;
     }

     if (VAR_23)
     {


  VAR_24[VAR_39] = VAR_52;
     }
 }

 VAR_35 += VAR_36;
 VAR_41 += VAR_42;
 VAR_6 += VAR_7;
    }
}
