
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long file_pages; scalar_t__ file; int * filemap; } ;
struct bitmap {int flags; int mddev; int pending_writes; int write_wait; TYPE_1__ storage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bitmap*) ;
 int FUNC_2 (struct bitmap*,unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bitmap*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct bitmap*,int ,int ) ;

void FUNC_8(struct bitmap *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;

 if (!VAR_5 || !VAR_5->storage.filemap ||
     FUNC_5(VAR_3, &VAR_5->flags))
  return;



 for (VAR_6 = 0; VAR_6 < VAR_5->storage.file_pages; VAR_6++) {
  if (!VAR_5->storage.filemap)
   return;
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_0);
  VAR_8 = FUNC_4(VAR_5, VAR_6,
            VAR_1);
  if (VAR_7 || VAR_8) {
   FUNC_2(VAR_5, VAR_6, VAR_2);
   FUNC_7(VAR_5, VAR_5->storage.filemap[VAR_6], 0);
  }
  if (VAR_7)
   VAR_9 = 1;
 }
 if (VAR_9) {
  if (VAR_5->storage.file)
   FUNC_6(VAR_5->write_wait,
       FUNC_0(&VAR_5->pending_writes)==0);
  else
   FUNC_3(VAR_5->mddev);
 }
 if (FUNC_5(VAR_4, &VAR_5->flags))
  FUNC_1(VAR_5);
}
