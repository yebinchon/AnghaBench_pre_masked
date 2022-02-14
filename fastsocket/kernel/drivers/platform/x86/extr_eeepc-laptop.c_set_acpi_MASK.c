
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cm_supported; int handle; } ;


 int VAR_0 ;
 char** VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int ,char const*,int,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_3, int VAR_4)
{
 if (VAR_2->cm_supported & (0x1 << VAR_3)) {
  const char *VAR_5 = VAR_1[VAR_3];
  if (VAR_5 == ((void*)0))
   return -VAR_0;
  if (FUNC_1(VAR_2->handle, VAR_5, VAR_4, ((void*)0)))
   FUNC_0("Error writing %s\n", VAR_5);
 }
 return 0;
}
