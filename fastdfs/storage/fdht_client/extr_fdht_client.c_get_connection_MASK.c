
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sock; } ;
struct TYPE_6__ {int count; TYPE_2__** servers; } ;
typedef TYPE_1__ ServerArray ;
typedef TYPE_2__ FDHTServerInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static FDHTServerInfo *FUNC_2(ServerArray *VAR_2, const bool VAR_3, const int VAR_4, int *VAR_5)

{
 FDHTServerInfo **VAR_6;
 FDHTServerInfo **VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_9 = (VAR_4 << 16) | (VAR_4 >> 16);
 if (VAR_9 < 0)
 {
  VAR_9 &= 0x7FFFFFFF;
 }
 VAR_8 = VAR_9 % VAR_2->count;
 VAR_7 = VAR_2->servers + VAR_2->count;
 for (VAR_6 = VAR_2->servers + VAR_8; VAR_6<VAR_7; VAR_6++)

 {
  if ((*VAR_6)->sock > 0)
  {
   return *VAR_6;
  }

  if (FUNC_0(*VAR_6, VAR_1) == 0)

  {
   if (VAR_3)
   {
    FUNC_1((*VAR_6)->sock, 3600);
   }
   return *VAR_6;
  }
 }

 VAR_7 = VAR_2->servers + VAR_8;
 for (VAR_6 = VAR_2->servers; VAR_6<VAR_7; VAR_6++)
 {
  if ((*VAR_6)->sock > 0)
  {
   return *VAR_6;
  }

  if (FUNC_0(*VAR_6, VAR_1) == 0)

  {
   if (VAR_3)
   {
    FUNC_1((*VAR_6)->sock, 3600);
   }
   return *VAR_6;
  }
 }

 *VAR_5 = VAR_0;
 return ((void*)0);
}
