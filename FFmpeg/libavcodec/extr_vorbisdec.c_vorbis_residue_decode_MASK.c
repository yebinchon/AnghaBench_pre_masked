
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
typedef TYPE_1__ vorbis_residue ;
struct TYPE_8__ {int avctx; } ;
typedef TYPE_2__ vorbis_context ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,unsigned int,int *,float*,unsigned int,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_2(vorbis_context *VAR_2, vorbis_residue *VAR_3,
                                        unsigned VAR_4,
                                        uint8_t *VAR_5,
                                        float *VAR_6, unsigned VAR_7,
                                        unsigned VAR_8)
{
    if (VAR_3->type == 2)
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 2);
    else if (VAR_3->type == 1)
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 1);
    else if (VAR_3->type == 0)
        return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, 0);
    else {
        FUNC_0(VAR_2->avctx, VAR_1, " Invalid residue type while residue decode?! \n");
        return VAR_0;
    }
}
