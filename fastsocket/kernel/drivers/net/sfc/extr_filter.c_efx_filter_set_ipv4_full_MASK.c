
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_filter_spec {int flags; scalar_t__ type; } ;
typedef int __be32 ;
typedef scalar_t__ __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (struct efx_filter_spec*,int ,scalar_t__,int ,scalar_t__) ;

int FUNC_2(struct efx_filter_spec *VAR_6, u8 VAR_7,
        __be32 VAR_8, __be16 VAR_9,
        __be32 VAR_10, __be16 VAR_11)
{
 FUNC_0(!(VAR_6->flags & VAR_0));


 if (VAR_6->type != VAR_3)
  return -VAR_5;

 if (VAR_9 == 0 || VAR_11 == 0)
  return -VAR_4;

 switch (VAR_7) {
 case 129:
  VAR_6->type = VAR_1;
  break;
 case 128:
  VAR_6->type = VAR_2;
  break;
 default:
  return -VAR_5;
 }

 FUNC_1(VAR_6, VAR_10, VAR_11, VAR_8, VAR_9);
 return 0;
}
