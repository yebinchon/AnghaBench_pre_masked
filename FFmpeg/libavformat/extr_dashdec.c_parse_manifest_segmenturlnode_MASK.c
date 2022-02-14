
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct representation {int n_fragments; int fragments; struct fragment* init_section; } ;
struct fragment {void* url; } ;
struct TYPE_11__ {TYPE_2__* priv_data; } ;
struct TYPE_10__ {int max_url_size; } ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ DASHContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fragment*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *,int *,struct fragment*) ;
 void* FUNC_4 (char*) ;
 void* FUNC_5 (TYPE_1__**,int,int,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2, struct representation *VAR_3,
                                         xmlNodePtr VAR_4,
                                         xmlNodePtr *VAR_5,
                                         char *VAR_6,
                                         char *VAR_7)
{
    DASHContext *VAR_8 = VAR_2->priv_data;
    char *VAR_9 = ((void*)0);
    char *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    int VAR_12 = VAR_8 ? VAR_8->max_url_size: VAR_1;

    if (!FUNC_2(VAR_4->name, (const char *)"Initialization")) {
        VAR_9 = FUNC_7(VAR_4, "sourceURL");
        VAR_11 = FUNC_7(VAR_4, "range");
        if (VAR_9 || VAR_11) {
            VAR_3->init_section = FUNC_4(VAR_11);
            if (!VAR_3->init_section) {
                FUNC_6(VAR_9);
                FUNC_6(VAR_11);
                return FUNC_0(VAR_0);
            }
            VAR_3->init_section->url = FUNC_5(VAR_5, 4,
                                                     VAR_12,
                                                     VAR_6,
                                                     VAR_7,
                                                     VAR_9);

            if (!VAR_3->init_section->url) {
                FUNC_1(VAR_3->init_section);
                FUNC_6(VAR_9);
                FUNC_6(VAR_11);
                return FUNC_0(VAR_0);
            }
            FUNC_6(VAR_9);
            FUNC_6(VAR_11);
        }
    } else if (!FUNC_2(VAR_4->name, (const char *)"SegmentURL")) {
        VAR_10 = FUNC_7(VAR_4, "media");
        VAR_11 = FUNC_7(VAR_4, "mediaRange");
        if (VAR_10 || VAR_11) {
            struct fragment *VAR_13 = FUNC_4(VAR_11);
            if (!VAR_13) {
                FUNC_6(VAR_10);
                FUNC_6(VAR_11);
                return FUNC_0(VAR_0);
            }
            VAR_13->url = FUNC_5(VAR_5, 4,
                                       VAR_12,
                                       VAR_6,
                                       VAR_7,
                                       VAR_10);
            if (!VAR_13->url) {
                FUNC_1(VAR_13);
                FUNC_6(VAR_10);
                FUNC_6(VAR_11);
                return FUNC_0(VAR_0);
            }
            FUNC_3(&VAR_3->fragments, &VAR_3->n_fragments, VAR_13);
            FUNC_6(VAR_10);
            FUNC_6(VAR_11);
        }
    }

    return 0;
}
