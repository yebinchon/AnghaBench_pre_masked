
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ds1wm_data {int bus_shift; scalar_t__ map; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct ds1wm_data *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->map + (VAR_1 << VAR_0->bus_shift));
}
