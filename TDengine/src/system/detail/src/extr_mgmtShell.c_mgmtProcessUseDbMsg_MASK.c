
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int thandle; TYPE_1__* pUser; } ;
struct TYPE_7__ {int db; } ;
struct TYPE_6__ {int user; } ;
typedef TYPE_2__ SUseDbMsg ;
typedef TYPE_3__ SConnObj ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(char *VAR_1, int VAR_2, SConnObj *VAR_3) {
  SUseDbMsg *VAR_4 = (SUseDbMsg *)VAR_1;
  int VAR_5;

  VAR_5 = FUNC_1(VAR_3, VAR_4->db);
  if (VAR_5 == 0) FUNC_0("DB is change to:%s by %s", VAR_4->db, VAR_3->pUser->user);

  FUNC_2(VAR_3->thandle, VAR_0, VAR_5);

  return 0;
}
