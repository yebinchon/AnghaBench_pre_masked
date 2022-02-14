
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_10__ {int * pb; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int block_align; int sample_rate; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int const) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int64_t FUNC_4(AVFormatContext *VAR_0, AVStream *VAR_1, const UID VAR_2)
{
    AVIOContext *VAR_3 = VAR_0->pb;
    int64_t VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);

    FUNC_3(VAR_3, 2, 0x3D0A);
    FUNC_0(VAR_3, VAR_1->codecpar->block_align);


    FUNC_3(VAR_3, 4, 0x3D09);
    FUNC_1(VAR_3, VAR_1->codecpar->block_align*VAR_1->codecpar->sample_rate);

    return VAR_4;
}
