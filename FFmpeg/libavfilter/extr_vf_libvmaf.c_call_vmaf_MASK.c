
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int cond; int vmaf_score; int error; } ;
typedef TYPE_1__ LIBVMAFContext ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void *FUNC_6(void *VAR_1)
{
    LIBVMAFContext *VAR_2 = (LIBVMAFContext *) VAR_1;
    FUNC_1(VAR_2);
    if (!VAR_2->error) {
        FUNC_0(VAR_1, VAR_0, "VMAF score: %f\n",VAR_2->vmaf_score);
    } else {
        FUNC_4(&VAR_2->lock);
        FUNC_2(&VAR_2->cond);
        FUNC_5(&VAR_2->lock);
    }
    FUNC_3(((void*)0));
    return ((void*)0);
}
