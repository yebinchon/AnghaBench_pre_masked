
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int isError; TYPE_3__ s; } ;
typedef TYPE_1__ sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ,int ) ;

void FUNC_2(sqlite3_context *VAR_3, int VAR_4){
  VAR_3->isError = VAR_4;
  if( VAR_3->s.flags & VAR_0 ){
    FUNC_1(&VAR_3->s, FUNC_0(VAR_4), -1,
                         VAR_2, VAR_1);
  }
}
