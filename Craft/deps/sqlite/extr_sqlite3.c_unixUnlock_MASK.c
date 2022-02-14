
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nFetchOut; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, int VAR_2){
  FUNC_0( VAR_2==VAR_0 || ((unixFile *)VAR_1)->nFetchOut==0 );
  return FUNC_1(VAR_1, VAR_2, 0);
}
