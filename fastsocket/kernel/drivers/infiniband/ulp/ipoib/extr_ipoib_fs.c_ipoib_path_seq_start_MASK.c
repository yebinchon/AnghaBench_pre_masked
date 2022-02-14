
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
typedef void ipoib_path_iter ;
typedef int loff_t ;


 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_0, loff_t *VAR_1)
{
 struct ipoib_path_iter *VAR_2;
 loff_t VAR_3 = *VAR_1;

 VAR_2 = FUNC_0(VAR_0->private);
 if (!VAR_2)
  return ((void*)0);

 while (VAR_3--) {
  if (FUNC_1(VAR_2)) {
   FUNC_2(VAR_2);
   return ((void*)0);
  }
 }

 return VAR_2;
}
