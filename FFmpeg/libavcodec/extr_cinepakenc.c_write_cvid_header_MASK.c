
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; } ;
typedef TYPE_1__ CinepakEncContext ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(CinepakEncContext *VAR_1, unsigned char *VAR_2,
                             int VAR_3, int VAR_4, int VAR_5)
{
    VAR_2[0] = VAR_5 ? 0 : 1;
    FUNC_1(&VAR_2[1], VAR_4 + VAR_0);
    FUNC_0(&VAR_2[4], VAR_1->w);
    FUNC_0(&VAR_2[6], VAR_1->h);
    FUNC_0(&VAR_2[8], VAR_3);

    return VAR_0;
}
