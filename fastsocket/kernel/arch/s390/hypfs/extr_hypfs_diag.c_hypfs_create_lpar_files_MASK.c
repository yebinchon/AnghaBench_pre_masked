
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef void dentry ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct super_block*,void*,void*) ;
 void* FUNC_4 (struct super_block*,void*,char*) ;
 int FUNC_5 (int ,void*,char*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void *FUNC_8(struct super_block *VAR_2,
         struct dentry *VAR_3, void *VAR_4)
{
 struct dentry *VAR_5;
 struct dentry *VAR_6;
 char VAR_7[VAR_0 + 1];
 void *VAR_8;
 int VAR_9;

 FUNC_5(VAR_1, VAR_4, VAR_7);
 VAR_7[VAR_0] = 0;
 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_7);
 if (FUNC_1(VAR_6))
  return VAR_6;
 VAR_5 = FUNC_4(VAR_2, VAR_6, "cpus");
 if (FUNC_1(VAR_5))
  return VAR_5;
 VAR_8 = VAR_4 + FUNC_7(VAR_1);
 for (VAR_9 = 0; VAR_9 < FUNC_6(VAR_1, VAR_4); VAR_9++) {
  int VAR_10;
  VAR_10 = FUNC_3(VAR_2, VAR_5, VAR_8);
  if (VAR_10)
   return FUNC_0(VAR_10);
  VAR_8 += FUNC_2(VAR_1);
 }
 return VAR_8;
}
