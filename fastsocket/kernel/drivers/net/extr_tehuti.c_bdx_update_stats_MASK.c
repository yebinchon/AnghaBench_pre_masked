
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct bdx_stats {int dummy; } ;
struct bdx_priv {struct bdx_stats hw_stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bdx_priv*,int) ;

__attribute__((used)) static void FUNC_2(struct bdx_priv *VAR_0)
{
 struct bdx_stats *VAR_1 = &VAR_0->hw_stats;
 u64 *VAR_2 = (u64 *) VAR_1;
 int VAR_3;
 int VAR_4;


 VAR_4 = 0x7200;

 for (VAR_3 = 0; VAR_3 < 12; VAR_3++) {
  VAR_2[VAR_3] = FUNC_1(VAR_0, VAR_4);
  VAR_4 += 0x10;
 }
 FUNC_0(VAR_4 != 0x72C0);

 VAR_4 = 0x72F0;
 for (; VAR_3 < 16; VAR_3++) {
  VAR_2[VAR_3] = FUNC_1(VAR_0, VAR_4);
  VAR_4 += 0x10;
 }
 FUNC_0(VAR_4 != 0x7330);

 VAR_4 = 0x7370;
 for (; VAR_3 < 19; VAR_3++) {
  VAR_2[VAR_3] = FUNC_1(VAR_0, VAR_4);
  VAR_4 += 0x10;
 }
 FUNC_0(VAR_4 != 0x73A0);

 VAR_4 = 0x73C0;
 for (; VAR_3 < 23; VAR_3++) {
  VAR_2[VAR_3] = FUNC_1(VAR_0, VAR_4);
  VAR_4 += 0x10;
 }
 FUNC_0(VAR_4 != 0x7400);
 FUNC_0((sizeof(struct bdx_stats) / sizeof(u64)) != VAR_3);
}
