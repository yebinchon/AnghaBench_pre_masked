
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef void ipoib_path_iter ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1,
       loff_t *VAR_2)
{
 struct ipoib_path_iter *VAR_3 = VAR_1;

 (*VAR_2)++;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
