
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sock; int ip_addr; } ;
typedef TYPE_1__ ConnectionInfo ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static ConnectionInfo *FUNC_3(
  ConnectionInfo *VAR_3, int *VAR_4)
{
 ConnectionInfo *VAR_5;
 ConnectionInfo *VAR_6;

 VAR_5 = VAR_2 + VAR_1;
 for (VAR_6=VAR_2; VAR_6<VAR_5; VAR_6++)
 {
  if (FUNC_2(VAR_3->ip_addr, VAR_6->ip_addr) == 0)
  {
   if (VAR_6->sock < 0)
   {
    *VAR_4 = FUNC_0(VAR_6, VAR_0);

    if (*VAR_4 != 0)
    {
     return ((void*)0);
    }
   }
   else
   {
    *VAR_4 = 0;
   }

   return VAR_6;
  }
 }

 VAR_6 = VAR_5;
 FUNC_1(VAR_6, VAR_3, sizeof(ConnectionInfo));
 VAR_6->sock = -1;
 if ((*VAR_4=FUNC_0(VAR_6, VAR_0)) != 0)

 {
  return ((void*)0);
 }

 VAR_1++;

 *VAR_4 = 0;
 return VAR_6;
}
