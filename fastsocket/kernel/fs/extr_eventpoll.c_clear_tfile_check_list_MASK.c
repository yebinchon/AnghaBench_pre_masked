
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tfile_check {struct tfile_check* next; scalar_t__ count; } ;


 struct tfile_check VAR_0 ;
 int FUNC_0 (struct tfile_check*) ;
 struct tfile_check* VAR_1 ;
 int FUNC_1 (struct tfile_check*) ;

void FUNC_2(void)
{
 struct tfile_check *VAR_2, *VAR_3;

 VAR_2 = VAR_0.next;
 VAR_0.next = ((void*)0);
 FUNC_0(&VAR_0);
 VAR_0.count = 0;

 while (VAR_2) {
  FUNC_0(VAR_2);
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_1(VAR_3);
 }
 VAR_1 = &VAR_0;
}
