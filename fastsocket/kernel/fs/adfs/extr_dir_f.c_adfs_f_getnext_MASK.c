
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int dummy; } ;
struct adfs_dir {int pos; } ;


 unsigned int FUNC_0 (struct adfs_dir*,int,struct object_info*) ;

__attribute__((used)) static int
FUNC_1(struct adfs_dir *VAR_0, struct object_info *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_0->pos, VAR_1);
 if (VAR_2 == 0)
  VAR_0->pos += 26;

 return VAR_2;
}
