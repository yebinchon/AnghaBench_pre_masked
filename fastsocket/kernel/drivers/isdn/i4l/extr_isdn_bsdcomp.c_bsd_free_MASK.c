
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_db {int * lens; int * dict; } ;


 int FUNC_0 (struct bsd_db*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (void *VAR_0)
{
 struct bsd_db *VAR_1 = (struct bsd_db *) VAR_0;

 if (VAR_1) {



  FUNC_1(VAR_1->dict);
  VAR_1->dict = ((void*)0);




  FUNC_1(VAR_1->lens);
  VAR_1->lens = ((void*)0);




  FUNC_0(VAR_1);
 }
}
