
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int PANEL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;






 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *,int,int,int,int,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 char* FUNC_6 (char const*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int *,int ,int,char*,char const*) ;
 int * FUNC_14 (int *) ;
 int * FUNC_15 (int,int) ;
 int * FUNC_16 (int,int,int,int) ;
 int FUNC_17 (int *,int,int ,int,char*,int ) ;
 int FUNC_18 (int *) ;
 int VAR_9 ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

void FUNC_22(WINDOW *VAR_10,
  const char *VAR_11,
  const char *VAR_12)
{
 int VAR_13;
 int VAR_14 = FUNC_8(VAR_12);
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = 0, VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 WINDOW *VAR_27;
 WINDOW *VAR_28;
 PANEL *VAR_29;

 FUNC_9(VAR_9, VAR_17, VAR_18);


 VAR_14 = FUNC_8(VAR_12);
 for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++) {
  const char *VAR_30 = FUNC_6(VAR_12, VAR_26);
  int VAR_31 = FUNC_7(VAR_30);
  VAR_23 = FUNC_11(VAR_23, VAR_31+2);
 }


 VAR_28 = FUNC_15(VAR_14+10, VAR_23+10);
 (void) FUNC_19(VAR_28, VAR_8[VAR_6]);
 FUNC_5(VAR_28, VAR_12);

 VAR_25 = FUNC_12(VAR_14+4, VAR_17-2);
 VAR_24 = FUNC_12(VAR_23+2, VAR_18-2);
 VAR_21 = FUNC_11(VAR_25-4, 0);
 VAR_22 = FUNC_11(VAR_24-2, 0);


 VAR_16 = (VAR_17-VAR_25)/2;
 VAR_15 = (VAR_18-VAR_24)/2;

 VAR_27 = FUNC_16(VAR_25, VAR_24, VAR_16, VAR_15);
 FUNC_10(VAR_27, VAR_7);

 (void) FUNC_19(VAR_27, VAR_8[VAR_4]);
 FUNC_1(VAR_27, 0, 0);
 (void) FUNC_19(VAR_27, VAR_8[VAR_5]);
 FUNC_13(VAR_27, 0, 3, " %s ", VAR_11);
 VAR_29 = FUNC_14(VAR_27);


 do {

  FUNC_2(VAR_28, VAR_27, VAR_20, VAR_19, 2, 2, VAR_21,
    VAR_22, 0);
  FUNC_17(VAR_27,
    VAR_21+2,
    0,
    VAR_22,
    "<OK>",
    VAR_8[VAR_0]);
  FUNC_21(VAR_27);

  VAR_13 = FUNC_20(VAR_27);
  switch (VAR_13) {
  case 131:
  case ' ':
  case 'd':
   VAR_20 += VAR_21-2;
   break;
  case 130:
  case 'u':
   VAR_20 -= VAR_21+2;
   break;
  case 133:
   VAR_20 = 0;
   break;
  case 134:
   VAR_20 = VAR_14-VAR_21;
   break;
  case 135:
  case 'j':
   VAR_20++;
   break;
  case 128:
  case 'k':
   VAR_20--;
   break;
  case 132:
  case 'h':
   VAR_19--;
   break;
  case 129:
  case 'l':
   VAR_19++;
   break;
  }
  if (VAR_13 == 10 || VAR_13 == 27 || VAR_13 == 'q' ||
   VAR_13 == FUNC_0(VAR_3) || VAR_13 == FUNC_0(VAR_1) ||
   VAR_13 == FUNC_0(VAR_2))
   break;
  if (VAR_20 < 0)
   VAR_20 = 0;
  if (VAR_20 >= VAR_14-VAR_21)
   VAR_20 = VAR_14-VAR_21;
  if (VAR_19 < 0)
   VAR_19 = 0;
  if (VAR_19 >= VAR_23-VAR_22)
   VAR_19 = VAR_23-VAR_22;
 } while (VAR_13);

 FUNC_3(VAR_29);
 FUNC_4(VAR_27);
 FUNC_18(VAR_10);
}
