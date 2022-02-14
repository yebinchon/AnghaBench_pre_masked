
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 scalar_t__* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;

int FUNC_0(int VAR_13, int VAR_14)
{
  int VAR_15;
  int VAR_16=-1;
  int VAR_17=10;

  if(VAR_14>0&&(VAR_7[VAR_14-1]==VAR_5||VAR_7[VAR_14-1]==VAR_1))
  {
    if(VAR_6[VAR_14-1]<VAR_11 || VAR_6[VAR_14-1]>VAR_11+VAR_10*4-4)
      return 0;
  }
  for(VAR_15=0;VAR_15<9;VAR_15++)
  {
    if(VAR_14+VAR_15>=VAR_10) {
      VAR_15=VAR_10-VAR_14-1;
      break;
    }
    if(VAR_7[VAR_14+VAR_15]==VAR_5||VAR_7[VAR_14+VAR_15]==VAR_1)
    {

      VAR_15++;
      break;
    }
    if(VAR_7[VAR_14+VAR_15]==VAR_3||VAR_7[VAR_14+VAR_15]==VAR_4)
    {
      break;
    }
  }
  for(;VAR_15>=1;VAR_15--)
  {
    if(VAR_8[VAR_14+VAR_15]==VAR_13) VAR_17=VAR_15;
    if(VAR_9[VAR_14+VAR_15]==VAR_13) VAR_17=VAR_15;
    if((VAR_12[VAR_14+VAR_15]>>VAR_13)&1) VAR_17=10;
    if(VAR_14+VAR_15>=0&&(VAR_7[VAR_14+VAR_15]==VAR_5||VAR_7[VAR_14+VAR_15]==VAR_0||VAR_7[VAR_14+VAR_15]==VAR_2))
    {
      VAR_16=VAR_15;
    }
  }
  if(VAR_17<10) return 1;
  return 0;
}
