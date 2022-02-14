
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int key ;
struct TYPE_5__ {int nb_elem; TYPE_1__* elem; } ;
struct TYPE_4__ {char* lang; char* name; TYPE_2__ sub; int string; scalar_t__ def; } ;
typedef TYPE_1__ MatroskaTag ;
typedef TYPE_2__ EbmlList ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **,char*,int ,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int **,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_2, EbmlList *VAR_3,
                                 AVDictionary **VAR_4, char *VAR_5)
{
    MatroskaTag *VAR_6 = VAR_3->elem;
    char VAR_7[1024];
    int VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_3->nb_elem; VAR_8++) {
        const char *VAR_9 = VAR_6[VAR_8].lang &&
                           FUNC_6(VAR_6[VAR_8].lang, "und") ? VAR_6[VAR_8].lang : ((void*)0);

        if (!VAR_6[VAR_8].name) {
            FUNC_1(VAR_2, VAR_0, "Skipping invalid tag with no TagName.\n");
            continue;
        }
        if (VAR_5)
            FUNC_5(VAR_7, sizeof(VAR_7), "%s/%s", VAR_5, VAR_6[VAR_8].name);
        else
            FUNC_3(VAR_7, VAR_6[VAR_8].name, sizeof(VAR_7));
        if (VAR_6[VAR_8].def || !VAR_9) {
            FUNC_0(VAR_4, VAR_7, VAR_6[VAR_8].string, 0);
            if (VAR_6[VAR_8].sub.nb_elem)
                FUNC_7(VAR_2, &VAR_6[VAR_8].sub, VAR_4, VAR_7);
        }
        if (VAR_9) {
            FUNC_2(VAR_7, "-", sizeof(VAR_7));
            FUNC_2(VAR_7, VAR_9, sizeof(VAR_7));
            FUNC_0(VAR_4, VAR_7, VAR_6[VAR_8].string, 0);
            if (VAR_6[VAR_8].sub.nb_elem)
                FUNC_7(VAR_2, &VAR_6[VAR_8].sub, VAR_4, VAR_7);
        }
    }
    FUNC_4(VAR_4, ((void*)0), VAR_1);
}
