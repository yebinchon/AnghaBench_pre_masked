
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int msr; } ;
typedef TYPE_2__ modem_info ;
struct TYPE_5__ {TYPE_2__* info; } ;
struct TYPE_7__ {TYPE_1__ mdm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;

void
FUNC_2(void)
{
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  modem_info *VAR_7 = &VAR_4->mdm.info[VAR_6];
  if (VAR_7->msr & VAR_3) {
   VAR_5 = 1;
   FUNC_1(VAR_2, VAR_7);
  }
 }
 FUNC_0(VAR_1, VAR_5);
}
