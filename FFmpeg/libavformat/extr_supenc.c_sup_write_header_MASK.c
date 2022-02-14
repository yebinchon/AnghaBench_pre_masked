
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nb_streams; int * streams; TYPE_1__* oformat; } ;
struct TYPE_5__ {int name; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_2)
{
    if (VAR_2->nb_streams != 1) {
        FUNC_1(VAR_2, VAR_0, "%s files have exactly one stream\n",
               VAR_2->oformat->name);
        return FUNC_0(VAR_1);
    }

    FUNC_2(VAR_2->streams[0], 32, 1, 90000);

    return 0;
}
