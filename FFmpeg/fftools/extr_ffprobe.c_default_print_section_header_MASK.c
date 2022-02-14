
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct section {int flags; int name; int element_name; } ;
typedef int buf ;
struct TYPE_6__ {size_t level; TYPE_4__* section_pbuf; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_8__ {int str; } ;
struct TYPE_7__ {int* nested_section; scalar_t__ noprint_wrappers; } ;
typedef TYPE_2__ DefaultContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char*,int ,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,int,int ) ;

__attribute__((used)) static void FUNC_5(WriterContext *VAR_2)
{
    DefaultContext *VAR_3 = VAR_2->priv;
    char VAR_4[32];
    const struct section *VAR_5 = VAR_2->section[VAR_2->level];
    const struct section *VAR_6 = VAR_2->level ?
        VAR_2->section[VAR_2->level-1] : ((void*)0);

    FUNC_0(&VAR_2->section_pbuf[VAR_2->level]);
    if (VAR_6 &&
        !(VAR_6->flags & (VAR_1|VAR_0))) {
        VAR_3->nested_section[VAR_2->level] = 1;
        FUNC_1(&VAR_2->section_pbuf[VAR_2->level], "%s%s:",
                   VAR_2->section_pbuf[VAR_2->level-1].str,
                   FUNC_4(VAR_4, sizeof(VAR_4),
                                 FUNC_2(VAR_5->element_name, VAR_5->name)));
    }

    if (VAR_3->noprint_wrappers || VAR_3->nested_section[VAR_2->level])
        return;

    if (!(VAR_5->flags & (VAR_1|VAR_0)))
        FUNC_3("[%s]\n", FUNC_4(VAR_4, sizeof(VAR_4), VAR_5->name));
}
