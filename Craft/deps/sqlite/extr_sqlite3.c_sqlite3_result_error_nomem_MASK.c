
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_6__ {TYPE_4__ s; int isError; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_5__ {int mallocFailed; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(sqlite3_context *VAR_1){
  FUNC_0( FUNC_2(VAR_1->s.db->mutex) );
  FUNC_1(&VAR_1->s);
  VAR_1->isError = VAR_0;
  VAR_1->s.db->mallocFailed = 1;
}
