
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global {scalar_t__ verbose; } ;
struct control {int dummy; } ;


 int FUNC_0 (struct control*) ;
 int FUNC_1 (struct control*,struct global*,char const*,char const*) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;
 int FUNC_3 (struct control*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct global *VAR_1, const char *VAR_2, const char *VAR_3)
{
   int VAR_4;
   struct control VAR_5;

   if (VAR_1->verbose)
      FUNC_2(VAR_0, "FILE %s -> %s\n", VAR_2,
         VAR_3 ? VAR_3 : "<none>");




   VAR_4 = FUNC_1(&VAR_5, VAR_1, VAR_2, VAR_3);

   if (VAR_4 == 0)
      VAR_4 = FUNC_3(&VAR_5);

   VAR_4 |= FUNC_0(&VAR_5);

   return VAR_4;
}
