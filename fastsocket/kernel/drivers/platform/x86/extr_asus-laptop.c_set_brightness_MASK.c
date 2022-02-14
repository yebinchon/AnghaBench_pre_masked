
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 VAR_3 = (0 < VAR_3) ? ((15 < VAR_3) ? 15 : VAR_3) : 0;


 if (FUNC_1(VAR_1, ((void*)0), VAR_3, ((void*)0))) {
  FUNC_0("Error changing brightness\n");
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
