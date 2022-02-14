
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_ktable {scalar_t__* pfrkt_refcnt; int pfrkt_flags; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pfr_ktable*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

void
FUNC_3(struct pfr_ktable *VAR_4)
{
 FUNC_0(VAR_3, VAR_0);

 if (VAR_4->pfrkt_refcnt[VAR_1] <= 0)
  FUNC_2("pfr_detach_table: refcount = %d.\n",
      VAR_4->pfrkt_refcnt[VAR_1]);
 else if (!--VAR_4->pfrkt_refcnt[VAR_1])
  FUNC_1(VAR_4, VAR_4->pfrkt_flags&~VAR_2);
}
