
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int opaque; int (* free ) (int ,int ) ;int refcount; struct TYPE_6__* buffer; } ;
typedef TYPE_1__ AVBufferRef ;
typedef TYPE_1__ AVBuffer ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(AVBufferRef **VAR_1, AVBufferRef **VAR_2)
{
    AVBuffer *VAR_3;

    VAR_3 = (*VAR_1)->buffer;

    if (VAR_2) {
        **VAR_1 = **VAR_2;
        FUNC_1(VAR_2);
    } else
        FUNC_1(VAR_1);

    if (FUNC_0(&VAR_3->refcount, -1, VAR_0) == 1) {
        VAR_3->free(VAR_3->opaque, VAR_3->data);
        FUNC_1(&VAR_3);
    }
}
