
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdblk_dev {unsigned int cache_size; scalar_t__ cache_state; unsigned long cache_offset; scalar_t__ cache_data; struct mtd_info* mtd; } ;
struct mtd_info {int (* read ) (struct mtd_info*,unsigned long,int,size_t*,char*) ;int name; } ;


 int FUNC_0 (int ,char*,int ,unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct mtd_info*,unsigned long,int,size_t*,char*) ;
 int FUNC_3 (struct mtd_info*,unsigned long,unsigned int,size_t*,char*) ;

__attribute__((used)) static int FUNC_4 (struct mtdblk_dev *VAR_3, unsigned long VAR_4,
      int VAR_5, char *VAR_6)
{
 struct mtd_info *VAR_7 = VAR_3->mtd;
 unsigned int VAR_8 = VAR_3->cache_size;
 size_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_1, "mtdblock: read on \"%s\" at 0x%lx, size 0x%x\n",
   VAR_7->name, VAR_4, VAR_5);

 if (!VAR_8)
  return VAR_7->read(VAR_7, VAR_4, VAR_5, &VAR_9, VAR_6);

 while (VAR_5 > 0) {
  unsigned long VAR_11 = (VAR_4/VAR_8)*VAR_8;
  unsigned int VAR_12 = VAR_4 - VAR_11;
  unsigned int VAR_13 = VAR_8 - VAR_12;
  if (VAR_13 > VAR_5)
   VAR_13 = VAR_5;







  if (VAR_3->cache_state != VAR_2 &&
      VAR_3->cache_offset == VAR_11) {
   FUNC_1 (VAR_6, VAR_3->cache_data + VAR_12, VAR_13);
  } else {
   VAR_10 = VAR_7->read(VAR_7, VAR_4, VAR_13, &VAR_9, VAR_6);
   if (VAR_10)
    return VAR_10;
   if (VAR_9 != VAR_13)
    return -VAR_0;
  }

  VAR_6 += VAR_13;
  VAR_4 += VAR_13;
  VAR_5 -= VAR_13;
 }

 return 0;
}
