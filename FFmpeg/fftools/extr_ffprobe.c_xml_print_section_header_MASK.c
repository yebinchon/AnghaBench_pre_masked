
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct section {int flags; char* name; } ;
struct TYPE_4__ {int within_tag; int indent_level; scalar_t__ fully_qualified; } ;
typedef TYPE_1__ XMLContext ;
struct TYPE_5__ {size_t level; scalar_t__* nb_item; struct section** section; TYPE_1__* priv; } ;
typedef TYPE_2__ WriterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(WriterContext *VAR_3)
{
    XMLContext *VAR_4 = VAR_3->priv;
    const struct section *VAR_5 = VAR_3->section[VAR_3->level];
    const struct section *VAR_6 = VAR_3->level ?
        VAR_3->section[VAR_3->level-1] : ((void*)0);

    if (VAR_3->level == 0) {
        const char *VAR_7 = " xmlns:xsi='http://www.w3.org/2001/XMLSchema-instance' "
            "xmlns:ffprobe='http://www.ffmpeg.org/schema/ffprobe' "
            "xsi:schemaLocation='http://www.ffmpeg.org/schema/ffprobe ffprobe.xsd'";

        FUNC_1("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
        FUNC_1("<%sffprobe%s>\n",
               VAR_4->fully_qualified ? "ffprobe:" : "",
               VAR_4->fully_qualified ? VAR_7 : "");
        return;
    }

    if (VAR_4->within_tag) {
        VAR_4->within_tag = 0;
        FUNC_1(">\n");
    }
    if (VAR_5->flags & VAR_0) {
        VAR_4->indent_level++;
    } else {
        if (VAR_6 && (VAR_6->flags & VAR_2) &&
            VAR_3->level && VAR_3->nb_item[VAR_3->level-1])
            FUNC_1("\n");
        VAR_4->indent_level++;

        if (VAR_5->flags & VAR_1) {
            FUNC_0(); FUNC_1("<%s>\n", VAR_5->name);
        } else {
            FUNC_0(); FUNC_1("<%s ", VAR_5->name);
            VAR_4->within_tag = 1;
        }
    }
}
