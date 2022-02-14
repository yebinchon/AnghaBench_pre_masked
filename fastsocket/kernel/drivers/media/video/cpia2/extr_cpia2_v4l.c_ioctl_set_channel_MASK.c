
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_channel {scalar_t__ channel; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1)
{
 struct video_channel *VAR_2;
 int VAR_3 = 0;
 VAR_2 = VAR_1;

 if (VAR_3 == 0 && VAR_2->channel != 0)
  VAR_3 = -VAR_0;

 return VAR_3;
}
