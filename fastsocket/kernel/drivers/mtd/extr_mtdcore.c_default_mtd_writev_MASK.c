
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int (* write ) (struct mtd_info*,size_t,size_t,size_t*,int ) ;} ;
struct kvec {size_t iov_len; int iov_base; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,size_t,size_t,size_t*,int ) ;

int FUNC_1(struct mtd_info *VAR_1, const struct kvec *VAR_2,
         unsigned long VAR_3, loff_t VAR_4, size_t *VAR_5)
{
 unsigned long VAR_6;
 size_t VAR_7 = 0, VAR_8;
 int VAR_9 = 0;

 if(!VAR_1->write) {
  VAR_9 = -VAR_0;
 } else {
  for (VAR_6=0; VAR_6<VAR_3; VAR_6++) {
   if (!VAR_2[VAR_6].iov_len)
    continue;
   VAR_9 = VAR_1->write(VAR_1, VAR_4, VAR_2[VAR_6].iov_len, &VAR_8, VAR_2[VAR_6].iov_base);
   VAR_7 += VAR_8;
   if (VAR_9 || VAR_8 != VAR_2[VAR_6].iov_len)
    break;
   VAR_4 += VAR_2[VAR_6].iov_len;
  }
 }
 if (VAR_5)
  *VAR_5 = VAR_7;
 return VAR_9;
}
