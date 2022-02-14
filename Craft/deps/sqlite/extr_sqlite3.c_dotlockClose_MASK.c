
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lockingContext; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_2) {
  int VAR_3 = VAR_1;
  if( VAR_2 ){
    unixFile *VAR_4 = (unixFile*)VAR_2;
    FUNC_1(VAR_2, VAR_0);
    FUNC_2(VAR_4->lockingContext);
    VAR_3 = FUNC_0(VAR_2);
  }
  return VAR_3;
}
