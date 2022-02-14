
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef int ext3_fsblk_t ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,int ,char*,char*) ;
 int FUNC_1 (char*,char**,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ext3_fsblk_t FUNC_3(void **VAR_1, struct super_block *VAR_2)
{
 ext3_fsblk_t VAR_3;
 char *VAR_4 = (char *) *VAR_1;

 if (!VAR_4 || FUNC_2(VAR_4, "sb=", 3) != 0)
  return 1;
 VAR_4 += 3;

 VAR_3 = FUNC_1(VAR_4, &VAR_4, 0);
 if (*VAR_4 && *VAR_4 != ',') {
  FUNC_0(VAR_2, VAR_0, "error: invalid sb specification: %s",
         (char *) *VAR_1);
  return 1;
 }
 if (*VAR_4 == ',')
  VAR_4++;
 *VAR_1 = (void *) VAR_4;
 return VAR_3;
}
