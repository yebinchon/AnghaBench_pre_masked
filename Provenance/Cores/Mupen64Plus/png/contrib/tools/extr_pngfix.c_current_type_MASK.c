
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int write_count; scalar_t__ type; TYPE_1__* chunk; } ;
typedef scalar_t__ png_uint_32 ;
struct TYPE_2__ {scalar_t__ chunk_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static png_uint_32
FUNC_0(struct file *VAR_2, int VAR_3)

{





   if (VAR_2->chunk != ((void*)0))
   {
      png_uint_32 VAR_4 = VAR_2->chunk->chunk_type;





      if (VAR_3 <= VAR_0 && VAR_4 == VAR_1 &&
         VAR_2->write_count == 8)
         VAR_4 = 0;

      return VAR_4;
   }

   else
      return VAR_2->type;
}
