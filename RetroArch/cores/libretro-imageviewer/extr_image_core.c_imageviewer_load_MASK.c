
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int supports_rgba; int height; int width; scalar_t__ pixels; } ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (void*) ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (TYPE_1__*,char const*) ;
 int VAR_5 ;
 int FUNC_6 () ;
 void* FUNC_7 (size_t) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (void*,size_t,int *,int *,int*,int) ;

__attribute__((used)) static bool FUNC_9(const char *VAR_7, int VAR_8)
{
   FUNC_6();
   if (!FUNC_5(&VAR_4, VAR_7))
      return 0;
   VAR_2 = (uint32_t*)VAR_4.pixels;
   VAR_5 = VAR_4.width;
   VAR_3 = VAR_4.height;

   if (!VAR_2)
      return 0;

   VAR_6 = 1;

   return 1;
}
