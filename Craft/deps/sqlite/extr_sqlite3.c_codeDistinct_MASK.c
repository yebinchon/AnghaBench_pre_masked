
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_5__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int ,int,int,int) ;
 int FUNC_4 (int *,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_5(
  Parse *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  Vdbe *VAR_8;
  int VAR_9;

  VAR_8 = VAR_3->pVdbe;
  VAR_9 = FUNC_0(VAR_3);
  FUNC_4(VAR_8, VAR_0, VAR_4, VAR_5, VAR_7, VAR_6);
  FUNC_3(VAR_8, VAR_2, VAR_7, VAR_6, VAR_9);
  FUNC_2(VAR_8, VAR_1, VAR_4, VAR_9);
  FUNC_1(VAR_3, VAR_9);
}
