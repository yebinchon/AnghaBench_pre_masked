
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int primary_color; int font_name; scalar_t__ font_size; scalar_t__ bold; scalar_t__ italic; scalar_t__ underline; int alignment; } ;
struct TYPE_7__ {int alignment_applied; int ass_ctx; } ;
typedef TYPE_1__ SRTContext ;
typedef TYPE_2__ ASSStyle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(SRTContext *VAR_7, const char *VAR_8)
{
    ASSStyle *VAR_9 = FUNC_0(VAR_7->ass_ctx, VAR_8);
    if (VAR_9) {
        int VAR_10 = VAR_9->primary_color & 0xFFFFFF;
        if (VAR_9->font_name && FUNC_3(VAR_9->font_name, VAR_3) ||
            VAR_9->font_size != VAR_4 ||
            VAR_10 != VAR_2) {
            FUNC_1(VAR_7, "<font");
            if (VAR_9->font_name && FUNC_3(VAR_9->font_name, VAR_3))
                FUNC_1(VAR_7, " face=\"%s\"", VAR_9->font_name);
            if (VAR_9->font_size != VAR_4)
                FUNC_1(VAR_7, " size=\"%d\"", VAR_9->font_size);
            if (VAR_10 != VAR_2)
                FUNC_1(VAR_7, " color=\"#%06x\"",
                          (VAR_10 & 0xFF0000) >> 16 | VAR_10 & 0xFF00 | (VAR_10 & 0xFF) << 16);
            FUNC_1(VAR_7, ">");
            FUNC_2(VAR_7, 'f');
        }
        if (VAR_9->bold != VAR_1) {
            FUNC_1(VAR_7, "<b>");
            FUNC_2(VAR_7, 'b');
        }
        if (VAR_9->italic != VAR_5) {
            FUNC_1(VAR_7, "<i>");
            FUNC_2(VAR_7, 'i');
        }
        if (VAR_9->underline != VAR_6) {
            FUNC_1(VAR_7, "<u>");
            FUNC_2(VAR_7, 'u');
        }
        if (VAR_9->alignment != VAR_0) {
            FUNC_1(VAR_7, "{\\an%d}", VAR_9->alignment);
            VAR_7->alignment_applied = 1;
        }
    }
}
