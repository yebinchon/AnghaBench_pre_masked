
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int metadata; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int * f; } ;
typedef int ModPlugFile ;
typedef TYPE_1__ ModPlugContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int VAR_2 ;
 unsigned int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *) ;
 int VAR_3 ;
 char* FUNC_8 (char*,unsigned int,char*,unsigned int,char*) ;
 int FUNC_9 (int *,char*,char const*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_6)
{
    ModPlugContext *VAR_7 = VAR_6->priv_data;
    ModPlugFile *VAR_8 = VAR_7->f;
    char *VAR_9;
    const char *VAR_10 = FUNC_3(VAR_8);
    const char *VAR_11 = FUNC_2(VAR_8);

    unsigned VAR_12 = FUNC_5(VAR_8);
    unsigned VAR_13 = FUNC_7(VAR_8);
    unsigned VAR_14 = FUNC_6(VAR_8);
    unsigned VAR_15 = FUNC_4(VAR_8);

    if (VAR_10 && *VAR_10) FUNC_9(&VAR_6->metadata, "name", VAR_10, 0);
    if (VAR_11 && *VAR_11) FUNC_9(&VAR_6->metadata, "message", VAR_11, 0);

    VAR_9 = FUNC_8("%u pattern%s, %u channel%s",
                        VAR_14, VAR_14 > 1 ? "s" : "",
                        VAR_15, VAR_15 > 1 ? "s" : "");
    if (!VAR_9)
        return FUNC_1(VAR_1);
    FUNC_9(&VAR_6->metadata, "extra info", VAR_9, VAR_0);

    FUNC_0(VAR_4, VAR_2);
    FUNC_0(VAR_5, VAR_3);

    return 0;
}
