
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ nat_traversal; scalar_t__ is_server; } ;
typedef TYPE_1__ netplay_t ;


 int FUNC_0 (TYPE_1__*,void*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(netplay_t *VAR_0, void *VAR_1,
      const char *VAR_2, uint16_t VAR_3)
{
   if (!FUNC_2())
      return 0;

   if (!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
      return 0;

   if (VAR_0->is_server && VAR_0->nat_traversal)
      FUNC_1(VAR_0);

   return 1;
}
