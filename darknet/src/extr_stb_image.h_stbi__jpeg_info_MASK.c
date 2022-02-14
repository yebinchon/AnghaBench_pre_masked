
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * s; } ;
typedef TYPE_1__ stbi__jpeg ;
typedef int stbi__context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int*,int*,int*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   int VAR_4;
   stbi__jpeg* VAR_5 = (stbi__jpeg*) (FUNC_2(sizeof(stbi__jpeg)));
   VAR_5->s = VAR_0;
   VAR_4 = FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3);
   FUNC_0(VAR_5);
   return VAR_4;
}
