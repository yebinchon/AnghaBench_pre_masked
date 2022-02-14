
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_addr_t ;
typedef int boolean_t ;
struct TYPE_4__ {int aio_fildes; } ;
struct TYPE_5__ {scalar_t__ uaiocbp; TYPE_1__ aiocb; } ;
typedef TYPE_2__ aio_workq_entry ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(aio_workq_entry *VAR_3, user_addr_t VAR_4, int VAR_5)
{
 if ( (VAR_4 == VAR_2 && VAR_5 == 0) ||
   (VAR_4 != VAR_2 && VAR_3->uaiocbp == VAR_4) ||
   (VAR_4 == VAR_2 && VAR_5 == VAR_3->aiocb.aio_fildes) ) {
  return VAR_1;
 }

 return VAR_0;
}
