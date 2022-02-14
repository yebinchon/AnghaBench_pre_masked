
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cl_platform_id ;
struct TYPE_6__ {int key; int name; } ;
struct TYPE_5__ {int key; int value; } ;
typedef int AVHWDeviceContext ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,int ,char const*) ;
 int FUNC_4 (char*,int ) ;
 char* FUNC_5 (int ,int ) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_6(AVHWDeviceContext *VAR_4,
                                  cl_platform_id VAR_5,
                                  const char *VAR_6,
                                  void *VAR_7)
{
    AVDictionary *VAR_8 = VAR_7;
    const AVDictionaryEntry *VAR_9;
    char *VAR_10;
    int VAR_11, VAR_12 = 0;

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
        VAR_9 = FUNC_1(VAR_8, VAR_3[VAR_11].key,
                            ((void*)0), 0);
        if (!VAR_9)
            continue;

        VAR_10 = FUNC_5(VAR_5,
                                         VAR_3[VAR_11].name);
        if (!VAR_10) {
            FUNC_3(VAR_4, VAR_2, "Failed to query %s "
                   "of platform \"%s\".\n",
                   VAR_3[VAR_11].key, VAR_6);
            return VAR_0;
        }
        if (!FUNC_4(VAR_10, VAR_9->value)) {
            FUNC_3(VAR_4, VAR_1, "%s does not match (\"%s\").\n",
                   VAR_9->key, VAR_10);
            VAR_12 = 1;
        }
        FUNC_2(VAR_10);
    }

    return VAR_12;
}
