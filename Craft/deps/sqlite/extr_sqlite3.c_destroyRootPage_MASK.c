
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_12__ {TYPE_2__* db; } ;
struct TYPE_11__ {TYPE_1__* aDb; } ;
struct TYPE_10__ {int zName; } ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*,int ,int ,int,int,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int *,int ,int,int,int) ;

__attribute__((used)) static void FUNC_7(Parse *VAR_1, int VAR_2, int VAR_3){
  Vdbe *VAR_4 = FUNC_2(VAR_1);
  int VAR_5 = FUNC_1(VAR_1);
  FUNC_6(VAR_4, VAR_0, VAR_2, VAR_5, VAR_3);
  FUNC_3(VAR_1);
  FUNC_4(VAR_1,
     "UPDATE %Q.%s SET rootpage=%d WHERE #%d AND rootpage=#%d",
     VAR_1->db->aDb[VAR_3].zName, FUNC_0(VAR_3), VAR_2, VAR_5, VAR_5);

  FUNC_5(VAR_1, VAR_5);
}
