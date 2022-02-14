
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int returnval; int flags; int errorval; } ;
typedef TYPE_1__ aio_workq_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(aio_workq_entry *VAR_2, boolean_t VAR_3, int VAR_4, boolean_t VAR_5)
{
 FUNC_0(VAR_2);

 if (VAR_3) {
  FUNC_1(VAR_2);
  VAR_2->errorval = VAR_1;
  VAR_2->returnval = -1;
 }

 if ( VAR_4 ) {
  VAR_2->flags |= VAR_4;
 }

 if ( VAR_5 ) {
  VAR_2->flags |= VAR_0;
 }

 FUNC_2(VAR_2);
}
