
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ipz_adapter_handle {int handle; } ;


 int FUNC_0 (int ,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_1 (int ,int ,int const,int ,int ,int ,int ,int ) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_7,
         const u8 VAR_8, const u32 VAR_9,
         const u8 VAR_10, const int VAR_11)
{
 u64 VAR_12 = VAR_9;

 if (VAR_11 & VAR_6)
  VAR_12 |= FUNC_0(VAR_3, 1);
 if (VAR_11 & VAR_4)
  VAR_12 |= FUNC_0(VAR_1, VAR_10);
 if (VAR_11 & VAR_5)
  VAR_12 |= FUNC_0(VAR_2, 1);

 return FUNC_1(VAR_0,
           VAR_7.handle,
           VAR_8,
           VAR_12,
           0, 0, 0, 0);
}
