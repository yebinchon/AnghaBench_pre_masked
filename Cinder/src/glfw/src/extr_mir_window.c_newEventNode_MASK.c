
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int _GLFWwindow ;
struct TYPE_4__ {int * window; int event; } ;
typedef int MirEvent ;
typedef TYPE_1__ EventNode ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static EventNode* FUNC_2(const MirEvent* VAR_0, _GLFWwindow* VAR_1)
{
    EventNode* VAR_2 = FUNC_0(1, sizeof(EventNode));
    VAR_2->event = FUNC_1(VAR_0);
    VAR_2->window = VAR_1;

    return VAR_2;
}
