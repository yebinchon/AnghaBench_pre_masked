
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_radeon_private {int cs_id_scnt; int cs_id_wcnt; } ;



__attribute__((used)) static u32 FUNC_0(struct drm_radeon_private *VAR_0)
{

 VAR_0->cs_id_scnt = (VAR_0->cs_id_scnt + 1) & 0x00FFFFFF;
 if (!VAR_0->cs_id_scnt) {

  VAR_0->cs_id_wcnt += 0x01000000;

  VAR_0->cs_id_scnt = 1;
 }
 return (VAR_0->cs_id_scnt | VAR_0->cs_id_wcnt);
}
