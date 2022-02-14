
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_7__ {int nb_components; int flags; int log2_chroma_w; int log2_chroma_h; TYPE_1__* comp; int name; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(WriterContext *VAR_16)
{
    const AVPixFmtDescriptor *VAR_17 = ((void*)0);
    int VAR_18, VAR_19;

    FUNC_7(VAR_16, VAR_10);
    while ((VAR_17 = FUNC_2(VAR_17))) {
        FUNC_7(VAR_16, VAR_9);
        FUNC_4("name", VAR_17->name);
        FUNC_3("nb_components", VAR_17->nb_components);
        if ((VAR_17->nb_components >= 3) && !(VAR_17->flags & VAR_1)) {
            FUNC_3 ("log2_chroma_w", VAR_17->log2_chroma_w);
            FUNC_3 ("log2_chroma_h", VAR_17->log2_chroma_h);
        } else {
            FUNC_5("log2_chroma_w", "N/A");
            FUNC_5("log2_chroma_h", "N/A");
        }
        VAR_19 = FUNC_1(VAR_17);
        if (VAR_19) FUNC_3 ("bits_per_pixel", VAR_19);
        else FUNC_5("bits_per_pixel", "N/A");
        if (VAR_15) {
            FUNC_7(VAR_16, VAR_13);
            FUNC_0(VAR_2, "big_endian");
            FUNC_0(VAR_5, "palette");
            FUNC_0(VAR_3, "bitstream");
            FUNC_0(VAR_4, "hwaccel");
            FUNC_0(VAR_6, "planar");
            FUNC_0(VAR_8, "rgb");



            FUNC_0(VAR_0, "alpha");
            FUNC_6(VAR_16);
        }
        if (VAR_14 && (VAR_17->nb_components > 0)) {
            FUNC_7(VAR_16, VAR_12);
            for (VAR_18 = 0; VAR_18 < VAR_17->nb_components; VAR_18++) {
                FUNC_7(VAR_16, VAR_11);
                FUNC_3("index", VAR_18 + 1);
                FUNC_3("bit_depth", VAR_17->comp[VAR_18].depth);
                FUNC_6(VAR_16);
            }
            FUNC_6(VAR_16);
        }
        FUNC_6(VAR_16);
    }
    FUNC_6(VAR_16);
}
