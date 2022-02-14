
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_6__ {int db; scalar_t__ flags; } ;
typedef TYPE_1__ Mem ;
typedef int CollSeq ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  Mem *VAR_4 = (Mem *)VAR_3[0];
  Mem *VAR_5;
  FUNC_0(VAR_2);

  VAR_5 = (Mem *)FUNC_5(VAR_1, sizeof(*VAR_5));
  if( !VAR_5 ) return;

  if( FUNC_8(VAR_3[0])==VAR_0 ){
    if( VAR_5->flags ) FUNC_3(VAR_1);
  }else if( VAR_5->flags ){
    int VAR_6;
    int VAR_7;
    CollSeq *VAR_8 = FUNC_1(VAR_1);
    VAR_6 = FUNC_7(VAR_1)!=0;
    VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_8);
    if( (VAR_6 && VAR_7<0) || (!VAR_6 && VAR_7>0) ){
      FUNC_4(VAR_5, VAR_4);
    }else{
      FUNC_3(VAR_1);
    }
  }else{
    VAR_5->db = FUNC_6(VAR_1);
    FUNC_4(VAR_5, VAR_4);
  }
}
