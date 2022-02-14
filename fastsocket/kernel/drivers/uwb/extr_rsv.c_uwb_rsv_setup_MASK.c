
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct uwb_rc {int * rsv_workq; TYPE_1__ uwb_dev; } ;
typedef int name ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

int FUNC_3(struct uwb_rc *VAR_1)
{
 char VAR_2[16];

 FUNC_2(VAR_2, sizeof(VAR_2), "%s_rsvd", FUNC_1(&VAR_1->uwb_dev.dev));
 VAR_1->rsv_workq = FUNC_0(VAR_2);
 if (VAR_1->rsv_workq == ((void*)0))
  return -VAR_0;

 return 0;
}
