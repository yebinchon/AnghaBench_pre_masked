
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_group {unsigned char const group; } ;


 int FUNC_0 (struct if_group*) ;
 struct if_group* VAR_0 ;

__attribute__((used)) static struct if_group *FUNC_1(const unsigned char VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 & VAR_0[VAR_2].group) {
   return &VAR_0[VAR_2];
  }
 }
 return ((void*)0);
}
