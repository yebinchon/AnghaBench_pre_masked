
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int avg_chroma_pixels_tab; int put_chroma_pixels_tab; int avg_pixels_tab; int put_pixels_tab; } ;
struct TYPE_7__ {int b8_stride; } ;
struct TYPE_9__ {int weight1; TYPE_2__ rdsp; int rv30; TYPE_1__ s; } ;
typedef TYPE_3__ RV34DecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int,int,int,int,int,int,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(RV34DecContext *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = !VAR_1->rv30 && VAR_1->weight1 != 8192;

    for(VAR_3 = 0; VAR_3 < 2; VAR_3++)
        for(VAR_2 = 0; VAR_2 < 2; VAR_2++){
             FUNC_0(VAR_1, VAR_0, VAR_2*8, VAR_3*8, VAR_2+VAR_3*VAR_1->s.b8_stride, 1, 1, 0, VAR_1->rv30,
                     VAR_4,
                     VAR_1->rdsp.put_pixels_tab,
                     VAR_1->rdsp.put_chroma_pixels_tab);
             FUNC_0(VAR_1, VAR_0, VAR_2*8, VAR_3*8, VAR_2+VAR_3*VAR_1->s.b8_stride, 1, 1, 1, VAR_1->rv30,
                     VAR_4,
                     VAR_4 ? VAR_1->rdsp.put_pixels_tab : VAR_1->rdsp.avg_pixels_tab,
                     VAR_4 ? VAR_1->rdsp.put_chroma_pixels_tab : VAR_1->rdsp.avg_chroma_pixels_tab);
        }
    if(VAR_4)
        FUNC_1(VAR_1);
}
