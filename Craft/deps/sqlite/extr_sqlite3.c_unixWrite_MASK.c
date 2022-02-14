
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pUnused; int dbUpdate; int transCntrChng; int mmapSize; scalar_t__ lastErrno; scalar_t__ pMapRegion; scalar_t__ inNormalWrite; } ;
typedef TYPE_1__ unixFile ;
typedef int u8 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *,void const*,int) ;
 int FUNC_6 (TYPE_1__*,int,char*,int) ;
 int FUNC_7 (TYPE_1__*,int,void const*,int) ;

__attribute__((used)) static int FUNC_8(
  sqlite3_file *VAR_5,
  const void *VAR_6,
  int VAR_7,
  sqlite3_int64 VAR_8
){
  unixFile *VAR_9 = (unixFile*)VAR_5;
  int VAR_10 = 0;
  FUNC_3( *VAR_5 );
  FUNC_3( VAR_7>0 );
  while( VAR_7>0 && (VAR_10 = FUNC_7(VAR_9, VAR_8, VAR_6, VAR_7))>0 ){
    VAR_7 -= VAR_10;
    VAR_8 += VAR_10;
    VAR_6 = &((char*)VAR_6)[VAR_10];
  }
  FUNC_1(( VAR_10=(-1), VAR_7=1 ));
  FUNC_0(( VAR_10=0, VAR_7=1 ));

  if( VAR_7>0 ){
    if( VAR_10<0 && VAR_9->lastErrno!=VAR_0 ){

      return VAR_3;
    }else{
      VAR_9->lastErrno = 0;
      return VAR_2;
    }
  }

  return VAR_4;
}
