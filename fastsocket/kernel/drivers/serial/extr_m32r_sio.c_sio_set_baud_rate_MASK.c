
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long bus_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static inline void FUNC_1(unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = VAR_2.bus_clock / (VAR_3 * 16);
 VAR_5 = (VAR_2.bus_clock - (VAR_4 * VAR_3 * 16)) / VAR_3;
 VAR_4 -= 1;
 VAR_5 = (VAR_5 + 1) >> 1;

 FUNC_0(VAR_4, VAR_0);
 FUNC_0(VAR_5, VAR_1);
}
