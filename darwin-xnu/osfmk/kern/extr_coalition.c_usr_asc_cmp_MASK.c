
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coal_sort_s {int usr_order; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct coal_sort_s *VAR_2 = (const struct coal_sort_s *)VAR_0;
 const struct coal_sort_s *VAR_3 = (const struct coal_sort_s *)VAR_1;

 return (VAR_2->usr_order - VAR_3->usr_order);
}
