
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ validate_count; } ;
typedef TYPE_1__ FLVContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_1(AVFormatContext *VAR_0, int VAR_1,
                         int64_t VAR_2, int VAR_3)
{
    FLVContext *VAR_4 = VAR_0->priv_data;
    VAR_4->validate_count = 0;
    return FUNC_0(VAR_0->pb, VAR_1, VAR_2, VAR_3);
}
