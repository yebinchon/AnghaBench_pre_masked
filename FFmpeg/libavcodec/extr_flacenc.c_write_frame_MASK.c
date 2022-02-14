
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; int data; } ;
struct TYPE_8__ {int pb; } ;
typedef TYPE_1__ FlacEncodeContext ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(FlacEncodeContext *VAR_0, AVPacket *VAR_1)
{
    FUNC_0(&VAR_0->pb, VAR_1->data, VAR_1->size);
    FUNC_3(VAR_0);
    FUNC_4(VAR_0);
    FUNC_2(VAR_0);
    return FUNC_1(&VAR_0->pb) >> 3;
}
