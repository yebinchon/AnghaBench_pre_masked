
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore {scalar_t__ current_committed; unsigned int callback_count; scalar_t__ exceptions_per_area; int valid; struct commit_callback* callbacks; scalar_t__ current_area; int pending_count; } ;
struct dm_exception_store {int dummy; } ;
struct dm_exception {int new_chunk; int old_chunk; } ;
struct core_exception {int new_chunk; int old_chunk; } ;
struct commit_callback {void (* callback ) (void*,int) ;void* context; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pstore*,int ) ;
 int FUNC_1 (int *) ;
 struct pstore* FUNC_2 (struct dm_exception_store*) ;
 void FUNC_3 (void*,int) ;
 int FUNC_4 (struct pstore*,int ,struct core_exception*) ;
 scalar_t__ FUNC_5 (struct pstore*,scalar_t__) ;
 int FUNC_6 (struct pstore*) ;

__attribute__((used)) static void FUNC_7(struct dm_exception_store *VAR_1,
     struct dm_exception *VAR_2,
     void (*VAR_3) (void *, int VAR_4),
     void *VAR_5)
{
 unsigned int VAR_6;
 struct pstore *VAR_7 = FUNC_2(VAR_1);
 struct core_exception VAR_8;
 struct commit_callback *VAR_9;

 VAR_8.old_chunk = VAR_2->old_chunk;
 VAR_8.new_chunk = VAR_2->new_chunk;
 FUNC_4(VAR_7, VAR_7->current_committed++, &VAR_8);







 VAR_9 = VAR_7->callbacks + VAR_7->callback_count++;
 VAR_9->callback = VAR_3;
 VAR_9->context = VAR_5;





 if (!FUNC_1(&VAR_7->pending_count) &&
     (VAR_7->current_committed != VAR_7->exceptions_per_area))
  return;




 if ((VAR_7->current_committed == VAR_7->exceptions_per_area) &&
     FUNC_5(VAR_7, VAR_7->current_area + 1))
  VAR_7->valid = 0;




 if (VAR_7->valid && FUNC_0(VAR_7, VAR_0))
  VAR_7->valid = 0;




 if (VAR_7->current_committed == VAR_7->exceptions_per_area) {
  VAR_7->current_committed = 0;
  VAR_7->current_area++;
  FUNC_6(VAR_7);
 }

 for (VAR_6 = 0; VAR_6 < VAR_7->callback_count; VAR_6++) {
  VAR_9 = VAR_7->callbacks + VAR_6;
  VAR_9->callback(VAR_9->context, VAR_7->valid);
 }

 VAR_7->callback_count = 0;
}
