
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** attachments; int nb_attachments; } ;
typedef TYPE_1__ OptionsContext ;


 int FUNC_0 (char const**,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    OptionsContext *VAR_3 = VAR_0;
    FUNC_0(VAR_3->attachments, VAR_3->nb_attachments);
    VAR_3->attachments[VAR_3->nb_attachments - 1] = VAR_2;
    return 0;
}
