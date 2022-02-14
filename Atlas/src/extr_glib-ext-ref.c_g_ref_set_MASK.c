
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_3__ {int ref_count; int udata_free; int udata; } ;
typedef TYPE_1__ GRef ;
typedef int GDestroyNotify ;


 int FUNC_0 (int) ;

void FUNC_1(GRef *VAR_0, gpointer VAR_1, GDestroyNotify VAR_2) {
 FUNC_0(VAR_0->ref_count == 0);

 VAR_0->udata = VAR_1;
 VAR_0->udata_free = VAR_2;
 VAR_0->ref_count = 1;
}
