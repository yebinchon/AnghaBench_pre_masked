
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* opaque; void* zfree; void* zalloc; scalar_t__ avail_in; void* next_in; } ;
struct zlib {int state; int window_bits; int file_bits; int ok_bits; scalar_t__ rc; TYPE_1__ z; scalar_t__ cksum; scalar_t__ uncompressed_digits; scalar_t__ compressed_digits; int rewrite_offset; int global; int file; struct chunk* chunk; struct IDAT* idat; } ;
struct chunk {int global; int file; } ;
struct IDAT {int dummy; } ;
typedef int png_uint_32 ;


 int FUNC_0 (struct zlib) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct zlib*,int) ;

__attribute__((used)) static int
FUNC_3(struct zlib *VAR_2, struct IDAT *VAR_3, struct chunk *VAR_4,
   int VAR_5, png_uint_32 VAR_6)

{
   FUNC_0(*VAR_2);

   VAR_2->idat = VAR_3;
   VAR_2->chunk = VAR_4;
   VAR_2->file = VAR_4->file;
   VAR_2->global = VAR_4->global;
   VAR_2->rewrite_offset = VAR_6;


   VAR_2->z.next_in = VAR_0;
   VAR_2->z.avail_in = 0;
   VAR_2->z.zalloc = VAR_0;
   VAR_2->z.zfree = VAR_0;
   VAR_2->z.opaque = VAR_0;

   VAR_2->state = -1;
   VAR_2->window_bits = VAR_5;

   VAR_2->compressed_digits = 0;
   VAR_2->uncompressed_digits = 0;




   VAR_2->file_bits = 24;
   VAR_2->ok_bits = 16;
   VAR_2->cksum = 0;




   VAR_2->rc = FUNC_1(&VAR_2->z, 0);
   if (VAR_2->rc != VAR_1)
   {
      FUNC_2(VAR_2, 1 );
      return 0;
   }

   else
   {
      VAR_2->state = 0;
      return 1;
   }
}
