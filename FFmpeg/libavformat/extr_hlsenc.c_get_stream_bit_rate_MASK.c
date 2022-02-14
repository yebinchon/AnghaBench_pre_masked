
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ max_bitrate; } ;
struct TYPE_7__ {TYPE_1__* codecpar; } ;
struct TYPE_6__ {scalar_t__ bit_rate; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVCPBProperties ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int64_t FUNC_1(AVStream *VAR_1)
{
    AVCPBProperties *VAR_2 = (AVCPBProperties*)FUNC_0(
        VAR_1,
        VAR_0,
        ((void*)0)
    );

    if (VAR_1->codecpar->bit_rate)
        return VAR_1->codecpar->bit_rate;
    else if (VAR_2)
        return VAR_2->max_bitrate;

    return 0;
}
