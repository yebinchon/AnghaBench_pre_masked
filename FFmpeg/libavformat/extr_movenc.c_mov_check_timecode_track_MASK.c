
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * streams; } ;
typedef int AVTimecode ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *,int ,char const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVTimecode *VAR_1, int VAR_2, const char *VAR_3)
{
    int VAR_4;


    VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_0, VAR_0->streams[VAR_2]), VAR_3, VAR_0);
    return VAR_4;
}
