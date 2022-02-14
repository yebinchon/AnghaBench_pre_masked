
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pt_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(
 pt_desc_t *VAR_5,
 unsigned int VAR_6)
{
 FUNC_0(&VAR_3, 0);
 while (VAR_6 != 0) {
  (*(void **)VAR_5) = (void *)VAR_2;
  VAR_2 = VAR_5;
  VAR_5++;
  VAR_6--;
  VAR_1++;
 }
 VAR_4 = VAR_0;
}
