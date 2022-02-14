
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_channel {scalar_t__ channel; scalar_t__ norm; int type; scalar_t__ flags; scalar_t__ tuners; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 int VAR_3 = 0;
 struct video_channel *VAR_4;
 VAR_4 = VAR_2;

 if (VAR_4->channel != 0)
  return -VAR_0;

 VAR_4->channel = 0;
 FUNC_0(VAR_4->name, "Camera");
 VAR_4->tuners = 0;
 VAR_4->flags = 0;
 VAR_4->type = VAR_1;
 VAR_4->norm = 0;

 return VAR_3;
}
