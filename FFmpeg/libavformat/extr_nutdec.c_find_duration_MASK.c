
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int duration_estimation_method; } ;
struct TYPE_5__ {TYPE_2__* avf; } ;
typedef TYPE_1__ NUTContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,scalar_t__*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_1(NUTContext *VAR_2, int64_t VAR_3)
{
    AVFormatContext *VAR_4 = VAR_2->avf;
    int64_t VAR_5 = 0;

    FUNC_0(VAR_4, -1, &VAR_5, ((void*)0), VAR_1);

    if(VAR_5 > 0)
        VAR_4->duration_estimation_method = VAR_0;
    return VAR_5;
}
