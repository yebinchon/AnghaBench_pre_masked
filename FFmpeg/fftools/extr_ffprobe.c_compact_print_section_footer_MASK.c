
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t level; TYPE_1__** section; TYPE_3__* priv; } ;
typedef TYPE_2__ WriterContext ;
struct TYPE_7__ {scalar_t__* terminate_line; int * nested_section; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_3__ CompactContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(WriterContext *VAR_2)
{
    CompactContext *VAR_3 = VAR_2->priv;

    if (!VAR_3->nested_section[VAR_2->level] &&
        VAR_3->terminate_line[VAR_2->level] &&
        !(VAR_2->section[VAR_2->level]->flags & (VAR_1|VAR_0)))
        FUNC_0("\n");
}
