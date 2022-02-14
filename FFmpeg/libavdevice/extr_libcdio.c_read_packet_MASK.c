
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {TYPE_1__** streams; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_10__ {scalar_t__ last_sector; int drive; int paranoia; } ;
struct TYPE_9__ {scalar_t__ cur_dts; } ;
typedef TYPE_2__ CDIOContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,char*,char*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    CDIOContext *VAR_6 = VAR_4->priv_data;
    int VAR_7;
    uint16_t *VAR_8;
    char *VAR_9 = ((void*)0);

    if (VAR_4->streams[0]->cur_dts > VAR_6->last_sector)
        return VAR_0;

    VAR_8 = FUNC_4(VAR_6->paranoia, ((void*)0));
    if (!VAR_8)
        return VAR_0;

    if ((VAR_9 = FUNC_2(VAR_6->drive))) {
        FUNC_0(VAR_4, VAR_1, "%s\n", VAR_9);
        FUNC_5(VAR_9);
        VAR_9 = ((void*)0);
    }
    if ((VAR_9 = FUNC_3(VAR_6->drive))) {
        FUNC_0(VAR_4, VAR_2, "%s\n", VAR_9);
        FUNC_5(VAR_9);
        VAR_9 = ((void*)0);
    }

    if ((VAR_7 = FUNC_1(VAR_5, VAR_3)) < 0)
        return VAR_7;
    FUNC_6(VAR_5->data, VAR_8, VAR_3);
    return 0;
}
