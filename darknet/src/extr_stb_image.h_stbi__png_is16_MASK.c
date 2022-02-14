
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int depth; int * s; } ;
typedef TYPE_1__ stbi__png ;
typedef int stbi__context ;


 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(stbi__context *VAR_0)
{
   stbi__png VAR_1;
   VAR_1.s = VAR_0;
   if (!FUNC_0(&VAR_1, ((void*)0), ((void*)0), ((void*)0)))
    return 0;
   if (VAR_1.depth != 16) {
      FUNC_1(VAR_1.s);
      return 0;
   }
   return 1;
}
