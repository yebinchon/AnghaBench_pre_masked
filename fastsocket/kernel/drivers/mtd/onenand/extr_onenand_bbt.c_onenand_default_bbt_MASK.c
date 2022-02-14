
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {struct bbm_info* bbm; } ;
struct mtd_info {struct onenand_chip* priv; } ;
struct bbm_info {int * badblock_pattern; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bbm_info* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct mtd_info*,int *) ;

int FUNC_2(struct mtd_info *VAR_3)
{
 struct onenand_chip *VAR_4 = VAR_3->priv;
 struct bbm_info *VAR_5;

 VAR_4->bbm = FUNC_0(sizeof(struct bbm_info), VAR_1);
 if (!VAR_4->bbm)
  return -VAR_0;

 VAR_5 = VAR_4->bbm;


 if (!VAR_5->badblock_pattern)
  VAR_5->badblock_pattern = &VAR_2;

 return FUNC_1(VAR_3, VAR_5->badblock_pattern);
}
