
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum rarch_movie_type { ____Placeholder_rarch_movie_type } rarch_movie_type ;
struct TYPE_6__ {size_t* frame_pos; size_t min_file_pos; int frame_mask; } ;
typedef TYPE_1__ bsv_movie_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static bsv_movie_t *FUNC_4(const char *VAR_1,
      enum rarch_movie_type VAR_2)
{
   size_t *VAR_3 = ((void*)0);
   bsv_movie_t *VAR_4 = (bsv_movie_t*)FUNC_3(1, sizeof(*VAR_4));

   if (!VAR_4)
      return ((void*)0);

   if (VAR_2 == VAR_0)
   {
      if (!FUNC_1(VAR_4, VAR_1))
         goto error;
   }
   else if (!FUNC_2(VAR_4, VAR_1))
      goto error;



   if (!(VAR_3 = (size_t*)FUNC_3((1 << 20), sizeof(size_t))))
      goto error;

   VAR_4->frame_pos = VAR_3;

   VAR_4->frame_pos[0] = VAR_4->min_file_pos;
   VAR_4->frame_mask = (1 << 20) - 1;

   return VAR_4;

error:
   FUNC_0(VAR_4);
   return ((void*)0);
}
