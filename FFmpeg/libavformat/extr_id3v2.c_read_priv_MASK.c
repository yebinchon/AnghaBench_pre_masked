
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* tag; struct TYPE_7__* next; TYPE_1__* data; } ;
struct TYPE_6__ {int datasize; int data; int owner; } ;
typedef TYPE_1__ ID3v2ExtraMetaPRIV ;
typedef TYPE_2__ ID3v2ExtraMeta ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int *,int*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(AVFormatContext *VAR_1, AVIOContext *VAR_2, int VAR_3,
                      const char *VAR_4, ID3v2ExtraMeta **VAR_5, int VAR_6)
{
    ID3v2ExtraMeta *VAR_7;
    ID3v2ExtraMetaPRIV *VAR_8;

    VAR_7 = FUNC_2(sizeof(*VAR_7));
    VAR_8 = FUNC_2(sizeof(*VAR_8));

    if (!VAR_7 || !VAR_8)
        goto fail;

    if (FUNC_4(VAR_1, VAR_2, VAR_0, &VAR_8->owner, &VAR_3) < 0)
        goto fail;

    VAR_8->data = FUNC_1(VAR_3);
    if (!VAR_8->data)
        goto fail;

    VAR_8->datasize = VAR_3;

    if (FUNC_3(VAR_2, VAR_8->data, VAR_8->datasize) != VAR_8->datasize)
        goto fail;

    VAR_7->tag = "PRIV";
    VAR_7->data = VAR_8;
    VAR_7->next = *VAR_5;
    *VAR_5 = VAR_7;

    return;

fail:
    if (VAR_8)
        FUNC_5(VAR_8);
    FUNC_0(&VAR_7);
}
