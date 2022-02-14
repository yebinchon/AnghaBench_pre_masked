
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int current_norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct video_device *VAR_3)
{
 return (VAR_3->current_norm & VAR_2) ?
     (VAR_0 * 2) : (VAR_1 * 2);
}
