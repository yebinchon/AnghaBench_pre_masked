
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ofdm_plcp_header {int* prefix; } ;



__attribute__((used)) static inline u8 FUNC_0(const struct ofdm_plcp_header *VAR_0)
{
 return VAR_0->prefix[0] & 0xf;
}
