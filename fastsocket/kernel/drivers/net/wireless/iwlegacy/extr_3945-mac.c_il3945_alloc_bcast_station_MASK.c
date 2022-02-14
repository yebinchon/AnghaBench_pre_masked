
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct il_priv {int sta_lock; TYPE_1__* stations; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (struct il_priv*,int ,int,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_5)
{
 unsigned long VAR_6;
 u8 VAR_7;

 FUNC_2(&VAR_5->sta_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_4, 0, ((void*)0));
 if (VAR_7 == VAR_1) {
  FUNC_0("Unable to prepare broadcast station\n");
  FUNC_3(&VAR_5->sta_lock, VAR_6);

  return -VAR_0;
 }

 VAR_5->stations[VAR_7].used |= VAR_3;
 VAR_5->stations[VAR_7].used |= VAR_2;
 FUNC_3(&VAR_5->sta_lock, VAR_6);

 return 0;
}
