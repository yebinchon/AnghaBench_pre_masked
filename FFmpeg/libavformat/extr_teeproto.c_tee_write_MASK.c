
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* priv_data; } ;
typedef TYPE_2__ URLContext ;
struct TYPE_7__ {int child_count; TYPE_1__* child; } ;
typedef TYPE_3__ TeeContext ;
struct TYPE_5__ {int url_context; } ;


 int FUNC_0 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    TeeContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;
    int VAR_5 = VAR_2;

    for (VAR_4=0; VAR_4<VAR_3->child_count; VAR_4++) {
        int VAR_6 = FUNC_0(VAR_3->child[VAR_4].url_context, VAR_1, VAR_2);
        if (VAR_6 < 0)
            VAR_5 = VAR_6;
    }
    return VAR_5;
}
