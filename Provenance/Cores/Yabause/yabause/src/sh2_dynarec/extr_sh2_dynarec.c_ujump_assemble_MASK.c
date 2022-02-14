
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long long u64 ;
struct regstat {char* regmap; } ;
struct TYPE_4__ {scalar_t__* regmap; int dirty; } ;
struct TYPE_3__ {scalar_t__* regmap; long long u; int dirty; int regmap_entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int,struct regstat*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int* VAR_9 ;
 TYPE_2__* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int FUNC_4 (int,scalar_t__*,int*,int,int ,int ) ;
 int FUNC_5 (unsigned int,int,int) ;
 int FUNC_6 (int,struct regstat*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int,int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int) ;
 int FUNC_13 (scalar_t__*,int) ;
 scalar_t__* VAR_13 ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__* VAR_14 ;
 int FUNC_15 (scalar_t__*,scalar_t__*,int,int,int) ;
 int FUNC_16 (scalar_t__*,int ,int) ;
 scalar_t__ VAR_15 ;
 TYPE_1__* VAR_16 ;
 long long* VAR_17 ;
 long long* VAR_18 ;
 long long* VAR_19 ;
 long long* VAR_20 ;
 long long* VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (scalar_t__*,int ,int) ;
 int FUNC_18 (scalar_t__*,scalar_t__*,int ,long long) ;

void FUNC_19(int VAR_23,struct regstat *VAR_24)
{
  u64 VAR_25;
  int VAR_26,VAR_27;
  signed char *VAR_28=VAR_24->regmap;
  if(VAR_23==(VAR_9[VAR_23]-VAR_22)>>1) FUNC_2("idle loop\n");
  FUNC_1(VAR_23+1,VAR_24,VAR_16[VAR_23].regmap_entry);
  if(VAR_20[VAR_23]==VAR_6) {
    if(VAR_20[VAR_23+1]==VAR_6||VAR_21[VAR_23+1]==VAR_6) {

      int VAR_29;
      unsigned int VAR_30;
      VAR_29=FUNC_13(VAR_16[VAR_23].regmap,VAR_6);
      VAR_30=VAR_22+VAR_23*2+4;
      FUNC_3(VAR_29>=0);
      if(VAR_29>=0) {






        FUNC_10(VAR_30,VAR_29);
      }
    }
  }
  FUNC_6(VAR_23+1,VAR_24);
  VAR_25=VAR_16[VAR_23].u;
  VAR_25|=1LL<<VAR_20[VAR_23];
  FUNC_18(VAR_16[VAR_23].regmap,VAR_10[VAR_23].regmap,VAR_16[VAR_23].dirty,
                VAR_25);
  FUNC_15(VAR_16[VAR_23].regmap,VAR_10[VAR_23].regmap,VAR_0,VAR_0,VAR_0);
  if(VAR_20[VAR_23]==VAR_6) {
    int VAR_31;
    unsigned int VAR_32;
    FUNC_3(VAR_17[VAR_23+1]!=VAR_6);
    FUNC_3(VAR_18[VAR_23+1]!=VAR_6);
    FUNC_3(VAR_19[VAR_23+1]!=VAR_6);
    VAR_31=FUNC_13(VAR_10[VAR_23].regmap,VAR_6);
    FUNC_2("branch(%d): eax=%d ecx=%d edx=%d ebx=%d ebp=%d esi=%d edi=%d\n",VAR_23,VAR_10[VAR_23].regmap[0],VAR_10[VAR_23].regmap[1],VAR_10[VAR_23].regmap[2],VAR_10[VAR_23].regmap[3],VAR_10[VAR_23].regmap[5],VAR_10[VAR_23].regmap[6],VAR_10[VAR_23].regmap[7]);

    VAR_32=VAR_22+VAR_23*2+4;
    if(VAR_31>=0&&VAR_20[VAR_23+1]!=VAR_6&&VAR_21[VAR_23+1]!=VAR_6) {
      {






        FUNC_10(VAR_32,VAR_31);



      }
    }
  }
  VAR_26=FUNC_13(VAR_10[VAR_23].regmap,VAR_0);
  FUNC_3(VAR_26==VAR_3);
  FUNC_17(VAR_10[VAR_23].regmap,VAR_10[VAR_23].dirty,VAR_9[VAR_23]);



  FUNC_4(VAR_23,VAR_10[VAR_23].regmap,&VAR_27,VAR_9[VAR_23],VAR_8,0);
  if(VAR_27) FUNC_8(VAR_26,VAR_1*(VAR_11[VAR_23]+VAR_12[VAR_23]+VAR_12[VAR_23+1]-VAR_27),VAR_26);
  FUNC_16(VAR_10[VAR_23].regmap,VAR_10[VAR_23].dirty,VAR_9[VAR_23]);
  if(FUNC_14(VAR_9[VAR_23]))
    FUNC_2("branch: internal\n");
  else
    FUNC_2("branch: external\n");
  if(FUNC_14(VAR_9[VAR_23])&&VAR_14[(VAR_9[VAR_23]-VAR_22)>>1]) {
    FUNC_7(VAR_23);
  }
  else {
    FUNC_0((int)VAR_15,VAR_9[VAR_23],FUNC_14(VAR_9[VAR_23]));
    FUNC_9(0);
  }
}
