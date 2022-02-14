
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int IO_ADDR_W; } ;
struct mtd_info {struct nand_chip* priv; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_3(struct mtd_info *VAR_0, const u_char *VAR_1,
     int VAR_2)
{
 struct nand_chip *VAR_3 = VAR_0->priv;

 if (FUNC_0((unsigned long)VAR_1, 2)) {
  FUNC_1(VAR_3->IO_ADDR_W, VAR_1, VAR_2>>1);
 } else {
  int VAR_4;
  unsigned short *VAR_5 = (unsigned short *)VAR_1;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4 += 2, VAR_5++)
   FUNC_2(*VAR_5, VAR_3->IO_ADDR_W);
 }
}
