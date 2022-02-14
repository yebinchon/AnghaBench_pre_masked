
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buffer; } ;
struct representation {TYPE_2__* ctx; TYPE_1__ pb; } ;
struct TYPE_4__ {int * pb; } ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(struct representation *VAR_0)
{

    FUNC_0(&VAR_0->pb.buffer);
    FUNC_2(&VAR_0->pb, 0x00, sizeof(AVIOContext));
    VAR_0->ctx->pb = ((void*)0);
    FUNC_1(&VAR_0->ctx);
    VAR_0->ctx = ((void*)0);
}
