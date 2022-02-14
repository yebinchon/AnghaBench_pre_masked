
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct exception_context {int dummy; } ;
typedef int png_uint_32 ;
typedef int * png_structp ;
struct TYPE_10__ {int noptions; int * pread; int piread; TYPE_1__* options; struct exception_context exception_context; int read_memory_pool; int speed; int test; } ;
typedef TYPE_2__ png_store ;
typedef int * png_infopp ;
typedef int Throw ;
struct TYPE_9__ {int setting; int option; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,TYPE_2__*,int ,int ) ;
 int * FUNC_2 (int ,TYPE_2__*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int,int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int *,char*,int) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_5 ;

__attribute__((used)) static png_structp
FUNC_9(png_store *VAR_6, png_infopp VAR_7, png_uint_32 VAR_8,
   const char *VAR_9)
{

   FUNC_5(VAR_6->test, sizeof VAR_6->test, 0, VAR_9);

   if (VAR_6->pread != ((void*)0))
      FUNC_3(VAR_6->pread, "read store already in use");

   FUNC_7(VAR_6);
   VAR_6->pread = FUNC_1(VAR_0, VAR_6, VAR_2,
      VAR_5);

   if (VAR_6->pread == ((void*)0))
   {
      struct exception_context *VAR_10 = &VAR_6->exception_context;

      FUNC_6(VAR_6, ((void*)0), "png_create_read_struct returned NULL (unexpected)",
         1 );

      Throw VAR_11;
   }
   FUNC_8(VAR_6, VAR_8);

   if (VAR_7 != ((void*)0))
      *VAR_7 = VAR_6->piread = FUNC_0(VAR_6->pread);

   return VAR_6->pread;
}
