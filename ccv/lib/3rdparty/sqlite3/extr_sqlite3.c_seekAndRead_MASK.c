
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; } ;
typedef TYPE_1__ unixFile ;
typedef scalar_t__ sqlite3_int64 ;
typedef int i64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,scalar_t__,int ) ;
 int FUNC_4 (int,void*,int,scalar_t__) ;
 int FUNC_5 (int,void*,int,scalar_t__) ;
 int FUNC_6 (int,void*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(unixFile *VAR_6, sqlite3_int64 VAR_7, void *VAR_8, int VAR_9){
  int VAR_10;
  int VAR_11 = 0;

  i64 VAR_12;

  VAR_4;
  FUNC_2( VAR_9==(VAR_9&0x1ffff) );
  FUNC_2( VAR_6->h>2 );
  do{







    VAR_12 = FUNC_3(VAR_6->h, VAR_7, VAR_1);
    FUNC_1( VAR_12 = -1 );
    if( VAR_12<0 ){
      FUNC_7((unixFile*)VAR_6, VAR_5);
      return -1;
    }
    VAR_10 = FUNC_6(VAR_6->h, VAR_8, VAR_9);

    if( VAR_10==VAR_9 ) break;
    if( VAR_10<0 ){
      if( VAR_5==VAR_0 ){ VAR_10 = 1; continue; }
      VAR_11 = 0;
      FUNC_7((unixFile*)VAR_6, VAR_5);
      break;
    }else if( VAR_10>0 ){
      VAR_9 -= VAR_10;
      VAR_7 += VAR_10;
      VAR_11 += VAR_10;
      VAR_8 = (void*)(VAR_10 + (char*)VAR_8);
    }
  }while( VAR_10>0 );
  VAR_3;
  FUNC_0(("READ    %-3d %5d %7lld %llu\n",
            VAR_6->h, VAR_10+VAR_11, VAR_7-VAR_11, VAR_2));
  return VAR_10+VAR_11;
}
