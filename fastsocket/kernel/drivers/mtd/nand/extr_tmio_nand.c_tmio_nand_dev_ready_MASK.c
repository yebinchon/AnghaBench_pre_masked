
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {scalar_t__ fcr; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tmio_nand* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2)
{
 struct tmio_nand *VAR_3 = FUNC_0(VAR_2);

 return !(FUNC_1(VAR_3->fcr + VAR_0) & VAR_1);
}
