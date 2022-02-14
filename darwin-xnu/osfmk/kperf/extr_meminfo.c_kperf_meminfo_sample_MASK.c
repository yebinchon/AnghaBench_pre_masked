
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct meminfo {void* purgeable_volatile_compressed; void* purgeable_volatile; int phys_footprint; } ;
typedef void* ledger_amount_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_6__ {int purgeable_volatile_compressed; int purgeable_volatile; } ;
struct TYPE_5__ {int ledger; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ,void**,void**) ;
 TYPE_2__ VAR_5 ;

void
FUNC_4(task_t VAR_6, struct meminfo *VAR_7)
{
 ledger_amount_t VAR_8, VAR_9;
 kern_return_t VAR_10;

 FUNC_1(VAR_7 != ((void*)0));

 FUNC_0(VAR_3 | VAR_1);

 VAR_7->phys_footprint = FUNC_2(VAR_6);

 VAR_10 = FUNC_3(VAR_6->ledger, VAR_5.purgeable_volatile,
                         &VAR_8, &VAR_9);
 if (VAR_10 == VAR_2) {
  VAR_7->purgeable_volatile = VAR_8 - VAR_9;
 } else {
  VAR_7->purgeable_volatile = VAR_4;
 }

 VAR_10 = FUNC_3(VAR_6->ledger,
                         VAR_5.purgeable_volatile_compressed,
                         &VAR_8, &VAR_9);
 if (VAR_10 == VAR_2) {
  VAR_7->purgeable_volatile_compressed = VAR_8 - VAR_9;
 } else {
  VAR_7->purgeable_volatile_compressed = VAR_4;
 }

 FUNC_0(VAR_3 | VAR_0);
}
