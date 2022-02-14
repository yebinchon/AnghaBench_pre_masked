
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int GLuint ;
typedef int GLsizei ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,int,int *,char*) ;
 int FUNC_6 (unsigned int,int ,scalar_t__*) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (int ,char const*) ;
 int VAR_4 ;

__attribute__((used)) static GLuint FUNC_9(const char* VAR_5, const char* VAR_6)
{
    GLuint VAR_7 = 0u;
    GLint VAR_8;
    GLuint VAR_9 = 0u;
    GLuint VAR_10 = 0u;
    GLsizei VAR_11;
    char VAR_12[8192];

    VAR_9 = FUNC_8(VAR_3, VAR_5);
    if (VAR_9 != 0u)
    {
        VAR_10 = FUNC_8(VAR_0, VAR_6);
        if (VAR_10 != 0u)
        {

            VAR_7 = FUNC_2();
            if (VAR_7 != 0u)
            {

                FUNC_1(VAR_7, VAR_9);
                FUNC_1(VAR_7, VAR_10);
                FUNC_7(VAR_7);
                FUNC_6(VAR_7, VAR_1, &VAR_8);

                if (VAR_8 != VAR_2)
                {
                    FUNC_0(VAR_4, "ERROR, failed to link shader program\n");
                    FUNC_5(VAR_7, 8192, &VAR_11, VAR_12);
                    FUNC_0(VAR_4, "ERROR: \n%s\n\n", VAR_12);
                    FUNC_3(VAR_7);
                    FUNC_4(VAR_10);
                    FUNC_4(VAR_9);
                    VAR_7 = 0u;
                }
            }
        }
        else
        {
            FUNC_0(VAR_4, "ERROR: Unable to load fragment shader\n");
            FUNC_4(VAR_9);
        }
    }
    else
    {
        FUNC_0(VAR_4, "ERROR: Unable to load vertex shader\n");
    }
    return VAR_7;
}
