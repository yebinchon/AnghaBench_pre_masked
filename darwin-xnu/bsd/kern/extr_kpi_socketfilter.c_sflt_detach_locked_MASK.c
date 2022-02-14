
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_filter_entry {int sfe_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket_filter_entry*) ;

__attribute__((used)) static void
FUNC_1(struct socket_filter_entry *VAR_1)
{
 if ((VAR_1->sfe_flags & VAR_0) != 0) {
  VAR_1->sfe_flags &= ~VAR_0;
  FUNC_0(VAR_1);
 }
}
