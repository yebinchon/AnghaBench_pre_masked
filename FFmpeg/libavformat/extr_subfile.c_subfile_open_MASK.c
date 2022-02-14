
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {scalar_t__ end; scalar_t__ start; scalar_t__ pos; int h; } ;
typedef TYPE_2__ SubfileContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,char*) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*,int,int *,int **,int ,int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_3, const char *VAR_4, int VAR_5,
                        AVDictionary **VAR_6)
{
    SubfileContext *VAR_7 = VAR_3->priv_data;
    int VAR_8;

    if (!VAR_7->end)
        VAR_7->end = VAR_2;

    if (VAR_7->end <= VAR_7->start) {
        FUNC_1(VAR_3, VAR_0, "end before start\n");
        return FUNC_0(VAR_1);
    }
    FUNC_2(VAR_4, "subfile:", &VAR_4);
    VAR_8 = FUNC_4(&VAR_7->h, VAR_4, VAR_5, &VAR_3->interrupt_callback,
                               VAR_6, VAR_3->protocol_whitelist, VAR_3->protocol_blacklist, VAR_3);
    if (VAR_8 < 0)
        return VAR_8;
    VAR_7->pos = VAR_7->start;
    if ((VAR_8 = FUNC_5(VAR_3)) < 0) {
        FUNC_3(VAR_7->h);
        return VAR_8;
    }
    return 0;
}
