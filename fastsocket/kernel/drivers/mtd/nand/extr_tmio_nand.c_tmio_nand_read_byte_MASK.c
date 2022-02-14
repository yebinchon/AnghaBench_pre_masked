
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_char ;
struct tmio_nand {unsigned int read; scalar_t__ fcr; int read_good; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tmio_nand* FUNC_0 (struct mtd_info*) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u_char FUNC_2(struct mtd_info *VAR_1)
{
 struct tmio_nand *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;

 if (VAR_2->read_good--)
  return VAR_2->read;

 VAR_3 = FUNC_1(VAR_2->fcr + VAR_0);
 VAR_2->read = VAR_3 >> 8;
 return VAR_3;
}
