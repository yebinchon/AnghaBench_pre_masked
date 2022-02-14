
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* g; } ;
struct TYPE_4__ {int codec_opts; } ;
typedef TYPE_2__ OptionsContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*,char const*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    OptionsContext *VAR_5 = VAR_2;
    int VAR_6;
    char *VAR_7 = FUNC_1("timecode=%s", VAR_4);
    if (!VAR_7)
        return FUNC_0(VAR_0);
    VAR_6 = FUNC_4(VAR_5, "metadata:g", VAR_7, VAR_1);
    if (VAR_6 >= 0)
        VAR_6 = FUNC_2(&VAR_5->g->codec_opts, "gop_timecode", VAR_4, 0);
    FUNC_3(VAR_7);
    return VAR_6;
}
