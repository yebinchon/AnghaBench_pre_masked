
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_sb_info {int dummy; } ;
struct autofs_info {int dummy; } ;


 int VAR_0 ;
 struct autofs_info* FUNC_0 (int *,struct autofs_sb_info*,int) ;

__attribute__((used)) static struct autofs_info *FUNC_1(struct autofs_sb_info *VAR_1)
{
 struct autofs_info *VAR_2;

 VAR_2 = FUNC_0(((void*)0), VAR_1, VAR_0 | 0755);
 if (!VAR_2)
  return ((void*)0);

 return VAR_2;
}
