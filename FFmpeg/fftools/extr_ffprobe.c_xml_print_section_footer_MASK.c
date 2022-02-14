
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section {int flags; char* name; } ;
struct TYPE_4__ {int indent_level; scalar_t__ within_tag; scalar_t__ fully_qualified; } ;
typedef TYPE_1__ XMLContext ;
struct TYPE_5__ {size_t level; struct section** section; TYPE_1__* priv; } ;
typedef TYPE_2__ WriterContext ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(WriterContext *VAR_1)
{
    XMLContext *VAR_2 = VAR_1->priv;
    const struct section *VAR_3 = VAR_1->section[VAR_1->level];

    if (VAR_1->level == 0) {
        FUNC_1("</%sffprobe>\n", VAR_2->fully_qualified ? "ffprobe:" : "");
    } else if (VAR_2->within_tag) {
        VAR_2->within_tag = 0;
        FUNC_1("/>\n");
        VAR_2->indent_level--;
    } else if (VAR_3->flags & VAR_0) {
        VAR_2->indent_level--;
    } else {
        FUNC_0(); FUNC_1("</%s>\n", VAR_3->name);
        VAR_2->indent_level--;
    }
}
