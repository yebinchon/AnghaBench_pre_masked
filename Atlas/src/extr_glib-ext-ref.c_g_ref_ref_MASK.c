
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ref_count; } ;
typedef TYPE_1__ GRef ;


 int FUNC_0 (int) ;

void FUNC_1(GRef *VAR_0) {
 FUNC_0(VAR_0->ref_count > 0);

 VAR_0->ref_count++;
}
