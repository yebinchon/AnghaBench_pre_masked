
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {int valid; int metadata_wq; int * callbacks; int pending_count; scalar_t__ callback_count; scalar_t__ current_committed; scalar_t__ next_free; int * header_area; int * zero_area; int * area; int version; struct dm_exception_store* store; } ;
struct dm_exception_store {struct pstore* context; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pstore*) ;
 struct pstore* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct dm_exception_store *VAR_4,
     unsigned VAR_5, char **VAR_6)
{
 struct pstore *VAR_7;


 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->store = VAR_4;
 VAR_7->valid = 1;
 VAR_7->version = VAR_3;
 VAR_7->area = ((void*)0);
 VAR_7->zero_area = ((void*)0);
 VAR_7->header_area = ((void*)0);
 VAR_7->next_free = VAR_2 + 1;
 VAR_7->current_committed = 0;

 VAR_7->callback_count = 0;
 FUNC_1(&VAR_7->pending_count, 0);
 VAR_7->callbacks = ((void*)0);

 VAR_7->metadata_wq = FUNC_2("ksnaphd");
 if (!VAR_7->metadata_wq) {
  FUNC_3(VAR_7);
  FUNC_0("couldn't start header metadata update thread");
  return -VAR_0;
 }

 VAR_4->context = VAR_7;

 return 0;
}
