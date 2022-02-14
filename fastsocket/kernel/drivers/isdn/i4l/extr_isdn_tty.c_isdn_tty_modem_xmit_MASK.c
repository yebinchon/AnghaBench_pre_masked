
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ online; } ;
typedef TYPE_2__ modem_info ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_8__ {TYPE_1__ mdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(void)
{
 int VAR_3 = 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  modem_info *VAR_5 = &VAR_2->mdm.info[VAR_4];
  if (VAR_5->online) {
   VAR_3 = 1;
   FUNC_1(VAR_5);
   FUNC_2(VAR_5);
  }
 }
 FUNC_0(VAR_1, VAR_3);
}
