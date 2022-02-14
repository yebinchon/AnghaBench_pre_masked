
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ frm2_size; scalar_t__ frm1_size; scalar_t__ frm0_size; int rle_buf; int stored_frame; int frm2; int frm1; int frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(SANMVideoContext *VAR_0)
{
    FUNC_0(&VAR_0->frm0);
    FUNC_0(&VAR_0->frm1);
    FUNC_0(&VAR_0->frm2);
    FUNC_0(&VAR_0->stored_frame);
    FUNC_0(&VAR_0->rle_buf);
    VAR_0->frm0_size =
    VAR_0->frm1_size =
    VAR_0->frm2_size = 0;
    FUNC_1(VAR_0, 0, 0);
}
