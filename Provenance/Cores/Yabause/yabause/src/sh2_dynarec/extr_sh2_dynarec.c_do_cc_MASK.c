
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int,int,int,int,int,int ) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;

void FUNC_7(int VAR_16,signed char VAR_17[],int *VAR_18,int VAR_19,int VAR_20,int VAR_21)
{
  int VAR_22;
  int VAR_23;
  int VAR_24=0;
  if(VAR_12[VAR_16]==VAR_5)
  {
    *VAR_18=0;
  }

  if(FUNC_6(VAR_8[VAR_16]))
  {
    int VAR_25=(VAR_8[VAR_16]-VAR_15)>>1;
    if(VAR_11[VAR_25]) *VAR_18=VAR_9[VAR_25+1]-VAR_10[VAR_25];
    else *VAR_18=VAR_9[VAR_25];
  }
  else
  {
    *VAR_18=0;
  }
  if(VAR_12[VAR_16]==VAR_1) *VAR_18-=2+VAR_10[VAR_16];
  if(VAR_12[VAR_16]==VAR_6) *VAR_18-=1+VAR_10[VAR_16]+VAR_10[VAR_16+1];
  VAR_22=VAR_9[VAR_16]+((VAR_20==VAR_4)?0:VAR_10[VAR_16]+VAR_10[VAR_16+1]);
  if(VAR_20==VAR_7 && VAR_16==(VAR_8[VAR_16]-VAR_15)>>1 && VAR_14[VAR_16+1]==0) {



    VAR_24=(int)VAR_13;

    FUNC_2(VAR_3,3,VAR_3);
    VAR_23=(int)VAR_13;
    FUNC_4(0);
  }
  else if(*VAR_18==0||VAR_21) {
    FUNC_1(VAR_2*VAR_22,VAR_3);
    VAR_23=(int)VAR_13;
    FUNC_5(0);
  }
  else
  {
    FUNC_3(VAR_3,-VAR_2*VAR_22);
    VAR_23=(int)VAR_13;
    FUNC_5(0);
  }
  FUNC_0(VAR_0,VAR_23,VAR_24?VAR_24:(int)VAR_13,(*VAR_18==0||VAR_21||VAR_24)?0:VAR_22,VAR_16,VAR_19,VAR_20,0);
}
