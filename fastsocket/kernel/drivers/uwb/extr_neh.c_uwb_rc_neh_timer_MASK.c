
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_neh {scalar_t__ context; struct uwb_rc* rc; } ;
struct uwb_rc {int neh_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_rc_neh*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uwb_rc_neh*,int *,int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct uwb_rc_neh *VAR_2 = (struct uwb_rc_neh *)VAR_1;
 struct uwb_rc *VAR_3 = VAR_2->rc;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->neh_lock, VAR_4);
 if (VAR_2->context)
  FUNC_0(VAR_3, VAR_2);
 else
  VAR_2 = ((void*)0);
 FUNC_2(&VAR_3->neh_lock, VAR_4);

 if (VAR_2)
  FUNC_3(VAR_2, ((void*)0), -VAR_0);
}
