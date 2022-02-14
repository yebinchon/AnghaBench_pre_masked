
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_format1 {int opcode; int parity; size_t immediate; int source; int destination; int ret; } ;
struct ins_format3 {int address; int immediate; int source; int opcode; } ;
union ins_formats {int integer; int bytes; struct ins_format1 format1; struct ins_format3 format3; } ;
typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct patch {int dummy; } ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_softc*,struct patch const**,int,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,int ,int ,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (char*,...) ;
 struct patch* VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_7(struct ahc_softc *VAR_5, u_int VAR_6, uint8_t *VAR_7)
{
 union ins_formats VAR_8;
 struct ins_format1 *VAR_9;
 struct ins_format3 *VAR_10;
 u_int VAR_11;




 VAR_8.integer = FUNC_2(*(uint32_t*)&VAR_4[VAR_6 * 4]);

 VAR_9 = &VAR_8.format1;
 VAR_10 = ((void*)0);


 VAR_11 = VAR_8.format1.opcode;
 switch (VAR_11) {
 case 135:
 case 137:
 case 134:
 case 138:
 case 133:
 case 132:
 case 136:
 case 131:
 {
  const struct patch *VAR_12;
  int VAR_13;
  u_int VAR_14;
  u_int VAR_15;
  u_int VAR_16;

  VAR_10 = &VAR_8.format3;
  VAR_13 = 0;
  VAR_14 = VAR_10->address;
  VAR_12 = VAR_3;
  VAR_15 = 0;

  for (VAR_16 = 0; VAR_16 < VAR_14;) {

   FUNC_0(VAR_5, &VAR_12, VAR_16, &VAR_15);

   if (VAR_15 > VAR_16) {
    int VAR_17;

    VAR_17 = FUNC_5(VAR_14, VAR_15);
    VAR_13 += VAR_17 - VAR_16;
    VAR_16 = VAR_15;
   } else {
    VAR_16++;
   }
  }
  VAR_14 -= VAR_13;
  VAR_10->address = VAR_14;

 }
 case 130:
 case 140:
 case 128:
 case 141:
 case 142:
 case 139:
  if (VAR_9->parity != 0) {
   VAR_9->immediate = VAR_7[VAR_9->immediate];
  }
  VAR_9->parity = 0;
  if ((VAR_5->features & VAR_0) == 0
   && VAR_11 == 139) {







   if (VAR_9->immediate != 1)
    FUNC_6("%s: BMOV not supported\n",
          FUNC_3(VAR_5));
   VAR_9->opcode = 140;
   VAR_9->immediate = 0xff;
  }

 case 129:
  if ((VAR_5->features & VAR_1) != 0) {
   int VAR_18, VAR_19;


   for (VAR_18 = 0, VAR_19 = 0; VAR_18 < 31; VAR_18++) {
    uint32_t VAR_20;

    VAR_20 = 0x01 << VAR_18;
    if ((VAR_8.integer & VAR_20) != 0)
     VAR_19++;
   }
   if ((VAR_19 & 0x01) == 0)
    VAR_8.format1.parity = 1;
  } else {

   if (VAR_10 != ((void*)0)) {
    VAR_8.integer =
     VAR_10->immediate
          | (VAR_10->source << 8)
          | (VAR_10->address << 16)
          | (VAR_10->opcode << 25);
   } else {
    VAR_8.integer =
     VAR_9->immediate
          | (VAR_9->source << 8)
          | (VAR_9->destination << 16)
          | (VAR_9->ret << 24)
          | (VAR_9->opcode << 25);
   }
  }

  VAR_8.integer = FUNC_1(VAR_8.integer);
  FUNC_4(VAR_5, VAR_2, VAR_8.bytes, 4);
  break;
 default:
  FUNC_6("Unknown opcode encountered in seq program");
  break;
 }
}
