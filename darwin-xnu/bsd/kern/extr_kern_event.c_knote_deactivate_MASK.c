
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct knote*) ;

__attribute__((used)) static void
FUNC_1(struct knote *VAR_2)
{
 VAR_2->kn_status &= ~VAR_0;
 if ((VAR_2->kn_status & VAR_1) == 0)
  FUNC_0(VAR_2);
}
