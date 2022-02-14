
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* res_name; char* res_class; } ;
typedef TYPE_1__ XClassHint ;
typedef int Window ;
typedef int Display ;


 int FUNC_0 (int *,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Display *VAR_0, Window VAR_1)
{
   XClassHint VAR_2;

   VAR_2.res_name = (char*)"retroarch";
   VAR_2.res_class = (char*)"retroarch";
   FUNC_0(VAR_0, VAR_1, &VAR_2);
}
