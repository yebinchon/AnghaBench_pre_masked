
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int hd; } ;
typedef TYPE_2__ HTTPContext ;


 int FUNC_0 (int ,char*,int) ;

int FUNC_1(URLContext *VAR_0)
{
    int VAR_1 = 0;
    HTTPContext *VAR_2 = VAR_0->priv_data;


    char VAR_3[1024];
    int VAR_4;
    VAR_4 = FUNC_0(VAR_2->hd, VAR_3, sizeof(VAR_3));
    if (VAR_4 < 0) {
        VAR_1 = VAR_4;
    }

    return VAR_1;
}
