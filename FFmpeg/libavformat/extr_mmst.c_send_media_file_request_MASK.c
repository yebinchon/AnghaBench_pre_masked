
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int write_out_ptr; } ;
struct TYPE_8__ {scalar_t__ path; TYPE_2__ mms; } ;
typedef TYPE_1__ MMSTContext ;
typedef TYPE_2__ MMSContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(MMSTContext *VAR_1)
{
    int VAR_2;
    MMSContext *VAR_3 = &VAR_1->mms;
    FUNC_4(VAR_1, VAR_0);
    FUNC_1(VAR_3, 1, 0xffffffff);
    FUNC_0(&VAR_3->write_out_ptr, 0);
    FUNC_0(&VAR_3->write_out_ptr, 0);
    if ((VAR_2 = FUNC_2(VAR_3, VAR_1->path + 1)) < 0)
        return VAR_2;

    return FUNC_3(VAR_1);
}
