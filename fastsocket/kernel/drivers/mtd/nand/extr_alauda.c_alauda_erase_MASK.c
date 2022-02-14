
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct erase_info {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_info*,struct erase_info*) ;
 int FUNC_1 (struct erase_info*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_3->state = VAR_4 ? VAR_1 : VAR_0;
 FUNC_1(VAR_3);
 return VAR_4;
}
