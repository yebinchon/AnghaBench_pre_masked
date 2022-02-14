
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long avpnm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_3, int VAR_4,
          int VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = (VAR_3 >> 23) & ~(VAR_2[VAR_4].avpnm);
 VAR_6 <<= VAR_0;
 VAR_6 |= ((unsigned long) VAR_5) << VAR_1;
 return VAR_6;
}
