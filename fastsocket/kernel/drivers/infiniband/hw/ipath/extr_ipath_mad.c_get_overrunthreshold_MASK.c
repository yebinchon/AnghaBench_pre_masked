
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipath_devdata {int ipath_ibcctrl; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ipath_devdata *VAR_2)
{
 return (VAR_2->ipath_ibcctrl >>
  VAR_1) &
  VAR_0;
}
