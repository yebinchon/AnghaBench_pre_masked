
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
struct TYPE_9__ {scalar_t__ ref_count; scalar_t__ upl_iodone; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(upl_t VAR_0)
{
 FUNC_2(VAR_0);

 if (--VAR_0->ref_count == 0) {
  if(FUNC_5(VAR_0))
   FUNC_4(VAR_0);
  FUNC_3(VAR_0);

  if (VAR_0->upl_iodone)
          FUNC_0(VAR_0);

  FUNC_1(VAR_0);
 } else
  FUNC_3(VAR_0);
}
