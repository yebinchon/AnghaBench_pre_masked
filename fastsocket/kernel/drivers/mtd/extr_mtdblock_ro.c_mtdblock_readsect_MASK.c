
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_blktrans_dev {TYPE_1__* mtd; } ;
struct TYPE_2__ {scalar_t__ (* read ) (TYPE_1__*,unsigned long,int,size_t*,char*) ;} ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned long,int,size_t*,char*) ;

__attribute__((used)) static int FUNC_1(struct mtd_blktrans_dev *VAR_0,
         unsigned long VAR_1, char *VAR_2)
{
 size_t VAR_3;

 if (VAR_0->mtd->read(VAR_0->mtd, (VAR_1 * 512), 512, &VAR_3, VAR_2))
  return 1;
 return 0;
}
