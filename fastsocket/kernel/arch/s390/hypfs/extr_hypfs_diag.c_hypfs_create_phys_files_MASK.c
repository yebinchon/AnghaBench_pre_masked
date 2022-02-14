
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef void dentry ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (struct super_block*,void*,void*) ;
 void* FUNC_3 (struct super_block*,void*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void *FUNC_7(struct super_block *VAR_1,
         struct dentry *VAR_2, void *VAR_3)
{
 int VAR_4;
 void *VAR_5;
 struct dentry *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2, "cpus");
 if (FUNC_1(VAR_6))
  return VAR_6;
 VAR_5 = VAR_3 + FUNC_6(VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_5(VAR_0, VAR_3); VAR_4++) {
  int VAR_7;
  VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_5);
  if (VAR_7)
   return FUNC_0(VAR_7);
  VAR_5 += FUNC_4(VAR_0);
 }
 return VAR_5;
}
