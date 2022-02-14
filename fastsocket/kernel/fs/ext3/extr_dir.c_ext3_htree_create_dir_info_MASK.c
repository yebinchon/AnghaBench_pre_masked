
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_private_info {int curr_minor_hash; int curr_hash; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct dir_private_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct dir_private_info *FUNC_3(loff_t VAR_1)
{
 struct dir_private_info *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct dir_private_info), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->curr_hash = FUNC_1(VAR_1);
 VAR_2->curr_minor_hash = FUNC_2(VAR_1);
 return VAR_2;
}
