
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (float const*) ;
 int FUNC_2 (int ,int ,float const) ;
 int FUNC_3 (int ,int ,float const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (float,float,float,float) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_7(void)
{
    const GLfloat VAR_7[4] = {1.0f, 0.8f, 0.8f, 1.0f};
    const GLfloat VAR_8[4] = {0.6f, 0.6f, 0.6f, 1.0f};
    const GLfloat VAR_9 = 20.0f;

    FUNC_5();


    FUNC_6((GLfloat) VAR_4 * 0.5f, 1.0f, 0.0f, 0.0f);
    FUNC_6((GLfloat) VAR_5 * 0.5f, 0.0f, 1.0f, 0.0f);
    FUNC_6((GLfloat) VAR_6 * 0.5f, 0.0f, 0.0f, 1.0f);


    FUNC_1(VAR_7);


    FUNC_3(VAR_1, VAR_0, VAR_7);
    FUNC_3(VAR_1, VAR_3, VAR_8);
    FUNC_2(VAR_1, VAR_2, VAR_9);


    FUNC_0();

    FUNC_4();
}
