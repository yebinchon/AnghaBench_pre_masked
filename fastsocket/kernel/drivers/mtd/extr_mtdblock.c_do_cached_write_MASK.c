
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdblk_dev {unsigned int cache_size; scalar_t__ cache_state; unsigned long cache_offset; int cache_data; struct mtd_info* mtd; } ;
struct mtd_info {int (* write ) (struct mtd_info*,unsigned long,int,size_t*,char const*) ;int (* read ) (struct mtd_info*,unsigned long,unsigned int,size_t*,int ) ;int name; } ;


 int FUNC_0 (int ,char*,int ,unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct mtd_info*,unsigned long,unsigned int,char const*) ;
 int FUNC_2 (int ,char const*,unsigned int) ;
 int FUNC_3 (struct mtd_info*,unsigned long,int,size_t*,char const*) ;
 int FUNC_4 (struct mtd_info*,unsigned long,unsigned int,size_t*,int ) ;
 int FUNC_5 (struct mtdblk_dev*) ;

__attribute__((used)) static int FUNC_6 (struct mtdblk_dev *VAR_5, unsigned long VAR_6,
       int VAR_7, const char *VAR_8)
{
 struct mtd_info *VAR_9 = VAR_5->mtd;
 unsigned int VAR_10 = VAR_5->cache_size;
 size_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_1, "mtdblock: write on \"%s\" at 0x%lx, size 0x%x\n",
  VAR_9->name, VAR_6, VAR_7);

 if (!VAR_10)
  return VAR_9->write(VAR_9, VAR_6, VAR_7, &VAR_11, VAR_8);

 while (VAR_7 > 0) {
  unsigned long VAR_13 = (VAR_6/VAR_10)*VAR_10;
  unsigned int VAR_14 = VAR_6 - VAR_13;
  unsigned int VAR_15 = VAR_10 - VAR_14;
  if( VAR_15 > VAR_7 )
   VAR_15 = VAR_7;

  if (VAR_15 == VAR_10) {





   VAR_12 = FUNC_1 (VAR_9, VAR_6, VAR_15, VAR_8);
   if (VAR_12)
    return VAR_12;
  } else {


   if (VAR_5->cache_state == VAR_3 &&
       VAR_5->cache_offset != VAR_13) {
    VAR_12 = FUNC_5(VAR_5);
    if (VAR_12)
     return VAR_12;
   }

   if (VAR_5->cache_state == VAR_4 ||
       VAR_5->cache_offset != VAR_13) {

    VAR_5->cache_state = VAR_4;
    VAR_12 = VAR_9->read(VAR_9, VAR_13, VAR_10,
      &VAR_11, VAR_5->cache_data);
    if (VAR_12)
     return VAR_12;
    if (VAR_11 != VAR_10)
     return -VAR_0;

    VAR_5->cache_offset = VAR_13;
    VAR_5->cache_size = VAR_10;
    VAR_5->cache_state = VAR_2;
   }


   FUNC_2 (VAR_5->cache_data + VAR_14, VAR_8, VAR_15);
   VAR_5->cache_state = VAR_3;
  }

  VAR_8 += VAR_15;
  VAR_6 += VAR_15;
  VAR_7 -= VAR_15;
 }

 return 0;
}
