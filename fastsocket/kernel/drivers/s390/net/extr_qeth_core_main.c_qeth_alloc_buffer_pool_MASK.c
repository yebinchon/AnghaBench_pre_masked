
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_count; int entry_list; } ;
struct TYPE_4__ {TYPE_1__ init_pool; } ;
struct qeth_card {TYPE_2__ qdio; } ;
struct qeth_buffer_pool_entry {int init_list; void** elements; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (struct qeth_card*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct qeth_buffer_pool_entry*) ;
 struct qeth_buffer_pool_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_3)
{
 struct qeth_buffer_pool_entry *VAR_4;
 void *VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_2, 5, "alocpool");
 for (VAR_6 = 0; VAR_6 < VAR_3->qdio.init_pool.buf_count; ++VAR_6) {
  VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   FUNC_7(VAR_3);
   return -VAR_0;
  }
  for (VAR_7 = 0; VAR_7 < FUNC_1(VAR_3); ++VAR_7) {
   VAR_5 = (void *) FUNC_2(VAR_1);
   if (!VAR_5) {
    while (VAR_7 > 0)
     FUNC_3((unsigned long)
        VAR_4->elements[--VAR_7]);
    FUNC_4(VAR_4);
    FUNC_7(VAR_3);
    return -VAR_0;
   }
   VAR_4->elements[VAR_7] = VAR_5;
  }
  FUNC_6(&VAR_4->init_list,
    &VAR_3->qdio.init_pool.entry_list);
 }
 return 0;
}
