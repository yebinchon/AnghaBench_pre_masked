
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int oobsize; } ;


 int FUNC_0 (struct mtd_info*,int const*,int,int) ;
 int FUNC_1 (struct mtd_info*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0,
     const u_char *VAR_1, int VAR_2)
{
 if (VAR_2 <= VAR_0->oobsize)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else

  FUNC_0(VAR_0, VAR_1, VAR_2, 0x1);
}
