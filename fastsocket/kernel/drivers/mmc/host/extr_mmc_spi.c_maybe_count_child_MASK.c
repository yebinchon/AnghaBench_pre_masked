
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ bus; } ;
struct count_children {scalar_t__ bus; scalar_t__ n; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_1, void *VAR_2)
{
 struct count_children *VAR_3 = VAR_2;

 if (VAR_1->bus == VAR_3->bus) {
  if (VAR_3->n)
   return -VAR_0;
  VAR_3->n++;
 }
 return 0;
}
