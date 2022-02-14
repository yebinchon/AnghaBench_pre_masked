
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct il_scale_tbl_info {size_t ant_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t* VAR_3 ;
 int FUNC_0 (size_t,size_t) ;

__attribute__((used)) static int
FUNC_1(u32 VAR_4, u32 *VAR_5,
    struct il_scale_tbl_info *VAR_6)
{
 u8 VAR_7;

 if (!VAR_6->ant_type || VAR_6->ant_type > VAR_0)
  return 0;

 if (!FUNC_0(VAR_4, VAR_6->ant_type))
  return 0;

 VAR_7 = VAR_3[VAR_6->ant_type];

 while (VAR_7 != VAR_6->ant_type &&
        !FUNC_0(VAR_4, VAR_7))
  VAR_7 = VAR_3[VAR_7];

 if (VAR_7 == VAR_6->ant_type)
  return 0;

 VAR_6->ant_type = VAR_7;
 *VAR_5 &= ~VAR_1;
 *VAR_5 |= VAR_7 << VAR_2;
 return 1;
}
