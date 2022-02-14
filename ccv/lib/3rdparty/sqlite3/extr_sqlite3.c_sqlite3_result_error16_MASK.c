
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* pOut; int isError; } ;
typedef TYPE_2__ sqlite3_context ;
struct TYPE_7__ {TYPE_1__* db; } ;
struct TYPE_5__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,void const*,int,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(sqlite3_context *VAR_3, const void *VAR_4, int VAR_5){
  FUNC_0( FUNC_2(VAR_3->pOut->db->mutex) );
  VAR_3->isError = VAR_0;
  FUNC_1(VAR_3->pOut, VAR_4, VAR_5, VAR_2, VAR_1);
}
