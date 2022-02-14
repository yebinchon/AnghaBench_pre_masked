
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {scalar_t__ natt_last_activity; TYPE_1__* sah; } ;
struct secasindex {int mode; int proto; int src; int dst; } ;
typedef int saidx_swap_sent_addr ;
struct TYPE_2__ {struct secasindex saidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct secasindex*,int) ;
 scalar_t__ FUNC_1 (struct secasindex*,struct secasindex*,int) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3 (struct secasvar *VAR_3,
          struct secasvar *VAR_4)
{
 struct secasindex VAR_5;


 if (VAR_3 == VAR_4 ||
     VAR_4->natt_last_activity == VAR_2) {
  return;
 }



 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_2(&VAR_5.src, &VAR_3->sah->saidx.dst, sizeof(VAR_5.src));
 FUNC_2(&VAR_5.dst, &VAR_3->sah->saidx.src, sizeof(VAR_5.dst));
 VAR_5.proto = VAR_3->sah->saidx.proto;
 VAR_5.mode = VAR_3->sah->saidx.mode;


 if (FUNC_1(&VAR_3->sah->saidx, &VAR_4->sah->saidx, VAR_0 | VAR_1) ||
     FUNC_1(&VAR_5, &VAR_4->sah->saidx, VAR_0 | VAR_1)) {
  VAR_4->natt_last_activity = VAR_2;
 }
}
