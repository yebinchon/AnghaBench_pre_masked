
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef scalar_t__ GLint ;
typedef char GLchar ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int *,char*) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;
 int FUNC_9 (int ) ;
 int VAR_3 ;

GLuint FUNC_10(GLuint VAR_4, GLuint VAR_5) {
    GLuint VAR_6 = FUNC_4();
    FUNC_3(VAR_6, VAR_4);
    FUNC_3(VAR_6, VAR_5);
    FUNC_9(VAR_6);
    GLint VAR_7;
    FUNC_8(VAR_6, VAR_2, &VAR_7);
    if (VAR_7 == VAR_0) {
        GLint VAR_8;
        FUNC_8(VAR_6, VAR_1, &VAR_8);
        GLchar *VAR_9 = FUNC_0(VAR_8, sizeof(GLchar));
        FUNC_7(VAR_6, VAR_8, ((void*)0), VAR_9);
        FUNC_1(VAR_3, "glLinkProgram failed: %s\n", VAR_9);
        FUNC_2(VAR_9);
    }
    FUNC_6(VAR_6, VAR_4);
    FUNC_6(VAR_6, VAR_5);
    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    return VAR_6;
}
