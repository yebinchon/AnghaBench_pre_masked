
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111_datafmt {int code; } ;
typedef enum v4l2_mbus_pixelcode { ____Placeholder_v4l2_mbus_pixelcode } v4l2_mbus_pixelcode ;



__attribute__((used)) static const struct mt9m111_datafmt *FUNC_0(
 enum v4l2_mbus_pixelcode VAR_0, const struct mt9m111_datafmt *VAR_1,
 int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (VAR_1[VAR_3].code == VAR_0)
   return VAR_1 + VAR_3;

 return ((void*)0);
}
