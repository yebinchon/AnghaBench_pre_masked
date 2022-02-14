
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int packet_size; TYPE_1__* internal; int pb; } ;
struct TYPE_4__ {scalar_t__ data_offset; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_2, int VAR_3,
                          int64_t VAR_4, int VAR_5)
{
    int64_t VAR_6;

    if (VAR_5 & VAR_0)
        VAR_4 = FUNC_0(0, VAR_4 - 1);
    if (VAR_4 < 0)
        return -1;
    VAR_6 = VAR_4 * VAR_2->packet_size;

    if (FUNC_1(VAR_2->pb, VAR_6 + VAR_2->internal->data_offset, VAR_1) < 0)
        return -1;
    return 0;
}
