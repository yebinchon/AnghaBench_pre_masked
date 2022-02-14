
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; TYPE_2__* data; } ;
struct TYPE_7__ {int sign_faces; int sign_buffer; TYPE_1__ signs; } ;
struct TYPE_6__ {int text; int face; int z; int y; int x; } ;
typedef TYPE_1__ SignList ;
typedef TYPE_2__ Sign ;
typedef int GLfloat ;
typedef TYPE_3__ Chunk ;


 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int *) ;
 int * FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(Chunk *VAR_0) {
    SignList *VAR_1 = &VAR_0->signs;


    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
        Sign *VAR_4 = VAR_1->data + VAR_3;
        VAR_2 += FUNC_4(VAR_4->text);
    }


    GLfloat *VAR_5 = FUNC_3(5, VAR_2);
    int VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_1->size; VAR_7++) {
        Sign *VAR_8 = VAR_1->data + VAR_7;
        VAR_6 += FUNC_0(
            VAR_5 + VAR_6 * 30, VAR_8->x, VAR_8->y, VAR_8->z, VAR_8->face, VAR_8->text);
    }

    FUNC_1(VAR_0->sign_buffer);
    VAR_0->sign_buffer = FUNC_2(5, VAR_6, VAR_5);
    VAR_0->sign_faces = VAR_6;
}
