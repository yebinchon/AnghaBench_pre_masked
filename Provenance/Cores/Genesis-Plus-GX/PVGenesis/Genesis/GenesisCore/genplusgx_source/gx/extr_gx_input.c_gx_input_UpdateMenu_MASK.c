
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int s8 ;
typedef int s16 ;
struct TYPE_7__ {int btns_d; int btns_h; } ;
typedef TYPE_1__ WPADData ;
struct TYPE_9__ {scalar_t__ valid; } ;
struct TYPE_8__ {int keys; TYPE_5__ ir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_5__*) ;
 int FUNC_7 () ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 TYPE_4__ VAR_36 ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;

void FUNC_10(void)
{

  if (VAR_35) return;


  FUNC_2();


  s16 VAR_37 = FUNC_0(0);


  s16 VAR_38 = FUNC_1(0) & VAR_3;


  s8 VAR_39 = FUNC_3(0);
  s8 VAR_40 = FUNC_4(0);
  if (VAR_39 > VAR_0) VAR_38 |= VAR_8;
  else if (VAR_39 < -VAR_0) VAR_38 |= VAR_7;
  else if (VAR_40 > VAR_0) VAR_38 |= VAR_9;
  else if (VAR_40 < -VAR_0) VAR_38 |= VAR_6;
  if (VAR_37) VAR_34 = 0;
  else if (VAR_38) VAR_34++;
  else VAR_34 = 0;



  if (VAR_34 > VAR_1)
  {

    VAR_37 |= VAR_38;





    VAR_34 -= VAR_2;
  }
  VAR_36.keys = VAR_37;
}
