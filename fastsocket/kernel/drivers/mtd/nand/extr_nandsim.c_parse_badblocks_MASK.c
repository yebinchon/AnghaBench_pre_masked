
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int secsz; } ;
struct nandsim {TYPE_1__ geom; } ;
struct mtd_info {scalar_t__ (* block_markbad ) (struct mtd_info*,unsigned int) ;} ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* VAR_1 ;
 unsigned int FUNC_1 (char*,char**,int ) ;
 scalar_t__ FUNC_2 (struct mtd_info*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct nandsim *VAR_2, struct mtd_info *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 unsigned int VAR_6;
 loff_t VAR_7;

 if (!VAR_1)
  return 0;
 VAR_4 = VAR_1;
 do {
  VAR_5 = (*VAR_4 == '0' ? 1 : 0);
  VAR_6 = FUNC_1(VAR_4, &VAR_4, 0);
  if (!VAR_5 && !VAR_6) {
   FUNC_0("invalid badblocks.\n");
   return -VAR_0;
  }
  VAR_7 = VAR_6 * VAR_2->geom.secsz;
  if (VAR_3->block_markbad(VAR_3, VAR_7)) {
   FUNC_0("invalid badblocks.\n");
   return -VAR_0;
  }
  if (*VAR_4 == ',')
   VAR_4 += 1;
 } while (*VAR_4);
 return 0;
}
