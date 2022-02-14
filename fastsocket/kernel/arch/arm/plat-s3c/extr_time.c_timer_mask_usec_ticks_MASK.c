
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_2 / 1000;

 return ((1000 << VAR_0) * VAR_1 + (VAR_3 >> 1)) / VAR_3;
}
