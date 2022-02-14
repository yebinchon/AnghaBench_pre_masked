
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* tag; struct TYPE_7__* next; TYPE_1__* data; } ;
struct TYPE_6__ {int meta; void* end; void* start; int element_id; } ;
typedef TYPE_1__ ID3v2ExtraMetaCHAP ;
typedef TYPE_2__ ID3v2ExtraMeta ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (TYPE_2__**) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,int *,int,int *,char*) ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_2, AVIOContext *VAR_3, int VAR_4, const char *VAR_5, ID3v2ExtraMeta **VAR_6, int VAR_7)
{
    int VAR_8;
    char VAR_9[5];
    ID3v2ExtraMeta *VAR_10 = ((void*)0);
    ID3v2ExtraMetaCHAP *VAR_11 = ((void*)0);

    VAR_10 = FUNC_1(sizeof(*VAR_10));
    VAR_11 = FUNC_1(sizeof(*VAR_11));

    if (!VAR_10 || !VAR_11)
        goto fail;

    if (FUNC_5(VAR_2, VAR_3, 0, &VAR_11->element_id, &VAR_4) < 0)
        goto fail;

    if (VAR_4 < 16)
        goto fail;

    VAR_11->start = FUNC_2(VAR_3);
    VAR_11->end = FUNC_2(VAR_3);
    FUNC_4(VAR_3, 8);

    VAR_4 -= 16;
    while (VAR_4 > 10) {
        if (FUNC_3(VAR_3, VAR_9, 4) < 4)
            goto fail;
        VAR_9[4] = 0;
        VAR_8 = FUNC_2(VAR_3);
        FUNC_4(VAR_3, 2);
        VAR_4 -= 10;
        if (VAR_8 < 0 || VAR_8 > VAR_4)
            goto fail;
        if (VAR_9[0] == 'T')
            FUNC_8(VAR_2, VAR_3, VAR_8, &VAR_11->meta, VAR_9);
        else
            FUNC_4(VAR_3, VAR_8);
        VAR_4 -= VAR_8;
    }

    FUNC_6(&VAR_11->meta, ((void*)0), VAR_0);
    FUNC_6(&VAR_11->meta, ((void*)0), VAR_1);

    VAR_10->tag = "CHAP";
    VAR_10->data = VAR_11;
    VAR_10->next = *VAR_6;
    *VAR_6 = VAR_10;

    return;

fail:
    if (VAR_11)
        FUNC_7(VAR_11);
    FUNC_0(&VAR_10);
}
