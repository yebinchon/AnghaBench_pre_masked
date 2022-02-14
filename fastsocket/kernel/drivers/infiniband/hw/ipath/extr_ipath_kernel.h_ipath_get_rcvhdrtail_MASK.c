
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipath_portdata {scalar_t__ port_rcvhdrtail_kvaddr; } ;
typedef int __le64 ;


 int FUNC_0 (int volatile) ;

__attribute__((used)) static inline u32 FUNC_1(const struct ipath_portdata *VAR_0)
{
 return (u32) FUNC_0(*((volatile __le64 *)
    VAR_0->port_rcvhdrtail_kvaddr));
}
