
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef char u8 ;
typedef scalar_t__ u32 ;
struct mtd_info {scalar_t__ writesize; struct alauda* priv; } ;
struct alauda {scalar_t__ bytemask; scalar_t__ pagemask; TYPE_1__* card; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ pageshift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,scalar_t__) ;
 int FUNC_1 (struct mtd_info*,scalar_t__,void*,char*) ;
 int FUNC_2 (struct mtd_info*,int const*,char*) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
  size_t *VAR_5, const u_char *VAR_6)
{
 struct alauda *VAR_7 = VAR_2->priv;
 int VAR_8;

 if ((VAR_3 & VAR_7->bytemask) || (VAR_4 & VAR_7->bytemask))
  return -VAR_0;

 *VAR_5 = VAR_4;
 while (VAR_4) {
  u32 VAR_9 = (VAR_3 >> VAR_7->card->pageshift) & VAR_7->pagemask;
  u8 VAR_10[16] = { 'h', 'e', 'l', 'l', 'o', 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};


  if (VAR_9 == 0) {
   VAR_8 = FUNC_0(VAR_2, VAR_3);
   if (VAR_8) {
    return -VAR_1;
   }
  }
  FUNC_2(VAR_2, VAR_6, &VAR_10[13]);
  FUNC_2(VAR_2, VAR_6+256, &VAR_10[8]);

  VAR_8 = FUNC_1(VAR_2, VAR_3, (void*)VAR_6, VAR_10);
  if (VAR_8)
   return VAR_8;

  VAR_6 += VAR_2->writesize;
  VAR_3 += VAR_2->writesize;
  VAR_4 -= VAR_2->writesize;
 }
 return 0;
}
