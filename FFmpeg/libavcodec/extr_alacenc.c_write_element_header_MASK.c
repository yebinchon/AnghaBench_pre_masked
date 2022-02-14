
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AlacRawDataBlockType { ____Placeholder_AlacRawDataBlockType } AlacRawDataBlockType ;
struct TYPE_3__ {scalar_t__ frame_size; int extra_bits; int verbatim; int pbctx; } ;
typedef TYPE_1__ AlacEncodeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(AlacEncodeContext *VAR_1,
                                 enum AlacRawDataBlockType VAR_2,
                                 int VAR_3)
{
    int VAR_4 = 0;

    if (VAR_1->frame_size < VAR_0)
        VAR_4 = 1;

    FUNC_0(&VAR_1->pbctx, 3, VAR_2);
    FUNC_0(&VAR_1->pbctx, 4, VAR_3);
    FUNC_0(&VAR_1->pbctx, 12, 0);
    FUNC_0(&VAR_1->pbctx, 1, VAR_4);
    FUNC_0(&VAR_1->pbctx, 2, VAR_1->extra_bits >> 3);
    FUNC_0(&VAR_1->pbctx, 1, VAR_1->verbatim);
    if (VAR_4)
        FUNC_1(&VAR_1->pbctx, VAR_1->frame_size);
}
