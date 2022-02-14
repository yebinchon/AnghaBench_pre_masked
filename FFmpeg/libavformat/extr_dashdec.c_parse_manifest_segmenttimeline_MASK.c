
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef TYPE_2__* xmlAttrPtr ;
struct timeline {void* duration; void* repeat; void* starttime; } ;
struct representation {int n_timelines; int timelines; } ;
typedef void* int64_t ;
struct TYPE_6__ {struct TYPE_6__* next; int name; } ;
struct TYPE_5__ {TYPE_2__* properties; int name; } ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int ) ;
 struct timeline* FUNC_2 (int) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int *,int *,struct timeline*) ;
 scalar_t__ FUNC_5 (char*,int *,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_2, struct representation *VAR_3,
                                          xmlNodePtr VAR_4)
{
    xmlAttrPtr VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);

    if (!FUNC_3(VAR_4->name, (const char *)"S")) {
        struct timeline *VAR_7 = FUNC_2(sizeof(struct timeline));
        if (!VAR_7) {
            return FUNC_0(VAR_1);
        }
        VAR_5 = VAR_4->properties;
        while (VAR_5) {
            VAR_6 = FUNC_7(VAR_4, VAR_5->name);

            if (!VAR_6) {
                FUNC_1(VAR_2, VAR_0, "parse_manifest_segmenttimeline attr->name = %s val is NULL\n", VAR_5->name);
                continue;
            }

            if (!FUNC_3(VAR_5->name, (const char *)"t")) {
                VAR_7->starttime = (int64_t)FUNC_5(VAR_6, ((void*)0), 10);
            } else if (!FUNC_3(VAR_5->name, (const char *)"r")) {
                VAR_7->repeat =(int64_t) FUNC_5(VAR_6, ((void*)0), 10);
            } else if (!FUNC_3(VAR_5->name, (const char *)"d")) {
                VAR_7->duration = (int64_t)FUNC_5(VAR_6, ((void*)0), 10);
            }
            VAR_5 = VAR_5->next;
            FUNC_6(VAR_6);
        }
        FUNC_4(&VAR_3->timelines, &VAR_3->n_timelines, VAR_7);
    }

    return 0;
}
