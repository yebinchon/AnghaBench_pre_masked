
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int length; } ;
struct rd_dev_sg_table {int rd_sg_count; int page_start_offset; int page_end_offset; struct scatterlist* sg_table; } ;
struct rd_dev {scalar_t__ rd_page_count; int sg_table_count; int rd_dev_id; TYPE_1__* rd_host; struct rd_dev_sg_table* sg_table_array; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int rd_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct page* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,int ,int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct scatterlist*,struct page*) ;
 int FUNC_5 (struct scatterlist*,int) ;

__attribute__((used)) static int FUNC_6(struct rd_dev *VAR_5)
{
 u32 VAR_6 = 0, VAR_7, VAR_8 = 0, VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = (VAR_4 /
    sizeof(struct scatterlist));
 struct rd_dev_sg_table *VAR_13;
 struct page *VAR_14;
 struct scatterlist *VAR_15;

 if (VAR_5->rd_page_count <= 0) {
  FUNC_3("Illegal page count: %u for Ramdisk device\n",
   VAR_5->rd_page_count);
  return -VAR_0;
 }
 VAR_11 = VAR_5->rd_page_count;

 VAR_10 = (VAR_11 / VAR_12) + 1;

 VAR_13 = FUNC_1(VAR_10 * sizeof(struct rd_dev_sg_table), VAR_2);
 if (!VAR_13) {
  FUNC_3("Unable to allocate memory for Ramdisk"
   " scatterlist tables\n");
  return -VAR_1;
 }

 VAR_5->sg_table_array = VAR_13;
 VAR_5->sg_table_count = VAR_10;

 while (VAR_11) {
  VAR_9 = (VAR_11 > VAR_12) ?
   VAR_12 : VAR_11;

  VAR_15 = FUNC_1(VAR_9 * sizeof(struct scatterlist),
    VAR_2);
  if (!VAR_15) {
   FUNC_3("Unable to allocate scatterlist array"
    " for struct rd_dev\n");
   return -VAR_1;
  }

  FUNC_5(VAR_15, VAR_9);

  VAR_13[VAR_6].sg_table = VAR_15;
  VAR_13[VAR_6].rd_sg_count = VAR_9;
  VAR_13[VAR_6].page_start_offset = VAR_8;
  VAR_13[VAR_6++].page_end_offset = (VAR_8 + VAR_9)
      - 1;

  for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
   VAR_14 = FUNC_0(VAR_2, 0);
   if (!VAR_14) {
    FUNC_3("Unable to allocate scatterlist"
     " pages for struct rd_dev_sg_table\n");
    return -VAR_1;
   }
   FUNC_4(&VAR_15[VAR_7], VAR_14);
   VAR_15[VAR_7].length = VAR_3;
  }

  VAR_8 += VAR_9;
  VAR_11 -= VAR_9;
 }

 FUNC_2("CORE_RD[%u] - Built Ramdisk Device ID: %u space of"
  " %u pages in %u tables\n", VAR_5->rd_host->rd_host_id,
  VAR_5->rd_dev_id, VAR_5->rd_page_count,
  VAR_5->sg_table_count);

 return 0;
}
