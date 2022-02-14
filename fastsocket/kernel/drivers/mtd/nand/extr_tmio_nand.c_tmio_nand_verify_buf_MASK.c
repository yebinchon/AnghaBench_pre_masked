
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u16 ;
struct tmio_nand {scalar_t__ fcr; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tmio_nand* FUNC_0 (struct mtd_info*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct mtd_info *VAR_2, const u_char *VAR_3, int VAR_4)
{
 struct tmio_nand *VAR_5 = FUNC_0(VAR_2);
 u16 *VAR_6 = (u16 *) VAR_3;

 for (VAR_4 >>= 1; VAR_4; VAR_4--)
  if (*(VAR_6++) != FUNC_1(VAR_5->fcr + VAR_1))
   return -VAR_0;
 return 0;
}
