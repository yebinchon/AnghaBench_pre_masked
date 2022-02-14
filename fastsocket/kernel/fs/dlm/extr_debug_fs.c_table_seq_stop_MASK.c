
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rsbtbl_iter {int rsb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rsbtbl_iter*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct rsbtbl_iter *VAR_2 = VAR_1;

 if (VAR_2) {
  FUNC_0(VAR_2->rsb);
  FUNC_1(VAR_2);
 }
}
