
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int put_chroma_pixels_tab; int put_pixels_tab; int avg_chroma_pixels_tab; int avg_pixels_tab; } ;
struct TYPE_7__ {int weight1; TYPE_1__ rdsp; int rv30; } ;
typedef TYPE_2__ RV34DecContext ;


 int const VAR_0 ;
 int FUNC_0 (TYPE_2__*,int const,int ,int ,int ,int,int,int,int ,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(RV34DecContext *VAR_1, const int VAR_2)
{
    int VAR_3 = !VAR_1->rv30 && VAR_2 != VAR_0 && VAR_1->weight1 != 8192;

    FUNC_0(VAR_1, VAR_2, 0, 0, 0, 2, 2, 0, VAR_1->rv30, VAR_3,
            VAR_1->rdsp.put_pixels_tab,
            VAR_1->rdsp.put_chroma_pixels_tab);
    if(!VAR_3){
        FUNC_0(VAR_1, VAR_2, 0, 0, 0, 2, 2, 1, VAR_1->rv30, 0,
                VAR_1->rdsp.avg_pixels_tab,
                VAR_1->rdsp.avg_chroma_pixels_tab);
    }else{
        FUNC_0(VAR_1, VAR_2, 0, 0, 0, 2, 2, 1, VAR_1->rv30, 1,
                VAR_1->rdsp.put_pixels_tab,
                VAR_1->rdsp.put_chroma_pixels_tab);
        FUNC_1(VAR_1);
    }
}
