
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 double FUNC_0 () ;
 int FUNC_1 (char*,double,char*) ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_0, int VAR_1)
{
    FUNC_1("%0.2f Window %s\n",
           FUNC_0(),
           VAR_1 ? "focused" : "defocused");
}
