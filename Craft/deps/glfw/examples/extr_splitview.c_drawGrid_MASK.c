
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float member_0; float member_1; float member_2; } ;
typedef TYPE_1__ vec3 ;
typedef scalar_t__ mat4x4 ;
typedef int GLfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float,float,float,float) ;
 int FUNC_3 (float,float,float) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int const*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (float,float,float) ;
 int FUNC_10 (scalar_t__,TYPE_1__,TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_11(float VAR_4, int VAR_5)
{
    int VAR_6;
    float VAR_7, VAR_8;
    mat4x4 VAR_9;

    FUNC_8();


    FUNC_2(0.05f, 0.05f, 0.2f, 0.0f);
    FUNC_1(VAR_0);


    {
        vec3 VAR_10 = { 0.f, 0.f, 1.f };
        vec3 VAR_11 = { 0.f, 0.f, 0.f };
        vec3 VAR_12 = { 0.f, 1.f, 0.f };
        FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12);
    }
    FUNC_6((const GLfloat*) VAR_9);


    FUNC_4(VAR_1);


    FUNC_3(0.0f, 0.5f, 0.5f);

    FUNC_0(VAR_2);


    VAR_7 = VAR_4 * 0.5f * (float) (VAR_5 - 1);
    VAR_8 = -VAR_4 * 0.5f * (float) (VAR_5 - 1);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        FUNC_9(-VAR_7, VAR_8, 0.0f);
        FUNC_9(VAR_7, VAR_8, 0.0f);
        VAR_8 += VAR_4;
    }


    VAR_7 = -VAR_4 * 0.5f * (float) (VAR_5 - 1);
    VAR_8 = VAR_4 * 0.5f * (float) (VAR_5 - 1);
    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        FUNC_9(VAR_7, -VAR_8, 0.0f);
        FUNC_9(VAR_7, VAR_8, 0.0f);
        VAR_7 += VAR_4;
    }

    FUNC_5();


    FUNC_4(VAR_3);

    FUNC_7();
}
