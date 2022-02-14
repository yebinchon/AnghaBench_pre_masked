
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {scalar_t__ kn_inuse; int kn_status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct knote*) ;

__attribute__((used)) static void
FUNC_2(struct knote *VAR_2)
{
 FUNC_0(VAR_2->kn_inuse == 0);
 FUNC_0((VAR_2->kn_status & VAR_0) == 0);
 FUNC_1(VAR_1, VAR_2);
}
