
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* key; char* value; } ;
struct TYPE_8__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__**,char*,int *,int *) ;
 int FUNC_5 (char*,char*,...) ;

int FUNC_6 (int VAR_2, char **VAR_3)
{
    AVFormatContext *VAR_4 = ((void*)0);
    AVDictionaryEntry *VAR_5 = ((void*)0);
    int VAR_6;

    if (VAR_2 != 2) {
        FUNC_5("usage: %s <input_file>\n"
               "example program to demonstrate the use of the libavformat metadata API.\n"
               "\n", VAR_3[0]);
        return 1;
    }

    if ((VAR_6 = FUNC_4(&VAR_4, VAR_3[1], ((void*)0), ((void*)0))))
        return VAR_6;

    if ((VAR_6 = FUNC_3(VAR_4, ((void*)0))) < 0) {
        FUNC_1(((void*)0), VAR_1, "Cannot find stream information\n");
        return VAR_6;
    }

    while ((VAR_5 = FUNC_0(VAR_4->metadata, "", VAR_5, VAR_0)))
        FUNC_5("%s=%s\n", VAR_5->key, VAR_5->value);

    FUNC_2(&VAR_4);
    return 0;
}
