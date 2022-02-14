
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {int sta_lock; TYPE_1__* stations; } ;
struct il_link_quality_cmd {int dummy; } ;
struct TYPE_2__ {struct il_link_quality_cmd* lq; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct il_link_quality_cmd* FUNC_1 (struct il_priv*,size_t) ;
 int VAR_5 ;
 size_t FUNC_2 (struct il_priv*,int ,int,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int
FUNC_5(struct il_priv *VAR_6)
{
 struct il_link_quality_cmd *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9;

 FUNC_3(&VAR_6->sta_lock, VAR_8);
 VAR_9 = FUNC_2(VAR_6, VAR_5, 0, ((void*)0));
 if (VAR_9 == VAR_2) {
  FUNC_0("Unable to prepare broadcast station\n");
  FUNC_4(&VAR_6->sta_lock, VAR_8);

  return -VAR_0;
 }

 VAR_6->stations[VAR_9].used |= VAR_4;
 VAR_6->stations[VAR_9].used |= VAR_3;
 FUNC_4(&VAR_6->sta_lock, VAR_8);

 VAR_7 = FUNC_1(VAR_6, VAR_9);
 if (!VAR_7) {
  FUNC_0
      ("Unable to initialize rate scaling for bcast station.\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_6->sta_lock, VAR_8);
 VAR_6->stations[VAR_9].lq = VAR_7;
 FUNC_4(&VAR_6->sta_lock, VAR_8);

 return 0;
}
