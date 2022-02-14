
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regstat {long long u; } ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 int FUNC_0 (struct regstat*,int,long long) ;
 int FUNC_1 (struct regstat*,int,int) ;
 int FUNC_2 (struct regstat*,int,long long,int ) ;
 int FUNC_3 (struct regstat*,long long) ;
 int FUNC_4 (struct regstat*,long long) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 long long* VAR_8 ;
 long long* VAR_9 ;

void FUNC_5(struct regstat *VAR_10,int VAR_11)
{

  if(VAR_6[VAR_11]==0) {
    if(VAR_7[VAR_11]==7)
    {
      FUNC_3(VAR_10,VAR_8[VAR_11]);
      FUNC_3(VAR_10,VAR_9[VAR_11]);
      FUNC_3(VAR_10,VAR_3);
      FUNC_0(VAR_10,VAR_11,VAR_8[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_9[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_3);
      FUNC_4(VAR_10,VAR_3);
    }
    if(VAR_7[VAR_11]==8)
    {
      FUNC_3(VAR_10,VAR_2);
      FUNC_3(VAR_10,VAR_3);
      FUNC_0(VAR_10,VAR_11,VAR_2);
      FUNC_0(VAR_10,VAR_11,VAR_3);
      FUNC_4(VAR_10,VAR_2);
      FUNC_4(VAR_10,VAR_3);
    }
    if(VAR_7[VAR_11]==9)
    {
      FUNC_0(VAR_10,VAR_11,VAR_4);
      FUNC_4(VAR_10,VAR_4);
    }
  }
  if(VAR_6[VAR_11]==2) {
    if(VAR_7[VAR_11]==7)
    {
      FUNC_3(VAR_10,VAR_8[VAR_11]);
      FUNC_3(VAR_10,VAR_9[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_8[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_9[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_4);
      FUNC_4(VAR_10,VAR_4);


      FUNC_1(VAR_10,VAR_11,-1);
      VAR_5[VAR_11]=1;

    }
    if(VAR_7[VAR_11]==14||VAR_7[VAR_11]==15)
    {
      FUNC_3(VAR_10,VAR_8[VAR_11]);
      FUNC_3(VAR_10,VAR_9[VAR_11]);
      FUNC_3(VAR_10,VAR_3);
      FUNC_0(VAR_10,VAR_11,VAR_8[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_9[VAR_11]);
      FUNC_0(VAR_10,VAR_11,VAR_3);
      FUNC_4(VAR_10,VAR_3);

      FUNC_1(VAR_10,VAR_11,-1);
      VAR_5[VAR_11]=1;
    }
  }
  if(VAR_6[VAR_11]==3) {


    if(!(VAR_10->u&(1LL<<VAR_2))) {
      FUNC_2(VAR_10,VAR_11,VAR_2,VAR_1);
      VAR_10->u&=~(1LL<<VAR_3);
    }
    FUNC_2(VAR_10,VAR_11,VAR_3,VAR_0);







    FUNC_3(VAR_10,VAR_8[VAR_11]);
    FUNC_3(VAR_10,VAR_9[VAR_11]);
    FUNC_3(VAR_10,VAR_2);
    FUNC_3(VAR_10,VAR_3);
    FUNC_0(VAR_10,VAR_11,VAR_8[VAR_11]);
    FUNC_0(VAR_10,VAR_11,VAR_9[VAR_11]);
    FUNC_4(VAR_10,VAR_2);
    FUNC_4(VAR_10,VAR_3);
  }
}
