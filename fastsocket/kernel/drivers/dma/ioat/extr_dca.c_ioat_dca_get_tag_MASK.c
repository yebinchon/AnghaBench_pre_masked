
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ioat_dca_priv {int* tag_map; } ;
struct device {int dummy; } ;
struct dca_provider {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ioat_dca_priv* FUNC_1 (struct dca_provider*) ;

__attribute__((used)) static u8 FUNC_2(struct dca_provider *VAR_2,
      struct device *VAR_3,
      int VAR_4)
{
 struct ioat_dca_priv *VAR_5 = FUNC_1(VAR_2);
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11;

 VAR_11 = 0;
 VAR_7 = FUNC_0(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_10 = VAR_5->tag_map[VAR_6];
  if (VAR_10 & VAR_0) {
   VAR_8 = VAR_10 & ~VAR_0;
   VAR_9 = (VAR_7 & (1 << VAR_8)) ? 1 : 0;
  } else {
   VAR_9 = VAR_10 ? 1 : 0;
  }
  VAR_11 |= (VAR_9 << VAR_6);
 }
 return VAR_11;
}
