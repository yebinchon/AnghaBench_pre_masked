
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pint_ret_t ;
typedef int path ;
struct TYPE_2__ {int* pen_pos; scalar_t__ page; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int *) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int ) ;
 int VAR_15 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,unsigned char*,int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_11 (char*,int) ;
 int * VAR_19 ;
 int ** VAR_20 ;
 char* VAR_21 ;
 int FUNC_12 (char*,char*,char*,...) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*,char) ;

__attribute__((used)) static void FUNC_15(void)
{
  unsigned char *VAR_22 = ((void*)0);
  int VAR_23, VAR_24, VAR_25 = VAR_9 & VAR_7;

  FUNC_6(VAR_8, (pint_ret_t *) &VAR_22);
  FUNC_3(VAR_17, 2, VAR_2|(VAR_25 ? VAR_4 : VAR_5));
  FUNC_8(VAR_10, VAR_25 ? VAR_14 : VAR_13);
  FUNC_8(VAR_12, VAR_25 ? VAR_14 : VAR_13);
  FUNC_0(VAR_18, 1210, VAR_25 ? VAR_3 : VAR_6);
  FUNC_0(VAR_18, 1211, VAR_25 ? VAR_3 : VAR_6);
  FUNC_7(VAR_0, VAR_15, 1220 + VAR_11.page, 0);
  FUNC_2(VAR_0);
  FUNC_5(VAR_12, ((void*)0), 1);

  VAR_11.pen_pos[0] =
  VAR_11.pen_pos[1] = 0x8000;
  VAR_16 = 0;

  VAR_24 = FUNC_10(VAR_21, VAR_22 + 0x150, 0x20);
  if (VAR_24 == 0)
    FUNC_10(VAR_21, VAR_22 + 0x130, 0x20);

  if (VAR_25)
  {
    char VAR_26[VAR_1], *VAR_27;
    FUNC_4(((void*)0), VAR_26, sizeof(VAR_26) - 32);
    VAR_27 = FUNC_14(VAR_26, '\\');
    if (VAR_27 == ((void*)0)) VAR_27 = VAR_26;
    else VAR_27++;
    if (VAR_19 == ((void*)0)) {
      FUNC_13(VAR_27, "pico\\pad.png");
      VAR_19 = FUNC_11(VAR_26, 0);
    }

    FUNC_13(VAR_27, "pico\\alias.txt");
    FUNC_9(VAR_26);

    for (VAR_23 = 0; VAR_23 < 7; VAR_23++) {
      if (VAR_20[VAR_23] != ((void*)0)) FUNC_1(VAR_20[VAR_23]);
      FUNC_12(VAR_27, "pico\\%s_%i.png", VAR_21, VAR_23);
      VAR_20[VAR_23] = FUNC_11(VAR_26, 1);
    }

    if (VAR_20[6] == ((void*)0) && VAR_20[5] != ((void*)0)) {
      FUNC_12(VAR_27, "pico\\%s_5.png", VAR_21);
      VAR_20[6] = FUNC_11(VAR_26, 1);
    }
  }
}
