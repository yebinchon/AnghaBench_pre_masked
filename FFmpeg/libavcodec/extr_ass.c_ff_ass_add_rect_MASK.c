
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_rects; TYPE_1__** rects; } ;
struct TYPE_7__ {char* ass; int type; } ;
typedef TYPE_1__ AVSubtitleRect ;
typedef TYPE_2__ AVSubtitle ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__** FUNC_2 (TYPE_1__**,int,int) ;
 char* FUNC_3 (int,int,char const*,char const*,char const*) ;

int FUNC_4(AVSubtitle *VAR_2, const char *VAR_3,
                    int VAR_4, int VAR_5, const char *VAR_6,
                    const char *VAR_7)
{
    char *VAR_8;
    AVSubtitleRect **VAR_9;

    VAR_9 = FUNC_2(VAR_2->rects, (VAR_2->num_rects+1), sizeof(*VAR_2->rects));
    if (!VAR_9)
        return FUNC_0(VAR_0);
    VAR_2->rects = VAR_9;
    VAR_9[VAR_2->num_rects] = FUNC_1(sizeof(*VAR_9[0]));
    if (!VAR_9[VAR_2->num_rects])
        return FUNC_0(VAR_0);
    VAR_9[VAR_2->num_rects]->type = VAR_1;
    VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_3);
    if (!VAR_8)
        return FUNC_0(VAR_0);
    VAR_9[VAR_2->num_rects]->ass = VAR_8;
    VAR_2->num_rects++;
    return 0;
}
