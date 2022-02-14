
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int card; } ;
struct soc_camera_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct soc_camera_host *VAR_4,
          struct v4l2_capability *VAR_5)
{

 FUNC_0(VAR_5->card, VAR_3, sizeof(VAR_5->card));
 VAR_5->version = VAR_0;
 VAR_5->capabilities = VAR_2 | VAR_1;

 return 0;
}
