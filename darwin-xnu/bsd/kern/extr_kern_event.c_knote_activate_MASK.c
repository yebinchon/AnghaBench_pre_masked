
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {int kn_status; int kn_id; int kn_filtid; int kn_udata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct knote*) ;
 int FUNC_3 (struct knote*) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_2)
{
 if (VAR_2->kn_status & VAR_1)
  return;

 FUNC_0(FUNC_1(VAR_0),
               VAR_2->kn_udata, VAR_2->kn_status | (VAR_2->kn_id << 32),
               VAR_2->kn_filtid);

 VAR_2->kn_status |= VAR_1;
 if (FUNC_2(VAR_2))
  FUNC_3(VAR_2);
}
