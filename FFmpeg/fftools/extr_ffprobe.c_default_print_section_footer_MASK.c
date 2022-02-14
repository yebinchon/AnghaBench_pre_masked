
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section {int flags; int name; } ;
typedef int buf ;
struct TYPE_4__ {size_t level; struct section** section; TYPE_2__* priv; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_5__ {scalar_t__* nested_section; scalar_t__ noprint_wrappers; } ;
typedef TYPE_2__ DefaultContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,int,int ) ;

__attribute__((used)) static void FUNC_2(WriterContext *VAR_2)
{
    DefaultContext *VAR_3 = VAR_2->priv;
    const struct section *VAR_4 = VAR_2->section[VAR_2->level];
    char VAR_5[32];

    if (VAR_3->noprint_wrappers || VAR_3->nested_section[VAR_2->level])
        return;

    if (!(VAR_4->flags & (VAR_1|VAR_0)))
        FUNC_0("[/%s]\n", FUNC_1(VAR_5, sizeof(VAR_5), VAR_4->name));
}
