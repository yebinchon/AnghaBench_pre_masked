
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tail; } ;
struct TYPE_8__ {int usec_timeout; int cce_fifo_size; TYPE_1__ ring; } ;
typedef TYPE_2__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(drm_r128_private_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->usec_timeout; VAR_6++) {
  if (FUNC_2(VAR_5) == VAR_5->ring.tail) {
   int VAR_7 = FUNC_3(VAR_4);
   if (((VAR_7 & VAR_2) >=
        VAR_5->cce_fifo_size) &&
       !(VAR_7 & (VAR_1 |
      VAR_3))) {
    return FUNC_4(VAR_5);
   }
  }
  FUNC_1(1);
 }





 return -VAR_0;
}
