
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int queue_lock; } ;
struct TYPE_5__ {scalar_t__ errors; TYPE_1__* rq_disk; } ;
struct TYPE_4__ {char* disk_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_6)
{
 char *VAR_7;

 VAR_2 = ((void*)0);

 if (!VAR_4)
  return;

 FUNC_3(VAR_3->queue_lock);
 VAR_5 = 1;
 VAR_7 = VAR_4->rq_disk->disk_name;
 FUNC_2("%s: timeout\n", VAR_7);
 if (++VAR_4->errors >= VAR_1) {



  FUNC_0(-VAR_0);
 }
 FUNC_1();
 FUNC_4(VAR_3->queue_lock);
}
