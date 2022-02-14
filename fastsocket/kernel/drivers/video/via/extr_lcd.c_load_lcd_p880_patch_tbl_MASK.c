
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_reg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct io_reg* VAR_12 ;
 struct io_reg* VAR_13 ;
 struct io_reg* VAR_14 ;
 struct io_reg* VAR_15 ;
 struct io_reg* VAR_16 ;
 struct io_reg* VAR_17 ;
 struct io_reg* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct io_reg*,int) ;

__attribute__((used)) static void FUNC_5(int VAR_24, int VAR_25,
 int VAR_26)
{
 int VAR_27;
 int VAR_28 = 0;
 struct io_reg *VAR_29 = ((void*)0);

 VAR_27 = FUNC_2(VAR_24, VAR_25);

 switch (VAR_26) {
 case 138:
  switch (VAR_27) {
  case 131:
   VAR_28 = VAR_7;
   VAR_29 = VAR_14;
   break;
  case 128:
   VAR_28 = VAR_10;
   VAR_29 = VAR_17;
   break;
  }
  break;
 case 137:
  switch (VAR_27) {
  case 132:
  case 131:
   VAR_28 = VAR_8;
   VAR_29 = VAR_15;
   break;
  case 130:
  case 129:
   VAR_28 = VAR_9;
   VAR_29 = VAR_16;
   break;
  case 128:
   VAR_28 = VAR_11;
   VAR_29 = VAR_18;
   break;
  case 136:
   VAR_28 = VAR_5;
   VAR_29 = VAR_12;
   break;
  case 134:
  case 133:
  case 135:
   VAR_28 = VAR_6;
   VAR_29 = VAR_13;
   break;
  }
  break;

 }
 if (VAR_28 != 0) {

  FUNC_3(VAR_4, VAR_20, 0x00, VAR_3);

  FUNC_4(VAR_29, VAR_28);


  FUNC_3(VAR_4, VAR_20, 0x80, VAR_3);


  FUNC_3(VAR_19, VAR_22, 0x02, VAR_0);
  FUNC_3(VAR_19, VAR_22, 0x00, VAR_0);


  FUNC_1(FUNC_0(VAR_21) | (VAR_1 + VAR_2), VAR_23);
 }
}
