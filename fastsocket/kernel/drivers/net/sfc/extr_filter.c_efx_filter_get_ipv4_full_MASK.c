
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_filter_spec {int type; } ;
typedef int __be32 ;
typedef int __be16 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_filter_spec const*,int *,int *,int *,int *) ;

int FUNC_1(const struct efx_filter_spec *VAR_3,
        u8 *VAR_4, __be32 *VAR_5, __be16 *VAR_6,
        __be32 *VAR_7, __be16 *VAR_8)
{
 switch (VAR_3->type) {
 case 129:
  *VAR_4 = VAR_1;
  break;
 case 128:
  *VAR_4 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_3, VAR_7, VAR_8, VAR_5, VAR_6);
 return 0;
}
