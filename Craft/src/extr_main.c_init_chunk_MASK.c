
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p; int q; int lights; int map; int signs; scalar_t__ sign_buffer; scalar_t__ buffer; scalar_t__ sign_faces; scalar_t__ faces; } ;
typedef int SignList ;
typedef int Map ;
typedef TYPE_1__ Chunk ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,int,int,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(Chunk *VAR_1, int VAR_2, int VAR_3) {
    VAR_1->p = VAR_2;
    VAR_1->q = VAR_3;
    VAR_1->faces = 0;
    VAR_1->sign_faces = 0;
    VAR_1->buffer = 0;
    VAR_1->sign_buffer = 0;
    FUNC_1(VAR_1);
    SignList *VAR_4 = &VAR_1->signs;
    FUNC_3(VAR_4, 16);
    FUNC_0(VAR_4, VAR_2, VAR_3);
    Map *VAR_5 = &VAR_1->map;
    Map *VAR_6 = &VAR_1->lights;
    int VAR_7 = VAR_2 * VAR_0 - 1;
    int VAR_8 = 0;
    int VAR_9 = VAR_3 * VAR_0 - 1;
    FUNC_2(VAR_5, VAR_7, VAR_8, VAR_9, 0x7fff);
    FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, 0xf);
}
