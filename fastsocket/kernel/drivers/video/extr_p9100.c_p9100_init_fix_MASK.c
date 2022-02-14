
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int line_length; int accel; int visual; int type; int id; } ;
struct fb_info {TYPE_1__ fix; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_3, int VAR_4, struct device_node *VAR_5)
{
 FUNC_0(VAR_3->fix.id, VAR_5->name, sizeof(VAR_3->fix.id));

 VAR_3->fix.type = VAR_1;
 VAR_3->fix.visual = VAR_2;

 VAR_3->fix.line_length = VAR_4;

 VAR_3->fix.accel = VAR_0;
}
