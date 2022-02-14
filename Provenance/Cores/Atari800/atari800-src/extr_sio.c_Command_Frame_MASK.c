
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vapi_delay_time; } ;
typedef TYPE_1__ vapi_additional_info_t ;
typedef int UWORD ;
typedef char UBYTE ;


 int* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int ) ;
 int VAR_13 ;
 int FUNC_6 (char,int,int*,int *) ;
 int VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__* VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;

__attribute__((used)) static UBYTE FUNC_7(void)
{
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_25 = VAR_0[2] | (((UWORD) VAR_0[3]) << 8);
 VAR_24 = VAR_0[0] - '1';

 if (VAR_24 < 0 || VAR_24 >= VAR_10) {

  FUNC_0("Unknown command frame: %02x %02x %02x %02x %02x",
      VAR_0[0], VAR_0[1], VAR_0[2],
      VAR_0[3], VAR_0[4]);
  VAR_20 = VAR_11;
  return 0;
 }
 switch (VAR_0[1]) {
 case 0x4e:





  VAR_1[0] = FUNC_5(VAR_24, *(VAR_1 + 1));
  VAR_1[13] = FUNC_1(*(VAR_1 + 1), 12);
  VAR_2 = 0;
  VAR_3 = 14;
  VAR_20 = VAR_12;
  VAR_5 = VAR_13;
  return 'A';
 case 0x4f:





  VAR_3 = 13;
  VAR_2 = 0;
  VAR_20 = VAR_14;
  return 'A';
 case 0x50:
 case 0x57:
 case 0xD0:
 case 0xD7:





  FUNC_6((UBYTE) VAR_24, VAR_25, &VAR_26, ((void*)0));
  VAR_3 = VAR_26 + 1;
  VAR_2 = 0;
  VAR_20 = VAR_14;
  VAR_18 = VAR_9;
  VAR_19 = 10;
  VAR_17 = VAR_24 + 1;
  return 'A';
 case 0x52:
 case 0xD2:





  FUNC_6((UBYTE) VAR_24, VAR_25, &VAR_26, ((void*)0));
  VAR_1[0] = FUNC_4(VAR_24, VAR_25, *(VAR_1 + 1));
  VAR_1[1 + VAR_26] = FUNC_1(*(VAR_1 + 1), VAR_26);
  VAR_2 = 0;
  VAR_3 = 2 + VAR_26;
  VAR_20 = VAR_12;


  VAR_5 = VAR_13 << 2;
  if (VAR_23[VAR_24] == VAR_4) {
   vapi_additional_info_t *VAR_27;
   VAR_27 = (vapi_additional_info_t *)VAR_21[VAR_24];
   if (VAR_27 == ((void*)0))
    VAR_5 = VAR_13 << 2;
   else
    VAR_5 = ((VAR_27->vapi_delay_time + 114/2) / 114) - 12;
  }

  else if (VAR_25 == 1) {
   VAR_5 += VAR_22;
   VAR_22 = VAR_6;
  }
  else {
   VAR_22 = 0;
  }

  VAR_18 = VAR_8;
  VAR_19 = 10;
  VAR_17 = VAR_24 + 1;
  return 'A';
 case 0x53:





  VAR_1[0] = FUNC_2(VAR_24, *(VAR_1 + 1));
  VAR_1[1 + 4] = FUNC_1(*(VAR_1 + 1), 4);
  VAR_2 = 0;
  VAR_3 = 6;
  VAR_20 = VAR_12;
  VAR_5 = VAR_13;
  return 'A';

 case 0x21:
 case 0xa1:





  VAR_26 = VAR_16[VAR_24];
  VAR_1[0] = FUNC_3(VAR_24, *(VAR_1 + 1), VAR_26, VAR_15[VAR_24]);
  VAR_1[1 + VAR_26] = FUNC_1(*(VAR_1 + 1), VAR_26);
  VAR_2 = 0;
  VAR_3 = 2 + VAR_26;
  VAR_20 = VAR_7;
  VAR_5 = VAR_13;
  return 'A';
 case 0x22:
 case 0xa2:





  VAR_1[0] = FUNC_3(VAR_24, *(VAR_1 + 1), 128, 1040);
  VAR_1[1 + 128] = FUNC_1(*(VAR_1 + 1), 128);
  VAR_2 = 0;
  VAR_3 = 2 + 128;
  VAR_20 = VAR_7;
  VAR_5 = VAR_13;
  return 'A';
 default:






  VAR_20 = VAR_11;
  return 'E';
 }
}
