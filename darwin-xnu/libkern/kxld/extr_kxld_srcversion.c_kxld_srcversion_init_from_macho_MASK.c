
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_version_command {int has_srcversion; int version; } ;
typedef struct source_version_command KXLDsrcversion ;


 int VAR_0 ;
 int FUNC_0 (struct source_version_command*) ;

void
FUNC_1(KXLDsrcversion *VAR_1, struct source_version_command *VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    VAR_1->version = VAR_2->version;
    VAR_1->has_srcversion = VAR_0;
}
