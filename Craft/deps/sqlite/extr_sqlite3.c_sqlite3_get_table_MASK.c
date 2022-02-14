
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int errCode; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {char* zErrMsg; int nRow; int nColumn; int nData; int nAlloc; int rc; char** azResult; } ;
typedef TYPE_2__ TabResult ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,TYPE_2__*,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**) ;
 int VAR_3 ;
 char** FUNC_5 (int) ;
 char* FUNC_6 (char*,char*) ;
 char** FUNC_7 (char**,int) ;

int FUNC_8(
  sqlite3 *VAR_4,
  const char *VAR_5,
  char ***VAR_6,
  int *VAR_7,
  int *VAR_8,
  char **VAR_9
){
  int VAR_10;
  TabResult VAR_11;

  *VAR_6 = 0;
  if( VAR_8 ) *VAR_8 = 0;
  if( VAR_7 ) *VAR_7 = 0;
  if( VAR_9 ) *VAR_9 = 0;
  VAR_11.zErrMsg = 0;
  VAR_11.nRow = 0;
  VAR_11.nColumn = 0;
  VAR_11.nData = 1;
  VAR_11.nAlloc = 20;
  VAR_11.rc = VAR_2;
  VAR_11.azResult = FUNC_5(sizeof(char*)*VAR_11.nAlloc );
  if( VAR_11.azResult==0 ){
     VAR_4->errCode = VAR_1;
     return VAR_1;
  }
  VAR_11.azResult[0] = 0;
  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_3, &VAR_11, VAR_9);
  FUNC_1( sizeof(VAR_11.azResult[0])>= sizeof(VAR_11.nData) );
  VAR_11.azResult[0] = FUNC_0(VAR_11.nData);
  if( (VAR_10&0xff)==VAR_0 ){
    FUNC_4(&VAR_11.azResult[1]);
    if( VAR_11.zErrMsg ){
      if( VAR_9 ){
        FUNC_3(*VAR_9);
        *VAR_9 = FUNC_6("%s",VAR_11.zErrMsg);
      }
      FUNC_3(VAR_11.zErrMsg);
    }
    VAR_4->errCode = VAR_11.rc;
    return VAR_11.rc;
  }
  FUNC_3(VAR_11.zErrMsg);
  if( VAR_10!=VAR_2 ){
    FUNC_4(&VAR_11.azResult[1]);
    return VAR_10;
  }
  if( VAR_11.nAlloc>VAR_11.nData ){
    char **VAR_12;
    VAR_12 = FUNC_7( VAR_11.azResult, sizeof(char*)*VAR_11.nData );
    if( VAR_12==0 ){
      FUNC_4(&VAR_11.azResult[1]);
      VAR_4->errCode = VAR_1;
      return VAR_1;
    }
    VAR_11.azResult = VAR_12;
  }
  *VAR_6 = &VAR_11.azResult[1];
  if( VAR_8 ) *VAR_8 = VAR_11.nColumn;
  if( VAR_7 ) *VAR_7 = VAR_11.nRow;
  return VAR_10;
}
