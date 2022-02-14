
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36016 {int name; } ;
struct videocodec {scalar_t__ data; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int,int) ;

__attribute__((used)) static int
FUNC_1 (struct videocodec *VAR_3,
   int VAR_4,
   int VAR_5,
   void *VAR_6)
{
 struct zr36016 *VAR_7 = (struct zr36016 *) VAR_3->data;
 int *VAR_8 = (int *) VAR_6;

 FUNC_0(2, "%s: control %d call with %d byte\n", VAR_7->name, VAR_4,
  VAR_5);

 switch (VAR_4) {
 case 132:
  if (VAR_5 != sizeof(int))
   return -VAR_0;
  *VAR_8 = 0;
  break;

 case 133:
  if (VAR_5 != sizeof(int))
   return -VAR_0;
  *VAR_8 = 0;
  break;

 case 130:
  if (VAR_5 != sizeof(int))
   return -VAR_0;
  if (*VAR_8 != 0)
   return -VAR_1;

  return 0;

 case 131:
 case 128:
  return 0;

 case 129:

  return -VAR_2;

 default:
  return -VAR_1;
 }

 return VAR_5;
}
