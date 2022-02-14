
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (scalar_t__,void*) ;
 int FUNC_4 (scalar_t__,void*) ;
 scalar_t__ FUNC_5 (scalar_t__,void*) ;
 scalar_t__ FUNC_6 (scalar_t__,void*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (struct super_block*,struct dentry*,char*,char*) ;
 void* FUNC_9 (struct super_block*,struct dentry*,char*,scalar_t__) ;
 struct dentry* FUNC_10 (struct super_block*,struct dentry*,char*) ;
 int FUNC_11 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_3,
      struct dentry *VAR_4, void *VAR_5)
{
 struct dentry *VAR_6;
 char VAR_7[VAR_1];
 void *VAR_8;

 FUNC_11(VAR_7, VAR_1, "%d", FUNC_3(VAR_2,
           VAR_5));
 VAR_6 = FUNC_10(VAR_3, VAR_4, VAR_7);
 VAR_8 = FUNC_9(VAR_3, VAR_6, "mgmtime",
         FUNC_2(VAR_2, VAR_5) -
         FUNC_5(VAR_2, VAR_5));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_8 = FUNC_9(VAR_3, VAR_6, "cputime",
         FUNC_5(VAR_2, VAR_5));
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 if (VAR_2 == VAR_0) {
  VAR_8 = FUNC_9(VAR_3, VAR_6, "onlinetime",
          FUNC_6(VAR_2,
           VAR_5));
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }
 FUNC_7(FUNC_4(VAR_2, VAR_5), VAR_7);
 VAR_8 = FUNC_8(VAR_3, VAR_6, "type", VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 return 0;
}
