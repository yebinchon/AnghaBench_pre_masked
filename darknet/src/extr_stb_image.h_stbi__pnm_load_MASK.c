
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void stbi_uc ;
typedef int stbi__result_info ;
struct TYPE_5__ {int img_x; int img_y; int img_n; } ;
typedef TYPE_1__ stbi__context ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (void*,int,int,int,int) ;
 void* FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,void*,int) ;
 int FUNC_4 (int,int,int,int ) ;
 scalar_t__ FUNC_5 (int,int,int,int ) ;
 int FUNC_6 (TYPE_1__*,int*,int*,int*) ;

__attribute__((used)) static void *FUNC_7(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4, stbi__result_info *VAR_5)
{
   stbi_uc *VAR_6;
   FUNC_0(VAR_5);

   if (!FUNC_6(VAR_0, (int *)&VAR_0->img_x, (int *)&VAR_0->img_y, (int *)&VAR_0->img_n))
      return 0;

   *VAR_1 = VAR_0->img_x;
   *VAR_2 = VAR_0->img_y;
   if (VAR_3) *VAR_3 = VAR_0->img_n;

   if (!FUNC_4(VAR_0->img_n, VAR_0->img_x, VAR_0->img_y, 0))
      return FUNC_2("too large", "PNM too large");

   VAR_6 = (stbi_uc *) FUNC_5(VAR_0->img_n, VAR_0->img_x, VAR_0->img_y, 0);
   if (!VAR_6) return FUNC_2("outofmem", "Out of memory");
   FUNC_3(VAR_0, VAR_6, VAR_0->img_n * VAR_0->img_x * VAR_0->img_y);

   if (VAR_4 && VAR_4 != VAR_0->img_n) {
      VAR_6 = FUNC_1(VAR_6, VAR_0->img_n, VAR_4, VAR_0->img_x, VAR_0->img_y);
      if (VAR_6 == ((void*)0)) return VAR_6;
   }
   return VAR_6;
}
