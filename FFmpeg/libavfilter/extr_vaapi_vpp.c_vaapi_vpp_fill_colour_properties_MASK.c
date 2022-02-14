
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VAProcColorStandardType ;
struct TYPE_6__ {int va_color_range; int va_chroma_sample_location; int va_color_standard; int chroma_sample_location; int color_trc; int color_primaries; int colorspace; int color_range; } ;
typedef TYPE_1__ VAAPIColourProperties ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_9(AVFilterContext *VAR_1,
                                             VAAPIColourProperties *VAR_2,
                                             VAProcColorStandardType *VAR_3,
                                             int VAR_4)
{
    FUNC_8(VAR_2, VAR_3, VAR_4);
    FUNC_6(VAR_2);
    FUNC_7(VAR_2);

    FUNC_5(VAR_1, VAR_0, "Mapped colour properties %s %s/%s/%s %s "
           "to VA standard %d chroma siting %#x range %#x.\n",
           FUNC_2(VAR_2->color_range),
           FUNC_3(VAR_2->colorspace),
           FUNC_1(VAR_2->color_primaries),
           FUNC_4(VAR_2->color_trc),
           FUNC_0(VAR_2->chroma_sample_location),
           VAR_2->va_color_standard,
           VAR_2->va_chroma_sample_location, VAR_2->va_color_range);
}
