
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int host ;
struct TYPE_7__ {int url; TYPE_1__* priv_data; } ;
struct TYPE_6__ {int real_challenge; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,char*,int,int*,int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    RTSPState *VAR_2 = VAR_1->priv_data;
    char VAR_3[1024];
    int VAR_4;

    FUNC_0(((void*)0), 0, ((void*)0), 0, VAR_3, sizeof(VAR_3), &VAR_4, ((void*)0), 0,
                 VAR_1->url);
    FUNC_2(VAR_1, 0);
    return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_0,
                                      VAR_2->real_challenge);
}
