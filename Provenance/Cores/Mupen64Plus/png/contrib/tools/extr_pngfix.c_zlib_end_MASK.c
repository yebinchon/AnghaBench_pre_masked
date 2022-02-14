
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* msg; } ;
struct zlib {int ok_bits; int file_bits; scalar_t__ state; scalar_t__ rc; TYPE_4__ z; TYPE_3__* file; int compressed_digits; int compressed_bytes; TYPE_2__* chunk; int uncompressed_digits; int uncompressed_bytes; scalar_t__ cksum; TYPE_1__* global; } ;
struct TYPE_7__ {int file_name; } ;
struct TYPE_6__ {int chunk_type; } ;
struct TYPE_5__ {int quiet; } ;


 int FUNC_0 (struct zlib) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (char*,char const*,...) ;
 int FUNC_5 (char,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 char* FUNC_8 (struct zlib*) ;
 int FUNC_9 (struct zlib*,int) ;
 char* FUNC_10 (struct zlib*) ;

__attribute__((used)) static void
FUNC_11(struct zlib *VAR_2)
{



   if (!VAR_2->global->quiet)
   {
      if (VAR_2->ok_bits < 16)
      {
         const char *VAR_3;

         if (VAR_2->cksum)
            VAR_3 = "CHK";

         else if (VAR_2->ok_bits > VAR_2->file_bits)
            VAR_3 = "TFB";

         else if (VAR_2->ok_bits == VAR_2->file_bits)
            VAR_3 = "OK ";

         else
            VAR_3 = "OPT";





         FUNC_6(VAR_2->chunk->chunk_type, VAR_1);
         FUNC_4(" %s %s %d %d ", VAR_3, FUNC_8(VAR_2), VAR_2->file_bits,
            VAR_2->ok_bits);
         FUNC_7(VAR_2->compressed_bytes, VAR_2->compressed_digits, VAR_1);
         FUNC_5(' ', VAR_1);
         FUNC_7(VAR_2->uncompressed_bytes, VAR_2->uncompressed_digits,
            VAR_1);
         FUNC_5(' ', VAR_1);
         FUNC_2(VAR_2->file->file_name, VAR_1);
         FUNC_5('\n', VAR_1);
      }

      else
      {
         FUNC_6(VAR_2->chunk->chunk_type, VAR_1);
         FUNC_4(" SKP %s %d %s ", FUNC_8(VAR_2), VAR_2->file_bits,
            FUNC_10(VAR_2));
         FUNC_7(VAR_2->compressed_bytes, VAR_2->compressed_digits, VAR_1);
         FUNC_5(' ', VAR_1);
         FUNC_1(VAR_2->z.msg ? VAR_2->z.msg : "[no_message]", VAR_1);
         FUNC_5(' ', VAR_1);
         FUNC_2(VAR_2->file->file_name, VAR_1);
         FUNC_5('\n', VAR_1);
      }
   }

   if (VAR_2->state >= 0)
   {
      VAR_2->rc = FUNC_3(&VAR_2->z);

      if (VAR_2->rc != VAR_0)
         FUNC_9(VAR_2, 1 );
   }

   FUNC_0(*VAR_2);
}
