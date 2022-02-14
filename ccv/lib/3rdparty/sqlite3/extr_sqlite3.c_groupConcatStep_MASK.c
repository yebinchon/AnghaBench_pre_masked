
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_5__ {scalar_t__* aLimit; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {scalar_t__ mxAlloc; } ;
typedef TYPE_2__ StrAccum ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char const*,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  const char *VAR_5;
  StrAccum *VAR_6;
  const char *VAR_7;
  int VAR_8, VAR_9;
  FUNC_0( VAR_3==1 || VAR_3==2 );
  if( FUNC_6(VAR_4[0])==VAR_1 ) return;
  VAR_6 = (StrAccum*)FUNC_2(VAR_2, sizeof(*VAR_6));

  if( VAR_6 ){
    sqlite3 *VAR_10 = FUNC_3(VAR_2);
    int VAR_11 = VAR_6->mxAlloc==0;
    VAR_6->mxAlloc = VAR_10->aLimit[VAR_0];
    if( !VAR_11 ){
      if( VAR_3==2 ){
        VAR_7 = (char*)FUNC_5(VAR_4[1]);
        VAR_9 = FUNC_4(VAR_4[1]);
      }else{
        VAR_7 = ",";
        VAR_9 = 1;
      }
      if( VAR_7 ) FUNC_1(VAR_6, VAR_7, VAR_9);
    }
    VAR_5 = (char*)FUNC_5(VAR_4[0]);
    VAR_8 = FUNC_4(VAR_4[0]);
    if( VAR_5 ) FUNC_1(VAR_6, VAR_5, VAR_8);
  }
}
