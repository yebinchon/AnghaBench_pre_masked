
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_5__ {int validYMD; int Y; int M; int D; scalar_t__ validTZ; scalar_t__ validJD; scalar_t__ validHMS; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int,int ,int,char,int*,int,int,int,char,int*,int,int,int,int ,int*) ;
 scalar_t__ FUNC_2 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, DateTime *VAR_1){
  int VAR_2, VAR_3, VAR_4, VAR_5;

  if( VAR_0[0]=='-' ){
    VAR_0++;
    VAR_5 = 1;
  }else{
    VAR_5 = 0;
  }
  if( FUNC_1(VAR_0,4,0,9999,'-',&VAR_2,2,1,12,'-',&VAR_3,2,1,31,0,&VAR_4)!=3 ){
    return 1;
  }
  VAR_0 += 10;
  while( FUNC_3(*VAR_0) || 'T'==*(u8*)VAR_0 ){ VAR_0++; }
  if( FUNC_2(VAR_0, VAR_1)==0 ){

  }else if( *VAR_0==0 ){
    VAR_1->validHMS = 0;
  }else{
    return 1;
  }
  VAR_1->validJD = 0;
  VAR_1->validYMD = 1;
  VAR_1->Y = VAR_5 ? -VAR_2 : VAR_2;
  VAR_1->M = VAR_3;
  VAR_1->D = VAR_4;
  if( VAR_1->validTZ ){
    FUNC_0(VAR_1);
  }
  return 0;
}
