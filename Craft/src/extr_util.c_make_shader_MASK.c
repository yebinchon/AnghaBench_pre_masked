
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef char GLchar ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__,int *,char*) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 int FUNC_7 (int ,int,char const**,int *) ;
 int VAR_3 ;

GLuint FUNC_8(GLenum VAR_4, const char *VAR_5) {
    GLuint VAR_6 = FUNC_4(VAR_4);
    FUNC_7(VAR_6, 1, &VAR_5, ((void*)0));
    FUNC_3(VAR_6);
    GLint VAR_7;
    FUNC_6(VAR_6, VAR_0, &VAR_7);
    if (VAR_7 == VAR_1) {
        GLint VAR_8;
        FUNC_6(VAR_6, VAR_2, &VAR_8);
        GLchar *VAR_9 = FUNC_0(VAR_8, sizeof(GLchar));
        FUNC_5(VAR_6, VAR_8, ((void*)0), VAR_9);
        FUNC_1(VAR_3, "glCompileShader failed:\n%s\n", VAR_9);
        FUNC_2(VAR_9);
    }
    return VAR_6;
}
