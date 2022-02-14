
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_rf {int (* patch_6m_band_edge ) (struct zd_rf*,int ) ;} ;


 int FUNC_0 (struct zd_rf*,int ) ;

int FUNC_1(struct zd_rf *VAR_0, u8 VAR_1)
{
 if (!VAR_0->patch_6m_band_edge)
  return 0;

 return VAR_0->patch_6m_band_edge(VAR_0, VAR_1);
}
