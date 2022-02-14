
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef int GLfloat ;


 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int *,float,float,float,float,char) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;

GLuint FUNC_4(float VAR_0, float VAR_1, float VAR_2, char *VAR_3) {
    int VAR_4 = FUNC_3(VAR_3);
    GLfloat *VAR_5 = FUNC_2(4, VAR_4);
    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        FUNC_1(VAR_5 + VAR_6 * 24, VAR_0, VAR_1, VAR_2 / 2, VAR_2, VAR_3[VAR_6]);
        VAR_0 += VAR_2;
    }
    return FUNC_0(4, VAR_4, VAR_5);
}
