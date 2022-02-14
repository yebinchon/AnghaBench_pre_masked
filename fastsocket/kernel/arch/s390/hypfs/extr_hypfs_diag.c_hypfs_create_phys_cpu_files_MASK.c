
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef void dentry ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (struct super_block*,void*,char*,char*) ;
 void* FUNC_4 (struct super_block*,void*,char*,int ) ;
 void* FUNC_5 (struct super_block*,void*,char*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_10(struct super_block *VAR_2,
           struct dentry *VAR_3, void *VAR_4)
{
 struct dentry *VAR_5;
 char VAR_6[VAR_0];
 void *VAR_7;

 FUNC_9(VAR_6, VAR_0, "%i", FUNC_6(VAR_1,
           VAR_4));
 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_7 = FUNC_4(VAR_2, VAR_5, "mgmtime",
         FUNC_8(VAR_1, VAR_4));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 FUNC_2(FUNC_7(VAR_1, VAR_4), VAR_6);
 VAR_7 = FUNC_3(VAR_2, VAR_5, "type", VAR_6);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 return 0;
}
