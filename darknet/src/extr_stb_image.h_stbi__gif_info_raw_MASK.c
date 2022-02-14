
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3)
{
   stbi__gif* VAR_4 = (stbi__gif*) FUNC_2(sizeof(stbi__gif));
   if (!FUNC_1(VAR_0, VAR_4, VAR_3, 1)) {
      FUNC_0(VAR_4);
      FUNC_3( VAR_0 );
      return 0;
   }
   if (VAR_1) *VAR_1 = VAR_4->w;
   if (VAR_2) *VAR_2 = VAR_4->h;
   FUNC_0(VAR_4);
   return 1;
}
