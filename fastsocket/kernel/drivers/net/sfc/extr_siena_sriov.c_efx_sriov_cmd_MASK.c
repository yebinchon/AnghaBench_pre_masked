
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efx_nic {int vf_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct efx_nic*,int ,int *,int,int *,int,size_t*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_12, bool VAR_13,
    unsigned *VAR_14, unsigned *VAR_15)
{
 u8 VAR_16[VAR_5];
 u8 VAR_17[VAR_6];
 unsigned VAR_18, VAR_19;
 size_t VAR_20;
 int VAR_21;

 FUNC_1(VAR_16, VAR_7, VAR_13 ? 1 : 0);
 FUNC_1(VAR_16, VAR_9, VAR_0);
 FUNC_1(VAR_16, VAR_8, VAR_12->vf_count);

 VAR_21 = FUNC_2(VAR_12, VAR_4, VAR_16, VAR_5,
     VAR_17, VAR_6, &VAR_20);
 if (VAR_21)
  return VAR_21;
 if (VAR_20 < VAR_6)
  return -VAR_2;

 VAR_19 = FUNC_0(VAR_17, VAR_10);
 VAR_18 = FUNC_0(VAR_17, VAR_11);
 if (VAR_18 > VAR_1)
  return -VAR_3;

 if (VAR_14)
  *VAR_14 = VAR_18;
 if (VAR_15)
  *VAR_15 = VAR_19;

 return 0;
}
