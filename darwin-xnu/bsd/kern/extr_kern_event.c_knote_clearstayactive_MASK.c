
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct knote*) ;
 int FUNC_1 (struct knote*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct knote *VAR_1)
{
 FUNC_2(FUNC_1(VAR_1));
 VAR_1->kn_status &= ~VAR_0;
 FUNC_0(VAR_1);
 FUNC_3(FUNC_1(VAR_1));
}
