
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_entry {unsigned int entry_idx; int priv_data; int * skb; struct data_queue* queue; scalar_t__ flags; } ;
struct data_queue_desc {unsigned int entry_num; int priv_size; int winfo_size; int desc_size; int data_size; } ;
struct data_queue {unsigned int limit; struct queue_entry* entries; int winfo_size; int desc_size; int data_size; int threshold; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct queue_entry*,unsigned int,unsigned int,int,int) ;
 struct queue_entry* FUNC_2 (unsigned int,unsigned int,int ) ;
 int FUNC_3 (struct data_queue*) ;

__attribute__((used)) static int FUNC_4(struct data_queue *VAR_2,
         const struct data_queue_desc *VAR_3)
{
 struct queue_entry *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;

 FUNC_3(VAR_2);

 VAR_2->limit = VAR_3->entry_num;
 VAR_2->threshold = FUNC_0(VAR_3->entry_num, 10);
 VAR_2->data_size = VAR_3->data_size;
 VAR_2->desc_size = VAR_3->desc_size;
 VAR_2->winfo_size = VAR_3->winfo_size;




 VAR_5 = sizeof(*VAR_4) + VAR_3->priv_size;
 VAR_4 = FUNC_2(VAR_2->limit, VAR_5, VAR_1);
 if (!VAR_4)
  return -VAR_0;





 for (VAR_6 = 0; VAR_6 < VAR_2->limit; VAR_6++) {
  VAR_4[VAR_6].flags = 0;
  VAR_4[VAR_6].queue = VAR_2;
  VAR_4[VAR_6].skb = ((void*)0);
  VAR_4[VAR_6].entry_idx = VAR_6;
  VAR_4[VAR_6].priv_data =
      (((char *)(VAR_4)) + ((VAR_2->limit) * (sizeof(*VAR_4))) + ((VAR_6) * (VAR_3->priv_size)));

 }



 VAR_2->entries = VAR_4;

 return 0;
}
