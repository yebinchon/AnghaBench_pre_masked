
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static GLuint FUNC_5(void)
{
    int VAR_6, VAR_7;
    char VAR_8[256 * 256];
    GLuint VAR_9;

    FUNC_1(1, &VAR_9);
    FUNC_0(VAR_2, VAR_9);

    for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
    {
        for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
            VAR_8[VAR_7 * 256 + VAR_6] = FUNC_4() % 256;
    }

    FUNC_2(VAR_2, 0, VAR_1, 256, 256, 0, VAR_1, VAR_5, VAR_8);
    FUNC_3(VAR_2, VAR_4, VAR_0);
    FUNC_3(VAR_2, VAR_3, VAR_0);

    return VAR_9;
}
