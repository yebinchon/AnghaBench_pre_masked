
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int card; } ;
struct soc_camera_host {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct soc_camera_host *VAR_2,
          struct v4l2_capability *VAR_3)
{

 FUNC_1(VAR_3->card, "i.MX3x Camera", sizeof(VAR_3->card));
 VAR_3->version = FUNC_0(0, 2, 2);
 VAR_3->capabilities = VAR_1 | VAR_0;

 return 0;
}
