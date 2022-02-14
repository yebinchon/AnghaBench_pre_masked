
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_layout_orientation_t ;
typedef int scope_t ;
typedef int rxml_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static video_layout_orientation_t FUNC_3(scope_t *VAR_7, rxml_node_t *VAR_8)
{
   const char *VAR_9;
   video_layout_orientation_t VAR_10 = VAR_2;

   if ((VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8, "rotate"))))
   {
      if (FUNC_2(VAR_9, "90") == 0)
         VAR_10 = VAR_5;

      else if (FUNC_2(VAR_9, "180") == 0)
         VAR_10 = VAR_3;

      else if (FUNC_2(VAR_9, "270") == 0)
         VAR_10 = VAR_4;
   }

   if ((VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8, "swapxy"))))
   {
      if (FUNC_2(VAR_9, "no") != 0)
         VAR_10 ^= VAR_6;
   }

   if ((VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8, "flipx"))))
   {
      if (FUNC_2(VAR_9, "no") != 0)
         VAR_10 ^= VAR_0;
   }

   if ((VAR_9 = FUNC_1(VAR_7, FUNC_0(VAR_8, "flipy"))))
   {
      if (FUNC_2(VAR_9, "no") != 0)
         VAR_10 ^= VAR_1;
   }

   return VAR_10;
}
