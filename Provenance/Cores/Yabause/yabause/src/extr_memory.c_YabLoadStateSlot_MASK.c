
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {char* itemnum; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,char const*,char*,int) ;

int FUNC_2(const char *VAR_1, u8 VAR_2)
{
   char VAR_3[512];

   if (VAR_0 == ((void*)0))
      return -1;




   FUNC_1(VAR_3, "%s/%s_%03d.yss", VAR_1, VAR_0->itemnum, VAR_2);

   return FUNC_0(VAR_3);
}
