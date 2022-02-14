
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_file ;
struct TYPE_3__ {int pVfs; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int **,int,int*) ;

__attribute__((used)) static int FUNC_1(sqlite3 *VAR_5, sqlite3_file **VAR_6){
  int VAR_7;
  return FUNC_0(VAR_5->pVfs, 0, VAR_6,
      VAR_4 |
      VAR_3 | VAR_0 |
      VAR_2 | VAR_1, &VAR_7
  );
}
