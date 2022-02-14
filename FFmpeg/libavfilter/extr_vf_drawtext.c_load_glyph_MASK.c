
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct AVTreeNode {int advance; struct AVTreeNode* glyph; int bbox; int bitmap_top; int bitmap_left; int bitmap; int border_bitmap; struct AVTreeNode* border_glyph; int fontsize; int code; } ;
struct TYPE_8__ {int x; } ;
struct TYPE_13__ {TYPE_1__ advance; } ;
struct TYPE_12__ {TYPE_7__* glyph; } ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int glyphs; TYPE_6__* face; int stroker; scalar_t__ borderw; int fontsize; int ft_load_flags; } ;
struct TYPE_9__ {int top; int left; int bitmap; } ;
typedef struct AVTreeNode Glyph ;
typedef TYPE_2__* FT_BitmapGlyph ;
typedef TYPE_3__ DrawTextContext ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_7__*,struct AVTreeNode**) ;
 int FUNC_2 (struct AVTreeNode*,int ,int *) ;
 scalar_t__ FUNC_3 (struct AVTreeNode**,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct AVTreeNode**,int ,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct AVTreeNode**) ;
 struct AVTreeNode* FUNC_7 (int) ;
 int FUNC_8 (int *,struct AVTreeNode*,int ,struct AVTreeNode**) ;
 struct AVTreeNode* FUNC_9 () ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_6, Glyph **VAR_7, uint32_t VAR_8)
{
    DrawTextContext *VAR_9 = VAR_6->priv;
    FT_BitmapGlyph VAR_10;
    Glyph *VAR_11;
    struct AVTreeNode *VAR_12 = ((void*)0);
    int VAR_13;


    if (FUNC_5(VAR_9->face, VAR_8, VAR_9->ft_load_flags))
        return FUNC_0(VAR_1);

    VAR_11 = FUNC_7(sizeof(*VAR_11));
    if (!VAR_11) {
        VAR_13 = FUNC_0(VAR_2);
        goto error;
    }
    VAR_11->code = VAR_8;
    VAR_11->fontsize = VAR_9->fontsize;

    if (FUNC_1(VAR_9->face->glyph, &VAR_11->glyph)) {
        VAR_13 = FUNC_0(VAR_1);
        goto error;
    }
    if (VAR_9->borderw) {
        VAR_11->border_glyph = VAR_11->glyph;
        if (FUNC_3(&VAR_11->border_glyph, VAR_9->stroker, 0, 0) ||
            FUNC_4(&VAR_11->border_glyph, VAR_3, 0, 1)) {
            VAR_13 = VAR_0;
            goto error;
        }
        VAR_10 = (FT_BitmapGlyph) VAR_11->border_glyph;
        VAR_11->border_bitmap = VAR_10->bitmap;
    }
    if (FUNC_4(&VAR_11->glyph, VAR_3, 0, 1)) {
        VAR_13 = VAR_0;
        goto error;
    }
    VAR_10 = (FT_BitmapGlyph) VAR_11->glyph;

    VAR_11->bitmap = VAR_10->bitmap;
    VAR_11->bitmap_left = VAR_10->left;
    VAR_11->bitmap_top = VAR_10->top;
    VAR_11->advance = VAR_9->face->glyph->advance.x >> 6;


    FUNC_2(VAR_11->glyph, VAR_4, &VAR_11->bbox);


    if (!(VAR_12 = FUNC_9())) {
        VAR_13 = FUNC_0(VAR_2);
        goto error;
    }
    FUNC_8(&VAR_9->glyphs, VAR_11, VAR_5, &VAR_12);

    if (VAR_7)
        *VAR_7 = VAR_11;
    return 0;

error:
    if (VAR_11)
        FUNC_6(&VAR_11->glyph);

    FUNC_6(&VAR_11);
    FUNC_6(&VAR_12);
    return VAR_13;
}
