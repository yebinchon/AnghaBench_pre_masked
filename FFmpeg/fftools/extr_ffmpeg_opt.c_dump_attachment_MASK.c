
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* value; } ;
struct TYPE_7__ {TYPE_1__* codecpar; int index; int metadata; } ;
struct TYPE_6__ {int extradata_size; int extradata; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 TYPE_3__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,int ,char*,char const*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char const*,int ,int *,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_8(AVStream *VAR_5, const char *VAR_6)
{
    int VAR_7;
    AVIOContext *VAR_8 = ((void*)0);
    AVDictionaryEntry *VAR_9;

    if (!VAR_5->codecpar->extradata_size) {
        FUNC_2(((void*)0), VAR_2, "No extradata to dump in stream #%d:%d.\n",
               VAR_4 - 1, VAR_5->index);
        return;
    }
    if (!*VAR_6 && (VAR_9 = FUNC_1(VAR_5->metadata, "filename", ((void*)0), 0)))
        VAR_6 = VAR_9->value;
    if (!*VAR_6) {
        FUNC_2(((void*)0), VAR_1, "No filename specified and no 'filename' tag"
               "in stream #%d:%d.\n", VAR_4 - 1, VAR_5->index);
        FUNC_7(1);
    }

    FUNC_0(VAR_6);

    if ((VAR_7 = FUNC_5(&VAR_8, VAR_6, VAR_0, &VAR_3, ((void*)0))) < 0) {
        FUNC_2(((void*)0), VAR_1, "Could not open file %s for writing.\n",
               VAR_6);
        FUNC_7(1);
    }

    FUNC_6(VAR_8, VAR_5->codecpar->extradata, VAR_5->codecpar->extradata_size);
    FUNC_4(VAR_8);
    FUNC_3(VAR_8);
}
