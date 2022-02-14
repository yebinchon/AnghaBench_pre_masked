
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* c_segment_t ;
struct TYPE_2__ {int c_generation_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

void
FUNC_5(void)
{
 c_segment_t VAR_7;

 FUNC_1(VAR_3);

 if (VAR_4 == VAR_1) {

  if (!FUNC_3(&VAR_2)) {

   VAR_7 = (c_segment_t)FUNC_4(&VAR_2);

   VAR_6 = VAR_7->c_generation_id;
  } else
   VAR_6 = VAR_5;

  VAR_4 = VAR_0;

  FUNC_0("vm_compressor_record_warmup (%qd - %qd)\n", VAR_5, VAR_6);
 }
 FUNC_2(VAR_3);
}
