
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct ipz_eq_handle {unsigned long handle; } ;
struct ipz_adapter_handle {int handle; } ;
struct ehca_pfeq {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned long long) ;
 unsigned long long FUNC_1 (int ,unsigned long*,int ,unsigned long long,int const,int ,int ,int ,int ,int ,int ) ;

u64 FUNC_2(const struct ipz_adapter_handle VAR_3,
        struct ehca_pfeq *VAR_4,
        const u32 VAR_5,
        const u32 VAR_6,
        struct ipz_eq_handle *VAR_7,
        u32 *VAR_8,
        u32 *VAR_9,
        u32 *VAR_10)
{
 u64 VAR_11;
 unsigned long VAR_12[VAR_2];
 u64 VAR_13;


 VAR_13 = 3ULL;


 if (VAR_5 != 1)
  VAR_13 = (1ULL << (63 - 7)) | VAR_13;
 else
  VAR_13 = (1ULL << 63) | VAR_13;

 VAR_11 = FUNC_1(VAR_0, VAR_12,
    VAR_3.handle,
    VAR_13,
    VAR_6,
    0, 0, 0, 0, 0, 0);
 VAR_7->handle = VAR_12[0];
 *VAR_8 = (u32)VAR_12[3];
 *VAR_9 = (u32)VAR_12[4];
 *VAR_10 = (u32)VAR_12[5];

 if (VAR_11 == VAR_1)
  FUNC_0("Not enough resource - ret=%lli ", VAR_11);

 return VAR_11;
}
