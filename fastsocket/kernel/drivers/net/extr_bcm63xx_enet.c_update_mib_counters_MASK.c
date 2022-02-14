
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct bcm_enet_stats {int mib_reg; int stat_offset; int sizeof_stat; } ;
struct bcm_enet_priv {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct bcm_enet_stats* VAR_1 ;
 scalar_t__ FUNC_2 (struct bcm_enet_priv*,int ) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct bcm_enet_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const struct bcm_enet_stats *VAR_5;
  u32 VAR_6;
  char *VAR_7;

  VAR_5 = &VAR_1[VAR_4];
  if (VAR_5->mib_reg == -1)
   continue;

  VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_5->mib_reg));
  VAR_7 = (char *)VAR_3 + VAR_5->stat_offset;

  if (VAR_5->sizeof_stat == sizeof(u64))
   *(u64 *)VAR_7 += VAR_6;
  else
   *(u32 *)VAR_7 += VAR_6;
 }



 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  (void)FUNC_2(VAR_3, FUNC_1(VAR_2[VAR_4]));
}
