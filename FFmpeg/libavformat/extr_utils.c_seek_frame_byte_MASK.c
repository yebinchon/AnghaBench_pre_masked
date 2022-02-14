
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {int io_repositioned; int pb; TYPE_1__* internal; } ;
struct TYPE_4__ {scalar_t__ data_offset; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2,
                           int64_t VAR_3, int VAR_4)
{
    int64_t VAR_5, VAR_6;

    VAR_5 = VAR_1->internal->data_offset;
    VAR_6 = FUNC_1(VAR_1->pb) - 1;

    if (VAR_3 < VAR_5)
        VAR_3 = VAR_5;
    else if (VAR_3 > VAR_6)
        VAR_3 = VAR_6;

    FUNC_0(VAR_1->pb, VAR_3, VAR_0);

    VAR_1->io_repositioned = 1;

    return 0;
}
