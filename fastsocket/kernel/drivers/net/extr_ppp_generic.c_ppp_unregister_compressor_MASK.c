
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressor_entry {int list; struct compressor* comp; } ;
struct compressor {int compress_proto; } ;


 int VAR_0 ;
 struct compressor_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct compressor_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct compressor *VAR_1)
{
 struct compressor_entry *VAR_2;

 FUNC_3(&VAR_0);
 VAR_2 = FUNC_0(VAR_1->compress_proto);
 if (VAR_2 && VAR_2->comp == VAR_1) {
  FUNC_2(&VAR_2->list);
  FUNC_1(VAR_2);
 }
 FUNC_4(&VAR_0);
}
