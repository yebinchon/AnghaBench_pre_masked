
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u8 ;
struct mtd_info {scalar_t__ writesize; struct alauda* priv; } ;
struct alauda {int bytemask; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,int,size_t,size_t*,int *) ;
 int FUNC_1 (struct mtd_info*,int,int *,int *,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
  size_t *VAR_5, u_char *VAR_6)
{
 struct alauda *VAR_7 = VAR_2->priv;
 int VAR_8, VAR_9=0, VAR_10=0;

 if ((VAR_3 & VAR_7->bytemask) || (VAR_4 & VAR_7->bytemask))
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 *VAR_5 = VAR_4;
 while (VAR_4) {
  u8 VAR_11[16];

  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_11,
    &VAR_9, &VAR_10);
  if (VAR_8)
   return VAR_8;

  VAR_6 += VAR_2->writesize;
  VAR_3 += VAR_2->writesize;
  VAR_4 -= VAR_2->writesize;
 }
 VAR_8 = 0;
 if (VAR_9)
  VAR_8 = -VAR_1;
 if (VAR_10)
  VAR_8 = -VAR_0;
 return VAR_8;
}
