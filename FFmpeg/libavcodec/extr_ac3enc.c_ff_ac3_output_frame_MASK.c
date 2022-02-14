
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_blocks; int (* output_frame_header ) (TYPE_1__*) ;int pb; } ;
typedef TYPE_1__ AC3EncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(AC3EncodeContext *VAR_1, unsigned char *VAR_2)
{
    int VAR_3;

    FUNC_0(&VAR_1->pb, VAR_2, VAR_0);

    VAR_1->output_frame_header(VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_1->num_blocks; VAR_3++)
        FUNC_1(VAR_1, VAR_3);

    FUNC_2(VAR_1);
}
