
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int validHMS; int h; int m; int s; int validTZ; scalar_t__ tz; scalar_t__ validJD; } ;
typedef TYPE_1__ DateTime ;


 int FUNC_0 (char const*,int,int ,int,char,int*,...) ;
 scalar_t__ FUNC_1 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, DateTime *VAR_1){
  int VAR_2, VAR_3, VAR_4;
  double VAR_5 = 0.0;
  if( FUNC_0(VAR_0, 2, 0, 24, ':', &VAR_2, 2, 0, 59, 0, &VAR_3)!=2 ){
    return 1;
  }
  VAR_0 += 5;
  if( *VAR_0==':' ){
    VAR_0++;
    if( FUNC_0(VAR_0, 2, 0, 59, 0, &VAR_4)!=1 ){
      return 1;
    }
    VAR_0 += 2;
    if( *VAR_0=='.' && FUNC_2(VAR_0[1]) ){
      double VAR_6 = 1.0;
      VAR_0++;
      while( FUNC_2(*VAR_0) ){
        VAR_5 = VAR_5*10.0 + *VAR_0 - '0';
        VAR_6 *= 10.0;
        VAR_0++;
      }
      VAR_5 /= VAR_6;
    }
  }else{
    VAR_4 = 0;
  }
  VAR_1->validJD = 0;
  VAR_1->validHMS = 1;
  VAR_1->h = VAR_2;
  VAR_1->m = VAR_3;
  VAR_1->s = VAR_4 + VAR_5;
  if( FUNC_1(VAR_0, VAR_1) ) return 1;
  VAR_1->validTZ = (VAR_1->tz!=0)?1:0;
  return 0;
}
