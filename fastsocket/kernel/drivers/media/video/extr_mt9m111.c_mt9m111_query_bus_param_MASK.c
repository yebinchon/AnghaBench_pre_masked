
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_camera_link {int dummy; } ;
struct soc_camera_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (struct soc_camera_link*,unsigned long) ;
 struct soc_camera_link* FUNC_1 (struct soc_camera_device*) ;

__attribute__((used)) static unsigned long FUNC_2(struct soc_camera_device *VAR_6)
{
 struct soc_camera_link *VAR_7 = FUNC_1(VAR_6);
 unsigned long VAR_8 = VAR_3 | VAR_4 |
  VAR_2 | VAR_5 |
  VAR_1 | VAR_0;

 return FUNC_0(VAR_7, VAR_8);
}
