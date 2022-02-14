
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void stbi_uc ;
typedef int stbi__result_info ;
struct TYPE_4__ {int w; int h; int background; int history; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;
typedef int g ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 void* FUNC_2 (void*,int,int,int,int) ;
 void* FUNC_3 (int *,TYPE_1__*,int*,int,int ) ;

__attribute__((used)) static void *FUNC_4(stbi__context *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4, stbi__result_info *VAR_5)
{
   stbi_uc *VAR_6 = 0;
   stbi__gif VAR_7;
   FUNC_1(&VAR_7, 0, sizeof(VAR_7));

   VAR_6 = FUNC_3(VAR_0, &VAR_7, VAR_3, VAR_4, 0);
   if (VAR_6 == (stbi_uc *) VAR_0) VAR_6 = 0;
   if (VAR_6) {
      *VAR_1 = VAR_7.w;
      *VAR_2 = VAR_7.h;



      if (VAR_4 && VAR_4 != 4)
         VAR_6 = FUNC_2(VAR_6, 4, VAR_4, VAR_7.w, VAR_7.h);
   }


   FUNC_0(VAR_7.history);
   FUNC_0(VAR_7.background);

   return VAR_6;
}
