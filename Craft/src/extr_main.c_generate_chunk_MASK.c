
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int faces; int maxy; int miny; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_7__ {int buffer; int faces; int maxy; int miny; } ;
typedef TYPE_2__ Chunk ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Chunk *VAR_0, WorkerItem *VAR_1) {
    VAR_0->miny = VAR_1->miny;
    VAR_0->maxy = VAR_1->maxy;
    VAR_0->faces = VAR_1->faces;
    FUNC_0(VAR_0->buffer);
    VAR_0->buffer = FUNC_1(10, VAR_1->faces, VAR_1->data);
    FUNC_2(VAR_0);
}
