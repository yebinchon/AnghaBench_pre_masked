
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtad_refcnt; } ;
typedef TYPE_1__ dtrace_actdesc_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(dtrace_actdesc_t *VAR_0)
{
 FUNC_0(VAR_0->dtad_refcnt >= 1);
 VAR_0->dtad_refcnt++;
}
