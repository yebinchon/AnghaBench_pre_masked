
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int skip; int * out; int * in; } ;
typedef TYPE_2__ ThreadData_convert_frame ;
struct TYPE_10__ {TYPE_1__* internal; } ;
struct TYPE_8__ {int (* execute ) (TYPE_3__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef int PhotosensitivityFrame ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_2, AVFrame *VAR_3, PhotosensitivityFrame *VAR_4, int VAR_5)
{
    ThreadData_convert_frame VAR_6;
    VAR_6.in = VAR_3;
    VAR_6.out = VAR_4;
    VAR_6.skip = VAR_5;
    VAR_2->internal->execute(VAR_2, VAR_1, &VAR_6, ((void*)0), FUNC_0(VAR_0, FUNC_1(VAR_2)));
}
