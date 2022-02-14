
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s68k_regs; scalar_t__ cdda_type; int * cdda_stream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int,int) ;
 TYPE_1__* VAR_10 ;
 int* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int*,int,int,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int*,int,int) ;
 int FUNC_7 (int*,int,int) ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_11(int VAR_16, int VAR_17)
{
  int VAR_18 = 0;
  int *VAR_19 = VAR_11+VAR_16;
  int VAR_20 = (VAR_9 & 8) >> 3;

  VAR_16 <<= VAR_20;

  FUNC_10(VAR_15);


  if (VAR_16 == 0) {

    VAR_13 += VAR_12;
    if (VAR_13 >= 0x10000) {
      VAR_13 -= 0x10000;
      VAR_17++;
    }
  }



  if (VAR_9 & VAR_6)
    FUNC_2(VAR_14+VAR_16, VAR_17, VAR_20);

  if (VAR_8 & VAR_3) {
    FUNC_0(VAR_14+VAR_16, VAR_17, VAR_20);
    return VAR_17;
  }


  if (VAR_9 & VAR_4) {
    VAR_18 = FUNC_3(VAR_19, VAR_17, VAR_20, 1);
  } else
    FUNC_5(VAR_19, 0, VAR_17<<VAR_20);


  (void)VAR_18;


  if (VAR_8 & VAR_2) {
    FUNC_8(VAR_19, VAR_17, VAR_20);

  }



  if ((VAR_8 & VAR_2) && (VAR_9 & VAR_5)
      && VAR_10->cdda_stream != ((void*)0)
      && !(VAR_10->s68k_regs[0x36] & 1))
  {

    if (VAR_10->cdda_type == VAR_0)
      FUNC_6(VAR_19, VAR_17, VAR_20);
    else
      FUNC_4(VAR_19, VAR_17);
  }

  if ((VAR_8 & VAR_1) && (VAR_9 & VAR_7))
    FUNC_7(VAR_19, VAR_17, VAR_20);


  FUNC_1(VAR_14+VAR_16, VAR_19, VAR_17);

  FUNC_9(VAR_15);

  return VAR_17;
}
