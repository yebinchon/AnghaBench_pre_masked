
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intelfb_info {scalar_t__ pipe; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_2(struct intelfb_info *VAR_6, unsigned VAR_7,
    unsigned VAR_8, unsigned VAR_9, unsigned VAR_10,
    unsigned VAR_11)
{
 u32 VAR_12 = (VAR_6->pipe == VAR_5) ?
     VAR_3 : VAR_4;






 FUNC_1(VAR_12 + (VAR_7 << 2),
        (VAR_8 << VAR_2) |
        (VAR_9 << VAR_1) |
        (VAR_10 << VAR_0));
}
