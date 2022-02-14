
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct mtd_info {int dummy; } ;
struct file_system_type {int dummy; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*) ;
 struct mtd_info* FUNC_3 (int *,int) ;
 int FUNC_4 (struct file_system_type*,int,char const*,void*,struct mtd_info*,int (*) (struct super_block*,void*,int),struct vfsmount*) ;

__attribute__((used)) static int FUNC_5(struct file_system_type *VAR_0, int VAR_1,
    const char *VAR_2, void *VAR_3, int VAR_4,
    int (*VAR_5)(struct super_block *, void *, int),
    struct vfsmount *VAR_6)
{
 struct mtd_info *VAR_7;

 VAR_7 = FUNC_3(((void*)0), VAR_4);
 if (FUNC_1(VAR_7)) {
  FUNC_0(0, "MTDSB: Device #%u doesn't appear to exist\n", VAR_4);
  return FUNC_2(VAR_7);
 }

 return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7, VAR_5,
         VAR_6);
}
