
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

char *FUNC_0(int VAR_5)
{
 if (VAR_5 == VAR_3)
  return "POLLED";
 else if (VAR_5 == VAR_2)
  return "INTERRUPT";
 else if (VAR_5 == VAR_4)
  return "POLL-INTR";
 else if (VAR_5 == VAR_0)
  return "ALLOC";
 else if (VAR_5 == VAR_1)
  return "OFFLINE";

 return "UNKNOWN";
}
