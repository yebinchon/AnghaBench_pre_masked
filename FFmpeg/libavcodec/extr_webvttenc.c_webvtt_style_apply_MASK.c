
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ass_ctx; } ;
typedef TYPE_1__ WebVTTContext ;
struct TYPE_8__ {scalar_t__ bold; scalar_t__ italic; scalar_t__ underline; } ;
typedef TYPE_2__ ASSStyle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;

__attribute__((used)) static void FUNC_3(WebVTTContext *VAR_3, const char *VAR_4)
{
    ASSStyle *VAR_5 = FUNC_0(VAR_3->ass_ctx, VAR_4);
    if (VAR_5) {
        if (VAR_5->bold != VAR_0) {
            FUNC_1(VAR_3, "<b>");
            FUNC_2(VAR_3, 'b');
        }
        if (VAR_5->italic != VAR_1) {
            FUNC_1(VAR_3, "<i>");
            FUNC_2(VAR_3, 'i');
        }
        if (VAR_5->underline != VAR_2) {
            FUNC_1(VAR_3, "<u>");
            FUNC_2(VAR_3, 'u');
        }
    }
}
