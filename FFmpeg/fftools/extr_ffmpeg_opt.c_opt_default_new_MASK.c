
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* g; } ;
struct TYPE_4__ {int format_opts; int codec_opts; } ;
typedef TYPE_2__ OptionsContext ;
typedef int AVDictionary ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int **) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int *,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(OptionsContext *VAR_2, const char *VAR_3, const char *VAR_4)
{
    int VAR_5;
    AVDictionary *VAR_6 = VAR_0;
    AVDictionary *VAR_7 = VAR_1;
    VAR_0 = ((void*)0);
    VAR_1 = ((void*)0);

    VAR_5 = FUNC_2(((void*)0), VAR_3, VAR_4);

    FUNC_0(&VAR_2->g->codec_opts , VAR_0, 0);
    FUNC_0(&VAR_2->g->format_opts, VAR_1, 0);
    FUNC_1(&VAR_0);
    FUNC_1(&VAR_1);
    VAR_0 = VAR_6;
    VAR_1 = VAR_7;

    return VAR_5;
}
