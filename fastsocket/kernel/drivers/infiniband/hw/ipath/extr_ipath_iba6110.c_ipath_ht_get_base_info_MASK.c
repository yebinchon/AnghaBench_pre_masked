
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_portdata {TYPE_1__* port_dd; } ;
struct ipath_base_info {int spi_runtime_flags; } ;
struct TYPE_2__ {int ipath_minrev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ipath_portdata *VAR_3, void *VAR_4)
{
 struct ipath_base_info *VAR_5 = VAR_4;

 VAR_5->spi_runtime_flags |= VAR_0 |
  VAR_1;

 if (VAR_3->port_dd->ipath_minrev < 4)
  VAR_5->spi_runtime_flags |= VAR_2;

 return 0;
}
