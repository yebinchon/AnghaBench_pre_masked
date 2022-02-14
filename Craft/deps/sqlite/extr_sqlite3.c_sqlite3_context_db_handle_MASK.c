
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * db; } ;
struct TYPE_5__ {TYPE_1__ s; scalar_t__ pFunc; } ;
typedef TYPE_2__ sqlite3_context ;
typedef int sqlite3 ;


 int FUNC_0 (int) ;

sqlite3 *FUNC_1(sqlite3_context *VAR_0){
  FUNC_0( VAR_0 && VAR_0->pFunc );
  return VAR_0->s.db;
}
