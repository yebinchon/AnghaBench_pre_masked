
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_ibcctrl; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ipath_devdata *VAR_1)
{
 return !!(VAR_1->ipath_ibcctrl & VAR_0);
}
