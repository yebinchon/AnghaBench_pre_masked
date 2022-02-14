
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pb; int index_entries; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    WtvContext *VAR_1 = VAR_0->priv_data;
    FUNC_0(&VAR_1->index_entries);
    FUNC_1(VAR_1->pb);
    return 0;
}
