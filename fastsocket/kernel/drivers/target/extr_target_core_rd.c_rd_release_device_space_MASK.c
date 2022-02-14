
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct scatterlist {size_t rd_sg_count; struct scatterlist* sg_table; } ;
struct rd_dev_sg_table {size_t rd_sg_count; struct rd_dev_sg_table* sg_table; } ;
struct rd_dev {size_t sg_table_count; struct scatterlist* sg_table_array; int rd_dev_id; TYPE_1__* rd_host; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int rd_host_id; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (char*,int ,int ,size_t,size_t,unsigned long) ;
 struct page* FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_4(struct rd_dev *VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4 = 0, VAR_5;
 struct rd_dev_sg_table *VAR_6;
 struct page *VAR_7;
 struct scatterlist *VAR_8;

 if (!VAR_1->sg_table_array || !VAR_1->sg_table_count)
  return;

 VAR_6 = VAR_1->sg_table_array;

 for (VAR_2 = 0; VAR_2 < VAR_1->sg_table_count; VAR_2++) {
  VAR_8 = VAR_6[VAR_2].sg_table;
  VAR_5 = VAR_6[VAR_2].rd_sg_count;

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   VAR_7 = FUNC_3(&VAR_8[VAR_3]);
   if (VAR_7) {
    FUNC_0(VAR_7);
    VAR_4++;
   }
  }

  FUNC_1(VAR_8);
 }

 FUNC_2("CORE_RD[%u] - Released device space for Ramdisk"
  " Device ID: %u, pages %u in %u tables total bytes %lu\n",
  VAR_1->rd_host->rd_host_id, VAR_1->rd_dev_id, VAR_4,
  VAR_1->sg_table_count, (unsigned long)VAR_4 * VAR_0);

 FUNC_1(VAR_6);
 VAR_1->sg_table_array = ((void*)0);
 VAR_1->sg_table_count = 0;
}
