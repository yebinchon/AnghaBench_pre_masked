
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* run_queue_t ;
typedef scalar_t__ processor_t ;
typedef int ast_t ;
struct TYPE_3__ {int count; int urgency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static ast_t
FUNC_0(processor_t VAR_5)
{
 run_queue_t VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_3;
 VAR_7 = VAR_6->count;
 VAR_8 = VAR_6->urgency;

 if (VAR_7 > 0) {
  if (VAR_8 > 0)
   return (VAR_1 | VAR_2);

  return VAR_1;
 }

 if (VAR_4 != VAR_5)
  return VAR_1;

 return VAR_0;
}
