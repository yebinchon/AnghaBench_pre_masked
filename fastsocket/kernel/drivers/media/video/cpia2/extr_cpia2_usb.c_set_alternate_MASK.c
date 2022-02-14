
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {unsigned int cur_alt; unsigned int old_alt; int iface; int dev; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct camera_data *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 0;

 if(VAR_2 == VAR_1->cur_alt)
  return 0;

 if (VAR_1->cur_alt != VAR_0) {
  FUNC_0("Changing from alt %d to %d\n", VAR_1->cur_alt, VAR_0);
  VAR_3 = FUNC_1(VAR_1->dev, VAR_1->iface, VAR_0);
  if (VAR_3 != 0)
   return VAR_3;
 }
 if (VAR_2 != VAR_0) {
  FUNC_0("Changing from alt %d to %d\n", VAR_0, VAR_2);
  VAR_3 = FUNC_1(VAR_1->dev, VAR_1->iface, VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }

 VAR_1->old_alt = VAR_1->cur_alt;
 VAR_1->cur_alt = VAR_2;

 return VAR_3;
}
