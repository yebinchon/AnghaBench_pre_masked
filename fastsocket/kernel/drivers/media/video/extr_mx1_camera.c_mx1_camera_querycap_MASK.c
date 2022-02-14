
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int card; } ;
struct soc_camera_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct soc_camera_host *VAR_3,
          struct v4l2_capability *VAR_4)
{

 FUNC_0(VAR_4->card, "i.MX1/i.MXL Camera", sizeof(VAR_4->card));
 VAR_4->version = VAR_2;
 VAR_4->capabilities = VAR_1 | VAR_0;

 return 0;
}
