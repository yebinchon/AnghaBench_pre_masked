
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc {int hw_path; struct ioc* next; } ;


 int VAR_0 ;
 struct ioc* VAR_1 ;

__attribute__((used)) static struct ioc * FUNC_0(int VAR_2)
{
 int VAR_3;
 struct ioc *VAR_4;

 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_4->hw_path == VAR_2)
   return VAR_4;

  VAR_4 = VAR_4->next;
 }

 return ((void*)0);
}
