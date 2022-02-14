
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct build_version_command {int platform; int has_versionmin; int minos; int version; } ;
typedef struct build_version_command KXLDversionmin ;






 int VAR_0 ;
 int FUNC_0 (struct build_version_command*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_1(KXLDversionmin *VAR_5, struct build_version_command *VAR_6)
{
    FUNC_0(VAR_5);
    FUNC_0(VAR_6);
    switch (VAR_6->platform) {
    case 130:
        VAR_5->platform = VAR_2;
        break;
    case 131:
        VAR_5->platform = VAR_4;
        break;
    case 129:
        VAR_5->platform = VAR_1;
        break;
    case 128:
        VAR_5->platform = VAR_3;
        break;
    default:
        return;
    }
    VAR_5->version = VAR_6->minos;
    VAR_5->has_versionmin = VAR_0;
}
