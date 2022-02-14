
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_link {int (* set_bus_param ) (struct soc_camera_link*,unsigned long) ;} ;
struct soc_camera_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct soc_camera_link*,unsigned long) ;
 struct soc_camera_link* FUNC_2 (struct soc_camera_device*) ;

__attribute__((used)) static int FUNC_3(struct soc_camera_device *VAR_3,
     unsigned long VAR_4)
{
 struct soc_camera_link *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6 = VAR_4 & VAR_2;


 if (!FUNC_0(VAR_6))
  return -VAR_0;

 if (VAR_5->set_bus_param)
  return VAR_5->set_bus_param(VAR_5, VAR_6);





 if (VAR_6 == VAR_1)
  return 0;

 return -VAR_0;
}
