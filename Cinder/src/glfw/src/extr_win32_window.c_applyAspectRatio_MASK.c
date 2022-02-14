
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ denom; scalar_t__ numer; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_8__ {int bottom; int top; int right; int left; } ;
typedef TYPE_2__ RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int*,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_8, int VAR_9, RECT* VAR_10)
{
    int VAR_11, VAR_12;
    const float VAR_13 = (float) VAR_8->numer / (float) VAR_8->denom;

    FUNC_0(FUNC_2(VAR_8), FUNC_1(VAR_8),
                      0, 0, &VAR_11, &VAR_12);

    if (VAR_9 == VAR_3 || VAR_9 == VAR_1 ||
        VAR_9 == VAR_4 || VAR_9 == VAR_2)
    {
        VAR_10->bottom = VAR_10->top + VAR_12 +
            (int) ((VAR_10->right - VAR_10->left - VAR_11) / VAR_13);
    }
    else if (VAR_9 == VAR_6 || VAR_9 == VAR_7)
    {
        VAR_10->top = VAR_10->bottom - VAR_12 -
            (int) ((VAR_10->right - VAR_10->left - VAR_11) / VAR_13);
    }
    else if (VAR_9 == VAR_5 || VAR_9 == VAR_0)
    {
        VAR_10->right = VAR_10->left + VAR_11 +
            (int) ((VAR_10->bottom - VAR_10->top - VAR_12) * VAR_13);
    }
}
