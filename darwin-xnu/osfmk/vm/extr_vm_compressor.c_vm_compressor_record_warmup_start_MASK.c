
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
struct TYPE_2__ {scalar_t__ c_generation_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(void)
{
 c_segment_t VAR_5;

 FUNC_0(VAR_2);

 if (VAR_4 == 0) {
  if (!FUNC_2(&VAR_1)) {

   VAR_5 = (c_segment_t)FUNC_3(&VAR_1);

   VAR_4 = VAR_5->c_generation_id;
  } else
   VAR_4 = 0;

  VAR_3 = VAR_0;
 }
 FUNC_1(VAR_2);
}
