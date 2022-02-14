
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ cur_stream; } ;
typedef TYPE_1__ PMPContext ;
typedef TYPE_2__ AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0, int VAR_1, int64_t VAR_2, int VAR_3)
{
    PMPContext *VAR_4 = VAR_0->priv_data;
    VAR_4->cur_stream = 0;

    return -1;
}
