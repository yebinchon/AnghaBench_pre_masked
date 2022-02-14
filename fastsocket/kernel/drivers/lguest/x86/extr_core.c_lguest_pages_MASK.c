
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lguest_pages {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct lguest_pages *FUNC_0(unsigned int VAR_3)
{
 return &(((struct lguest_pages *)
    (VAR_2 + VAR_1*VAR_0))[VAR_3]);
}
