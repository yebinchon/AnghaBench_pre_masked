
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_9__ {int iJD; scalar_t__ isError; } ;
typedef TYPE_1__ DateTime ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char*,int,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4,
  DateTime *VAR_5
){
  int VAR_6, VAR_7;
  const unsigned char *VAR_8;
  int VAR_9;
  FUNC_1(VAR_5, 0, sizeof(*VAR_5));
  if( VAR_3==0 ){
    return FUNC_4(VAR_2, VAR_5);
  }
  if( (VAR_9 = FUNC_9(VAR_4[0]))==VAR_0
                   || VAR_9==VAR_1 ){
    FUNC_5(VAR_5, FUNC_7(VAR_4[0]));
  }else{
    VAR_8 = FUNC_8(VAR_4[0]);
    if( !VAR_8 || FUNC_2(VAR_2, (char*)VAR_8, VAR_5) ){
      return 1;
    }
  }
  for(VAR_6=1; VAR_6<VAR_3; VAR_6++){
    VAR_8 = FUNC_8(VAR_4[VAR_6]);
    VAR_7 = FUNC_6(VAR_4[VAR_6]);
    if( VAR_8==0 || FUNC_3(VAR_2, (char*)VAR_8, VAR_7, VAR_5) ) return 1;
  }
  FUNC_0(VAR_5);
  if( VAR_5->isError || !FUNC_10(VAR_5->iJD) ) return 1;
  return 0;
}
