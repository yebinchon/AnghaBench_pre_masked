
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tmio_nand {scalar_t__ fcr; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tmio_nand* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static void
FUNC_2(struct mtd_info *VAR_1, const u_char *VAR_2, int VAR_3)
{
 struct tmio_nand *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4->fcr + VAR_0, VAR_2, VAR_3 >> 1);
}
