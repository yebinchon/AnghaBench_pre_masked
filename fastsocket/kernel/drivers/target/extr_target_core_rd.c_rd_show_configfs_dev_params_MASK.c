
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct rd_dev {int rd_dev_id; int rd_page_count; int sg_table_count; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct se_device *VAR_1, char *VAR_2)
{
 struct rd_dev *VAR_3 = FUNC_0(VAR_1);

 ssize_t VAR_4 = FUNC_1(VAR_2, "TCM RamDisk ID: %u  RamDisk Makeup: rd_mcp\n",
   VAR_3->rd_dev_id);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, "        PAGES/PAGE_SIZE: %u*%lu"
   "  SG_table_count: %u\n", VAR_3->rd_page_count,
   VAR_0, VAR_3->sg_table_count);
 return VAR_4;
}
