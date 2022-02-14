
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mnt_namespace {int dummy; } ;
struct fs_struct {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 struct mnt_namespace* FUNC_1 (struct mnt_namespace*,struct fs_struct*) ;
 int FUNC_2 (struct mnt_namespace*) ;
 int FUNC_3 (struct mnt_namespace*) ;

struct mnt_namespace *FUNC_4(unsigned long VAR_1, struct mnt_namespace *VAR_2,
  struct fs_struct *VAR_3)
{
 struct mnt_namespace *VAR_4;

 FUNC_0(!VAR_2);
 FUNC_2(VAR_2);

 if (!(VAR_1 & VAR_0))
  return VAR_2;

 VAR_4 = FUNC_1(VAR_2, VAR_3);

 FUNC_3(VAR_2);
 return VAR_4;
}
