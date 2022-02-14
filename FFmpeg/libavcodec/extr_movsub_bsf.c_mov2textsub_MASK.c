
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int data; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVBSFContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVBSFContext *VAR_1, AVPacket *VAR_2)
{
    int VAR_3 = 0;

    VAR_3 = FUNC_3(VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;

    if (VAR_2->size < 2) {
       FUNC_2(VAR_2);
       return VAR_0;
    }

    VAR_2->size = FUNC_1(VAR_2->size - 2, FUNC_0(VAR_2->data));
    VAR_2->data += 2;

    return 0;
}
