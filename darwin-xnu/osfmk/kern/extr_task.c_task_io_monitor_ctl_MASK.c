
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef int ledger_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int logical_writes; int physical_writes; } ;
struct TYPE_6__ {int ledger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

kern_return_t
FUNC_6(task_t VAR_7, uint32_t *VAR_8)
{
 ledger_t VAR_9 = VAR_7->ledger;

 FUNC_4(VAR_7);
 if (*VAR_8 & VAR_1) {

  FUNC_2(VAR_9, VAR_6.physical_writes, (VAR_5 * 1024 * 1024), 0);
  FUNC_3(VAR_9, VAR_6.physical_writes, (VAR_4 * VAR_3));


  FUNC_2(VAR_9, VAR_6.logical_writes, (VAR_5 * 1024 * 1024), 0);
  FUNC_3(VAR_9, VAR_6.logical_writes, (VAR_4 * VAR_3));

 } else if (*VAR_8 & VAR_0) {



  FUNC_1(VAR_9, VAR_6.physical_writes);
  FUNC_0(VAR_9, VAR_6.physical_writes);
  FUNC_1(VAR_9, VAR_6.logical_writes);
  FUNC_0(VAR_9, VAR_6.logical_writes);
 }

 FUNC_5(VAR_7);
 return VAR_2;
}
