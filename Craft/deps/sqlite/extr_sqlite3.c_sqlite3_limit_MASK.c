
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* aLimit; } ;
typedef TYPE_1__ sqlite3 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int* VAR_23 ;
 int FUNC_0 (int) ;

int FUNC_1(sqlite3 *VAR_24, int VAR_25, int VAR_26){
  int VAR_27;







  FUNC_0( VAR_23[VAR_5]==VAR_16 );
  FUNC_0( VAR_23[VAR_7]==VAR_18 );
  FUNC_0( VAR_23[VAR_1]==VAR_12 );
  FUNC_0( VAR_23[VAR_3]==VAR_14 );
  FUNC_0( VAR_23[VAR_2]==VAR_13);
  FUNC_0( VAR_23[VAR_10]==VAR_21 );
  FUNC_0( VAR_23[VAR_4]==VAR_15 );
  FUNC_0( VAR_23[VAR_0]==VAR_11 );
  FUNC_0( VAR_23[VAR_6]==
                                               VAR_17 );
  FUNC_0( VAR_23[VAR_9]==VAR_20);
  FUNC_0( VAR_23[VAR_8]==VAR_19 );
  FUNC_0( VAR_8==(VAR_22-1) );


  if( VAR_25<0 || VAR_25>=VAR_22 ){
    return -1;
  }
  VAR_27 = VAR_24->aLimit[VAR_25];
  if( VAR_26>=0 ){
    if( VAR_26>VAR_23[VAR_25] ){
      VAR_26 = VAR_23[VAR_25];
    }
    VAR_24->aLimit[VAR_25] = VAR_26;
  }
  return VAR_27;
}
