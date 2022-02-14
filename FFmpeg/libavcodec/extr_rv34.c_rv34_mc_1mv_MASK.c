
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int put_chroma_pixels_tab; int put_pixels_tab; } ;
struct TYPE_6__ {TYPE_1__ rdsp; int rv30; } ;
typedef TYPE_2__ RV34DecContext ;


 int FUNC_0 (TYPE_2__*,int const,int const,int const,int,int const,int const,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(RV34DecContext *VAR_0, const int VAR_1,
                        const int VAR_2, const int VAR_3, int VAR_4,
                        const int VAR_5, const int VAR_6, int VAR_7)
{
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_0->rv30, 0,
            VAR_0->rdsp.put_pixels_tab,
            VAR_0->rdsp.put_chroma_pixels_tab);
}
