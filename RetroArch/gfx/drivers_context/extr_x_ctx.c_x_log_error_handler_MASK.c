
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int minor_code; int request_code; int error_code; } ;
typedef TYPE_1__ XErrorEvent ;
typedef int Display ;


 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (int *,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(Display *VAR_0, XErrorEvent *VAR_1)
{
   char VAR_2[1024];
   FUNC_1(VAR_0, VAR_1->error_code, VAR_2, sizeof VAR_2);
   FUNC_0("[GLX]: X error message: %s, request code: %d, minor code: %d\n",
         VAR_2, VAR_1->request_code, VAR_1->minor_code);
   return 0;
}
