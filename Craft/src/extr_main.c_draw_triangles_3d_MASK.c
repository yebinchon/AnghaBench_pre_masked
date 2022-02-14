
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uv; int normal; int position; } ;
typedef int GLvoid ;
typedef int GLuint ;
typedef int GLfloat ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ,int,int *) ;

void FUNC_5(Attrib *VAR_4, GLuint VAR_5, int VAR_6) {
    FUNC_0(VAR_0, VAR_5);
    FUNC_3(VAR_4->position);
    FUNC_3(VAR_4->normal);
    FUNC_3(VAR_4->uv);
    FUNC_4(VAR_4->position, 3, VAR_2, VAR_1,
        sizeof(GLfloat) * 8, 0);
    FUNC_4(VAR_4->normal, 3, VAR_2, VAR_1,
        sizeof(GLfloat) * 8, (GLvoid *)(sizeof(GLfloat) * 3));
    FUNC_4(VAR_4->uv, 2, VAR_2, VAR_1,
        sizeof(GLfloat) * 8, (GLvoid *)(sizeof(GLfloat) * 6));
    FUNC_2(VAR_3, 0, VAR_6);
    FUNC_1(VAR_4->position);
    FUNC_1(VAR_4->normal);
    FUNC_1(VAR_4->uv);
    FUNC_0(VAR_0, 0);
}
