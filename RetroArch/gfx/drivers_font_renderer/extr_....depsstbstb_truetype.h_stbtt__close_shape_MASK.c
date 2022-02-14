
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stbtt_vertex ;
typedef int stbtt_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(stbtt_vertex *VAR_2, int VAR_3, int VAR_4, int VAR_5,
    stbtt_int32 VAR_6, stbtt_int32 VAR_7, stbtt_int32 VAR_8, stbtt_int32 VAR_9, stbtt_int32 VAR_10, stbtt_int32 VAR_11)
{
   if (VAR_5) {
      if (VAR_4)
         FUNC_0(&VAR_2[VAR_3++], VAR_0, (VAR_10+VAR_8)>>1, (VAR_11+VAR_9)>>1, VAR_10,VAR_11);
      FUNC_0(&VAR_2[VAR_3++], VAR_0, VAR_6,VAR_7,VAR_8,VAR_9);
   } else {
      if (VAR_4)
         FUNC_0(&VAR_2[VAR_3++], VAR_0,VAR_6,VAR_7,VAR_10,VAR_11);
      else
         FUNC_0(&VAR_2[VAR_3++], VAR_1,VAR_6,VAR_7,0,0);
   }
   return VAR_3;
}
