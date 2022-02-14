
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {int* linesize; int ** data; } ;
struct TYPE_17__ {TYPE_3__* glyph; } ;
struct TYPE_16__ {int ctx; } ;
struct TYPE_14__ {int rows; int width; int * buffer; } ;
struct TYPE_13__ {int x; } ;
struct TYPE_15__ {int linearHoriAdvance; int bitmap_top; int bitmap_left; TYPE_2__ bitmap; TYPE_1__ advance; } ;
typedef TYPE_4__ ShowCQTContext ;
typedef int * FT_Library ;
typedef TYPE_5__* FT_Face ;
typedef TYPE_6__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_5__*,char const,int ) ;
 scalar_t__ FUNC_5 (int *,char*,int ,TYPE_5__**) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_8(ShowCQTContext *VAR_3, AVFrame *VAR_4, char *VAR_5)
{
    if (VAR_5)
        FUNC_7(VAR_3->ctx, VAR_0, "freetype is not available, ignoring fontfile option.\n");
    return FUNC_0(VAR_1);

}
