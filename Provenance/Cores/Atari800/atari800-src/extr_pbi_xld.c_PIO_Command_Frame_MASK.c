
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef char UBYTE ;


 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char,int,int*,int *) ;
 int * VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static UBYTE FUNC_7(void)
{
 int VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_21 = VAR_0[2] | (((UWORD) VAR_0[3]) << 8);
 VAR_20 = VAR_0[0] - '1';

 if (VAR_20 < 0 || VAR_20 >= VAR_10) {

  FUNC_0("Unknown command frame: %02x %02x %02x %02x %02x",
      VAR_0[0], VAR_0[1], VAR_0[2],
      VAR_0[3], VAR_0[4]);
  VAR_19 = VAR_5;
  return 0;
 }
 switch (VAR_0[1]) {
 case 0x01:
  FUNC_0("PIO DISK: Set large mode (unimplemented)");
  return 'E';
 case 0x02:
  FUNC_0("PIO DISK: Set small mode (unimplemented)");
  return 'E';
 case 0x23:
  FUNC_0("PIO DISK: Drive Diagnostic In (unimplemented)");
  return 'E';
 case 0x24:
  FUNC_0("PIO DISK: Drive Diagnostic Out (unimplemented)");
  return 'E';
 case 0x4e:





  VAR_1[0] = FUNC_5(VAR_20, *(VAR_1 + 1));
  VAR_1[13] = FUNC_1(*(VAR_1 + 1), 12);
  VAR_2 = 0;
  VAR_3 = 14;
  VAR_19 = VAR_6;

  return 'A';
 case 0x4f:





  VAR_3 = 13;
  VAR_2 = 0;
  VAR_19 = VAR_7;
  return 'A';
 case 0x50:
 case 0x57:





  FUNC_6((UBYTE) VAR_20, VAR_21, &VAR_22, ((void*)0));
  VAR_3 = VAR_22 + 1;
  VAR_2 = 0;
  VAR_19 = VAR_7;
  VAR_17 = VAR_9;
  VAR_18 = 10;
  VAR_16 = VAR_20 + 1;
  return 'A';
 case 0x52:





  FUNC_6((UBYTE) VAR_20, VAR_21, &VAR_22, ((void*)0));
  VAR_1[0] = FUNC_4(VAR_20, VAR_21, *(VAR_1 + 1));
  VAR_1[1 + VAR_22] = FUNC_1(*(VAR_1 + 1), VAR_22);
  VAR_2 = 0;
  VAR_3 = 2 + VAR_22;
  VAR_19 = VAR_6;
  VAR_17 = VAR_8;
  VAR_18 = 10;
  VAR_16 = VAR_20 + 1;
  return 'A';
 case 0x53:
  VAR_1[0] = FUNC_2(VAR_20, *(VAR_1 + 1));
  VAR_1[2] = 0xff;
  if (VAR_13[VAR_20]==VAR_11 || VAR_13[VAR_20]==VAR_12){

   VAR_1[2]=0x7f;
  }
  VAR_1[1 + 4] = FUNC_1(*(VAR_1 + 1), 4);
  VAR_2 = 0;
  VAR_3 = 6;
  VAR_19 = VAR_6;

  return 'A';
 case 0x21:





  VAR_22 = VAR_15[VAR_20];
  VAR_1[0] = FUNC_3(VAR_20, *(VAR_1 + 1), VAR_22, VAR_14[VAR_20]);
  VAR_1[1 + VAR_22] = FUNC_1(*(VAR_1 + 1), VAR_22);
  VAR_2 = 0;
  VAR_3 = 2 + VAR_22;
  VAR_19 = VAR_4;

  return 'A';
 case 0x22:





  VAR_1[0] = FUNC_3(VAR_20, *(VAR_1 + 1), 128, 1040);
  VAR_1[1 + 128] = FUNC_1(*(VAR_1 + 1), 128);
  VAR_2 = 0;
  VAR_3 = 2 + 128;
  VAR_19 = VAR_4;

  return 'A';





 case 0xb1:
  FUNC_0("PIO DISK: Internal Command 0xb1 (unimplemented)");
  return 'E';
 case 0xb2:
  FUNC_0("PIO DISK: Internal Command 0xb2 (unimplemented)");
  return 'E';


 default:






  VAR_19 = VAR_5;
  return 'E';
 }
}
