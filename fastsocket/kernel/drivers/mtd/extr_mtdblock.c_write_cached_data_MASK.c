
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdblk_dev {scalar_t__ cache_state; int cache_data; int cache_size; int cache_offset; struct mtd_info* mtd; } ;
struct mtd_info {int name; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mtd_info*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2 (struct mtdblk_dev *VAR_3)
{
 struct mtd_info *VAR_4 = VAR_3->mtd;
 int VAR_5;

 if (VAR_3->cache_state != VAR_1)
  return 0;

 FUNC_0(VAR_0, "mtdblock: writing cached data for \"%s\" "
   "at 0x%lx, size 0x%x\n", VAR_4->name,
   VAR_3->cache_offset, VAR_3->cache_size);

 VAR_5 = FUNC_1 (VAR_4, VAR_3->cache_offset,
      VAR_3->cache_size, VAR_3->cache_data);
 if (VAR_5)
  return VAR_5;
 VAR_3->cache_state = VAR_2;
 return 0;
}
