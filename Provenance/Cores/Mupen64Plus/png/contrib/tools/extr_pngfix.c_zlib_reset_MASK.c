
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ avail_out; void* next_out; scalar_t__ avail_in; void* next_in; } ;
struct zlib {scalar_t__ state; int window_bits; scalar_t__ rc; TYPE_1__ z; scalar_t__ uncompressed_digits; scalar_t__ compressed_digits; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct zlib*,int) ;

__attribute__((used)) static int
FUNC_3(struct zlib *VAR_2, int VAR_3)

{
   FUNC_0(VAR_2->state >= 0);

   VAR_2->z.next_in = VAR_0;
   VAR_2->z.avail_in = 0;
   VAR_2->z.next_out = VAR_0;
   VAR_2->z.avail_out = 0;

   VAR_2->window_bits = VAR_3;
   VAR_2->compressed_digits = 0;
   VAR_2->uncompressed_digits = 0;

   VAR_2->state = 0;
   VAR_2->rc = FUNC_1(&VAR_2->z, 0);
   if (VAR_2->rc != VAR_1)
   {
      FUNC_2(VAR_2, 1 );
      return 0;
   }

   return 1;
}
