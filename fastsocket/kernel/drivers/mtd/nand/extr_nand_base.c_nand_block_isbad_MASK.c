
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2)
{

 if (VAR_2 > VAR_1->size)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, 1, 0);
}
