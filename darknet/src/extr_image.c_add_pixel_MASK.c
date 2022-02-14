
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(image VAR_0, int VAR_1, int VAR_2, int VAR_3, float VAR_4)
{
    FUNC_0(VAR_1 < VAR_0.w && VAR_2 < VAR_0.h && VAR_3 < VAR_0.c);
    VAR_0.data[VAR_3*VAR_0.h*VAR_0.w + VAR_2*VAR_0.w + VAR_1] += VAR_4;
}
