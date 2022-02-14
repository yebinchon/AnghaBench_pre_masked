
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct workqueue {int dummy; } ;
struct workq_threadreq_s {int dummy; } ;
struct TYPE_6__ {int abstime; int usecs; } ;
struct TYPE_5__ {int abstime; int usecs; } ;
struct TYPE_4__ {int abstime; int usecs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 TYPE_3__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 void* FUNC_4 (int,int,int,char*) ;

void
FUNC_5(void)
{
 VAR_3 = FUNC_3();
 VAR_1 = FUNC_1();
 VAR_2 = FUNC_2("workq", VAR_3);

 VAR_5 = FUNC_4(sizeof(struct workqueue),
   1024 * sizeof(struct workqueue), 8192, "workq.wq");
 VAR_4 = FUNC_4(sizeof(struct workq_threadreq_s),
   1024 * sizeof(struct workq_threadreq_s), 8192, "workq.threadreq");

 FUNC_0(VAR_8.usecs,
   VAR_0, &VAR_8.abstime);
 FUNC_0(VAR_7.usecs,
   VAR_0, &VAR_7.abstime);
 FUNC_0(VAR_6.usecs,
   VAR_0, &VAR_6.abstime);
}
