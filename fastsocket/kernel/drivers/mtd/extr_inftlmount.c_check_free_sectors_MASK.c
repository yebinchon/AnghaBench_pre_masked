
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mtd_info {int oobsize; scalar_t__ (* read ) (struct mtd_info*,unsigned int,int,size_t*,int *) ;} ;
struct TYPE_2__ {struct mtd_info* mtd; } ;
struct INFTLrecord {TYPE_1__ mbd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mtd_info*,unsigned int,int,size_t*,int *) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (struct mtd_info*,unsigned int,int,size_t*,int *) ;

__attribute__((used)) static int FUNC_3(struct INFTLrecord *VAR_1, unsigned int VAR_2,
 int VAR_3, int VAR_4)
{
 u8 VAR_5[VAR_0 + VAR_1->mbd.mtd->oobsize];
 struct mtd_info *VAR_6 = VAR_1->mbd.mtd;
 size_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 += VAR_0) {
  if (VAR_6->read(VAR_6, VAR_2, VAR_0, &VAR_7, VAR_5))
   return -1;
  if (FUNC_1(VAR_5, 0xff, VAR_0) != 0)
   return -1;

  if (VAR_4) {
   if(FUNC_0(VAR_6, VAR_2, VAR_6->oobsize,
       &VAR_7, &VAR_5[VAR_0]) < 0)
    return -1;
   if (FUNC_1(VAR_5 + VAR_0, 0xff, VAR_6->oobsize) != 0)
    return -1;
  }
  VAR_2 += VAR_0;
 }

 return 0;
}
