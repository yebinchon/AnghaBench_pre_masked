
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; unsigned char* member_2; int width; int height; } ;
typedef TYPE_1__ GLFWimage ;
typedef int GLFWcursor ;


 int * FUNC_0 (TYPE_1__ const*,int,int) ;
 int FUNC_1 (int,int,float) ;

__attribute__((used)) static GLFWcursor* FUNC_2(float VAR_0)
{
    int VAR_1 = 0, VAR_2, VAR_3;
    unsigned char VAR_4[64 * 64 * 4];
    const GLFWimage VAR_5 = { 64, 64, VAR_4 };

    for (VAR_3 = 0; VAR_3 < VAR_5.width; VAR_3++)
    {
        for (VAR_2 = 0; VAR_2 < VAR_5.height; VAR_2++)
        {
            VAR_4[VAR_1++] = 255;
            VAR_4[VAR_1++] = 255;
            VAR_4[VAR_1++] = 255;
            VAR_4[VAR_1++] = (unsigned char) (255 * FUNC_1(VAR_2, VAR_3, VAR_0));
        }
    }

    return FUNC_0(&VAR_5, VAR_5.width / 2, VAR_5.height / 2);
}
