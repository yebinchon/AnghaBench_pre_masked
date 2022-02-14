
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* msg; } ;
struct zlib {int rc; TYPE_4__* chunk; TYPE_3__* file; TYPE_2__ z; TYPE_1__* global; } ;
struct TYPE_8__ {int chunk_type; } ;
struct TYPE_7__ {int file_name; } ;
struct TYPE_5__ {scalar_t__ errors; } ;


 int FUNC_0 (int ,char*,char*,int,char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (struct zlib*) ;

__attribute__((used)) static void
FUNC_5(struct zlib *VAR_1, int VAR_2)

{
   if (VAR_1->global->errors)
   {
      const char *VAR_3 = VAR_1->z.msg;

      if (VAR_3 == ((void*)0))
         VAR_3 = "[no message]";

      FUNC_1(VAR_1->file->file_name, VAR_0);
      FUNC_3(VAR_0);
      FUNC_2(VAR_1->chunk->chunk_type, VAR_0);
      FUNC_0(VAR_0, ": %szlib error: %d (%s) (%s)\n",
         VAR_2 ? "unexpected " : "", VAR_1->rc, FUNC_4(VAR_1), VAR_3);
   }
}
