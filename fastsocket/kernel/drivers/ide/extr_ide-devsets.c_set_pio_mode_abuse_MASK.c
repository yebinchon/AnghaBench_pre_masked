
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int host_flags; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(ide_hwif_t *VAR_3, u8 VAR_4)
{
 switch (VAR_4) {
 case 202:
 case 201:
 case 200:
 case 102:
 case 101:
 case 100:
  return (VAR_3->host_flags & VAR_0) ? 1 : 0;
 case 9:
 case 8:
  return (VAR_3->host_flags & VAR_2) ? 1 : 0;
 case 7:
 case 6:
  return (VAR_3->host_flags & VAR_1) ? 1 : 0;
 default:
  return 0;
 }
}
