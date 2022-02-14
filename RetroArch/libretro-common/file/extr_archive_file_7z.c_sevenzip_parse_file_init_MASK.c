
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int s; int * realStream; } ;
struct TYPE_8__ {int s; int file; } ;
struct sevenzip_context_t {int allocTempImp; int allocImp; TYPE_3__ lookStream; int db; TYPE_5__ archiveStream; } ;
struct TYPE_6__ {scalar_t__ archive_size; struct sevenzip_context_t* stream; int data; } ;
typedef TYPE_1__ file_archive_transfer_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sevenzip_context_t*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (int ,int ,scalar_t__) ;
 int * FUNC_13 (char const*) ;

__attribute__((used)) static int FUNC_14(file_archive_transfer_t *VAR_3,
      const char *VAR_4)
{
   struct sevenzip_context_t *VAR_5 =
         (struct sevenzip_context_t*)FUNC_10();

   if (VAR_3->archive_size < VAR_1)
      goto error;

   if (FUNC_12(VAR_3->data, VAR_0, VAR_1))
      goto error;

   VAR_3->stream = VAR_5;
   if (FUNC_2(&VAR_5->archiveStream.file, VAR_4))
      goto error;


   FUNC_1(&VAR_5->archiveStream);
   FUNC_4(&VAR_5->lookStream, 0);
   VAR_5->lookStream.realStream = &VAR_5->archiveStream.s;
   FUNC_5(&VAR_5->lookStream);
   FUNC_0();
   FUNC_6(&VAR_5->db);

   if (FUNC_7(&VAR_5->db, &VAR_5->lookStream.s,
         &VAR_5->allocImp, &VAR_5->allocTempImp) != VAR_2)
      goto error;

   return 0;

error:
   if (VAR_5)
      FUNC_9(VAR_5);
   return -1;
}
