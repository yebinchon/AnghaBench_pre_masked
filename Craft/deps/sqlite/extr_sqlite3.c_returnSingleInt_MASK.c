
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int value ;
typedef int i64 ;
typedef int Vdbe ;
struct TYPE_4__ {int nMem; int db; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int ,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,int ,int ,int,int ,char*,int ) ;
 int FUNC_5 (int *,int ,int ,char const*,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static void FUNC_7(Parse *VAR_5, const char *VAR_6, i64 VAR_7){
  Vdbe *VAR_8 = FUNC_2(VAR_5);
  int VAR_9 = ++VAR_5->nMem;
  i64 *VAR_10 = FUNC_1(VAR_5->db, sizeof(VAR_7));
  if( VAR_10 ){
    FUNC_0(VAR_10, &VAR_7, sizeof(VAR_7));
  }
  FUNC_4(VAR_8, VAR_1, 0, VAR_9, 0, (char*)VAR_10, VAR_3);
  FUNC_6(VAR_8, 1);
  FUNC_5(VAR_8, 0, VAR_0, VAR_6, VAR_4);
  FUNC_3(VAR_8, VAR_2, VAR_9, 1);
}
