
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int IO_ADDR_R; } ;
struct mtd_info {struct nand_chip* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static u_char FUNC_4(struct mtd_info *VAR_3)
{
 u_char VAR_4;
 struct nand_chip *VAR_5 = VAR_3->priv;

 FUNC_0(VAR_0, 0);
 FUNC_1(40);
 FUNC_3(~0, (VAR_1 + VAR_2));
 VAR_4 = FUNC_2(VAR_5->IO_ADDR_R);
 FUNC_0(VAR_0,
          VAR_0);

 return VAR_4;
}
