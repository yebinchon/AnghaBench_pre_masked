
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_filter_entry {int sfe_refcount; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct socket_filter_entry *VAR_0)
{
 if (FUNC_0(&VAR_0->sfe_refcount) <= 0) {
  FUNC_1("sflt_entry_retain - sfe_refcount <= 0\n");

 }
}
