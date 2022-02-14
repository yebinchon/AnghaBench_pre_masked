
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {struct b43_dfsentry* dfsentry; } ;
struct b43_txstatus_log {int end; struct b43_txstatus* log; } ;
struct b43_txstatus {int dummy; } ;
struct b43_dfsentry {struct b43_txstatus_log txstatlog; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_txstatus*,struct b43_txstatus const*,int) ;

void FUNC_1(struct b43_wldev *VAR_1,
       const struct b43_txstatus *VAR_2)
{
 struct b43_dfsentry *VAR_3 = VAR_1->dfsentry;
 struct b43_txstatus_log *VAR_4;
 struct b43_txstatus *VAR_5;
 int VAR_6;

 if (!VAR_3)
  return;
 VAR_4 = &VAR_3->txstatlog;
 VAR_6 = VAR_4->end + 1;
 if (VAR_6 == VAR_0)
  VAR_6 = 0;
 VAR_4->end = VAR_6;
 VAR_5 = &(VAR_4->log[VAR_6]);
 FUNC_0(VAR_5, VAR_2, sizeof(*VAR_5));
}
