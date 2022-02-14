
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * s; } ;
typedef TYPE_1__ stbi__jpeg ;
typedef int stbi__context ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(stbi__context *VAR_1)
{
   int VAR_2;
   stbi__jpeg* VAR_3 = (stbi__jpeg*)FUNC_2(sizeof(stbi__jpeg));
   VAR_3->s = VAR_1;
   FUNC_4(VAR_3);
   VAR_2 = FUNC_1(VAR_3, VAR_0);
   FUNC_3(VAR_1);
   FUNC_0(VAR_3);
   return VAR_2;
}
