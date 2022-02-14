
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
 int FUNC_0 (char*,...) ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct il_link_quality_cmd* FUNC_1 (struct il_priv*,size_t) ;
 int FUNC_2 (struct il_priv*,size_t const*,int ,int *,size_t*) ;
 int FUNC_3 (struct il_priv*,struct il_link_quality_cmd*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct il_priv *VAR_4, const u8 *VAR_5, u8 *VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 struct il_link_quality_cmd *VAR_9;
 unsigned long VAR_10;

 if (VAR_6)
  *VAR_6 = VAR_2;

 VAR_7 = FUNC_2(VAR_4, VAR_5, 0, ((void*)0), &VAR_8);
 if (VAR_7) {
  FUNC_0("Unable to add station %pM\n", VAR_5);
  return VAR_7;
 }

 if (VAR_6)
  *VAR_6 = VAR_8;

 FUNC_4(&VAR_4->sta_lock, VAR_10);
 VAR_4->stations[VAR_8].used |= VAR_3;
 FUNC_5(&VAR_4->sta_lock, VAR_10);


 VAR_9 = FUNC_1(VAR_4, VAR_8);
 if (!VAR_9) {
  FUNC_0("Unable to initialize rate scaling for station %pM.\n",
         VAR_5);
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_9, VAR_0, 1);
 if (VAR_7)
  FUNC_0("Link quality command failed (%d)\n", VAR_7);

 FUNC_4(&VAR_4->sta_lock, VAR_10);
 VAR_4->stations[VAR_8].lq = VAR_9;
 FUNC_5(&VAR_4->sta_lock, VAR_10);

 return 0;
}
