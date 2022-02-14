
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* key ) (int *,int,int,int,int) ;} ;
struct TYPE_5__ {int* keys; TYPE_1__ callbacks; scalar_t__ stickyKeys; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef scalar_t__ GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int,int,int,int) ;

void FUNC_1(_GLFWwindow* VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
    if (VAR_8 >= 0 && VAR_8 <= VAR_1)
    {
        GLFWbool VAR_12 = VAR_0;

        if (VAR_10 == VAR_3 && VAR_7->keys[VAR_8] == VAR_3)
            return;

        if (VAR_10 == VAR_2 && VAR_7->keys[VAR_8] == VAR_2)
            VAR_12 = VAR_5;

        if (VAR_10 == VAR_3 && VAR_7->stickyKeys)
            VAR_7->keys[VAR_8] = VAR_6;
        else
            VAR_7->keys[VAR_8] = (char) VAR_10;

        if (VAR_12)
            VAR_10 = VAR_4;
    }

    if (VAR_7->callbacks.key)
        VAR_7->callbacks.key((GLFWwindow*) VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
