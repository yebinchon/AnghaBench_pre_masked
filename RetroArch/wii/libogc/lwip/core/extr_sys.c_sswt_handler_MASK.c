
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sswt_cb {int timeflag; int * psem; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    struct sswt_cb *VAR_1 = (struct sswt_cb *) VAR_0;


    VAR_1->timeflag = 1;
    FUNC_0(*(VAR_1->psem));
}
