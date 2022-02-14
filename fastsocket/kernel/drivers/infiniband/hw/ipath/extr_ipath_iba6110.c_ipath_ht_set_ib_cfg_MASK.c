
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct ipath_devdata {void* ipath_link_speed_enabled; void* ipath_link_width_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ipath_devdata *VAR_3, int VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;

 if (VAR_4 == VAR_1)
  VAR_3->ipath_link_width_enabled = VAR_5;
 else if (VAR_4 == VAR_2)
  VAR_3->ipath_link_speed_enabled = VAR_5;
 else
  VAR_6 = -VAR_0;
 return VAR_6;
}
