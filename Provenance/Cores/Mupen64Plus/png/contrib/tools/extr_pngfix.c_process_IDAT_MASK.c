
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {scalar_t__ type; int state; TYPE_2__* chunk; struct IDAT* idat; int image_digits; int image_bytes; } ;
struct IDAT_list {scalar_t__ count; scalar_t__ length; int * lengths; } ;
struct IDAT {scalar_t__ idat_index; scalar_t__ idat_count; TYPE_1__* idat_cur; int idat_length; TYPE_1__* idat_list_head; struct IDAT_list* idat_list_tail; } ;
struct TYPE_4__ {int chunk_length; int uncompressed_digits; int uncompressed_bytes; } ;
struct TYPE_3__ {int * lengths; } ;


 struct IDAT_list* FUNC_0 (struct IDAT_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct IDAT*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct file*,int ,char*) ;
 int FUNC_5 (struct file*,scalar_t__,char*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct file*,int ) ;

__attribute__((used)) static int
FUNC_8(struct file *VAR_5)
{
   struct IDAT_list *VAR_6;

   FUNC_1(VAR_5->idat != ((void*)0) && VAR_5->chunk != ((void*)0));
   VAR_6 = VAR_5->idat->idat_list_tail;

   if (VAR_6->count == VAR_6->length)
   {
      VAR_6 = FUNC_0(VAR_6);

      if (VAR_6 == ((void*)0))
         FUNC_4(VAR_5, VAR_1, "out of memory");


      VAR_6->count = 0;
      VAR_5->idat->idat_list_tail = VAR_6;
   }


   VAR_6->lengths[(VAR_6->count)++] = VAR_5->chunk->chunk_length;




   if (VAR_5->type == VAR_4)
      return 0;






   FUNC_3(VAR_5->chunk);

   if (FUNC_7(VAR_5, 0))
   {
      struct IDAT *VAR_7;
      int VAR_8;




      VAR_8 = FUNC_6(VAR_5->image_bytes, VAR_5->image_digits,
         VAR_5->chunk->uncompressed_bytes, VAR_5->chunk->uncompressed_digits);

      if (VAR_8 < 0)
         FUNC_5(VAR_5, VAR_4, "extra uncompressed data");

      else if (VAR_8 > 0)
         FUNC_4(VAR_5, VAR_0, "IDAT: uncompressed data too small");





      FUNC_3(VAR_5->chunk);

      VAR_7 = VAR_5->idat;
      VAR_7->idat_cur = VAR_7->idat_list_head;
      VAR_7->idat_length = VAR_7->idat_cur->lengths[0];
      VAR_7->idat_count = 0;
      VAR_7->idat_index = 0;


      VAR_5->chunk->chunk_length = FUNC_2(VAR_7, 1 );


      VAR_5->state = VAR_2;

      return 1;
   }

   else
      FUNC_4(VAR_5, VAR_3, "could not uncompress IDAT");
}
