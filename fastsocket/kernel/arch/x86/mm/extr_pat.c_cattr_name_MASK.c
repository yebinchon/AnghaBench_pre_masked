
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;





__attribute__((used)) static char *FUNC_0(unsigned long VAR_1)
{
 switch (VAR_1 & VAR_0) {
 case 131: return "uncached";
 case 130: return "uncached-minus";
 case 129: return "write-back";
 case 128: return "write-combining";
 default: return "broken";
 }
}
