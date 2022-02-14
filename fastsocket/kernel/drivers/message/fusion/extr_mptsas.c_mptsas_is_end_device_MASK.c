
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptsas_devinfo {int device_info; scalar_t__ sas_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(struct mptsas_devinfo * VAR_4)
{
 if ((VAR_4->sas_address) &&
     (VAR_4->device_info &
     VAR_0) &&
     ((VAR_4->device_info &
     VAR_2) |
     (VAR_4->device_info &
     VAR_3) |
     (VAR_4->device_info &
     VAR_1)))
  return 1;
 else
  return 0;
}
