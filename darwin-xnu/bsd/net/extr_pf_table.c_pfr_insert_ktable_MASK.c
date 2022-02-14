
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfr_ktable {TYPE_1__* pfrkt_root; } ;
struct TYPE_2__ {int pfrkt_flags; int * pfrkt_refcnt; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,struct pfr_ktable*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(struct pfr_ktable *VAR_7)
{
 FUNC_0(VAR_3, VAR_0);

 FUNC_1(VAR_5, &VAR_6, VAR_7);
 VAR_4++;
 if (VAR_7->pfrkt_root != ((void*)0))
  if (!VAR_7->pfrkt_root->pfrkt_refcnt[VAR_1]++)
   FUNC_2(VAR_7->pfrkt_root,
       VAR_7->pfrkt_root->pfrkt_flags|VAR_2);
}
