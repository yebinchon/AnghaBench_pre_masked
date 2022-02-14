
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zone_t ;
typedef TYPE_1__* buf_t ;
struct TYPE_3__ {uintptr_t b_datap; scalar_t__ b_bufsize; int b_flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,uintptr_t,scalar_t__) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static void
FUNC_4(buf_t VAR_2)
{
 if (VAR_2->b_bufsize) {
  if (FUNC_0(VAR_2->b_flags, VAR_0)) {
   zone_t VAR_3;

   VAR_3 = FUNC_1(VAR_2->b_bufsize);
   FUNC_3(VAR_3, (void *)VAR_2->b_datap);
  } else
   FUNC_2(VAR_1, VAR_2->b_datap, VAR_2->b_bufsize);

  VAR_2->b_datap = (uintptr_t)((void*)0);
  VAR_2->b_bufsize = 0;
 }
}
