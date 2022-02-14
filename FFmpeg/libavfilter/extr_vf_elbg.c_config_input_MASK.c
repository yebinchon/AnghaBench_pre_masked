
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int w; int h; int format; TYPE_3__* dst; } ;
struct TYPE_5__ {int codeword_length; int codebook_length; int rgba_map; void* codebook; void* codeword_closest_codebook_idxs; void* codeword; int pix_desc; } ;
typedef TYPE_1__ ELBGContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    ELBGContext *VAR_4 = VAR_3->priv;

    VAR_4->pix_desc = FUNC_1(VAR_2->format);
    VAR_4->codeword_length = VAR_2->w * VAR_2->h;
    VAR_4->codeword = FUNC_2(VAR_4->codeword, VAR_4->codeword_length,
                                  VAR_1 * sizeof(*VAR_4->codeword));
    if (!VAR_4->codeword)
        return FUNC_0(VAR_0);

    VAR_4->codeword_closest_codebook_idxs =
        FUNC_2(VAR_4->codeword_closest_codebook_idxs, VAR_4->codeword_length,
                     sizeof(*VAR_4->codeword_closest_codebook_idxs));
    if (!VAR_4->codeword_closest_codebook_idxs)
        return FUNC_0(VAR_0);

    VAR_4->codebook = FUNC_2(VAR_4->codebook, VAR_4->codebook_length,
                                  VAR_1 * sizeof(*VAR_4->codebook));
    if (!VAR_4->codebook)
        return FUNC_0(VAR_0);

    FUNC_3(VAR_4->rgba_map, VAR_2->format);

    return 0;
}
