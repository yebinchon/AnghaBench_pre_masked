
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int hb_dict_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_1__*,int ,char*,char*,int ,char*,int ,char*,int ,char*,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ,char*,int ) ;

hb_dict_t * FUNC_5()
{
    hb_dict_t * VAR_11;
    json_error_t VAR_12;

    VAR_11 = FUNC_4(&VAR_12, 0,
        "{s:o, s:o, s:o, s{s:o, s:o, s:o}, s:o, s:o, s:o, s:o, s:o}",
        "Name", FUNC_3(VAR_2),
        "Official", FUNC_1(VAR_5),
        "Type", FUNC_3(VAR_6),
        "Version",
            "Major", FUNC_2(VAR_8),
            "Minor", FUNC_2(VAR_9),
            "Point", FUNC_2(VAR_10),
        "VersionString", FUNC_3(VAR_7),
        "RepoHash", FUNC_3(VAR_4),
        "RepoDate", FUNC_3(VAR_3),
        "System", FUNC_3(VAR_1),
        "Arch", FUNC_3(VAR_0));
    if (VAR_11 == ((void*)0))
    {
        FUNC_0("json pack failure: %s", VAR_12.text);
        return ((void*)0);
    }

    return VAR_11;
}
