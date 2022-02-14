
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int * buf_end; } ;
struct TYPE_5__ {int pb2; int tex_pb; TYPE_2__ pb; } ;
typedef TYPE_1__ MpegEncContext ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;

void FUNC_3(MpegEncContext *VAR_0)
{
    uint8_t *VAR_1 = FUNC_1(&VAR_0->pb);
    uint8_t *VAR_2 = VAR_0->pb.buf_end;
    int VAR_3 = VAR_2 - VAR_1;
    int VAR_4 = (((intptr_t)VAR_1 + VAR_3 / 3) & (~3)) - (intptr_t)VAR_1;
    int VAR_5 = (VAR_3 - 2 * VAR_4) & (~3);

    FUNC_2(&VAR_0->pb, VAR_4);
    FUNC_0(&VAR_0->tex_pb, VAR_1 + VAR_4, VAR_5);
    FUNC_0(&VAR_0->pb2, VAR_1 + VAR_4 + VAR_5, VAR_4);
}
