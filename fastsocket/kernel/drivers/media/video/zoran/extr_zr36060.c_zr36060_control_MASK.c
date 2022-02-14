
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_com_marker {int dummy; } ;
struct jpeg_app_marker {int dummy; } ;
struct zr36060 {int status; int total_code_vol; int real_code_vol; int scalefact; struct jpeg_com_marker com; struct jpeg_app_marker app; int name; } ;
struct videocodec {scalar_t__ data; } ;
 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (struct zr36060*) ;
 int FUNC_2 (struct zr36060*) ;

__attribute__((used)) static int
FUNC_3 (struct videocodec *VAR_4,
   int VAR_5,
   int VAR_6,
   void *VAR_7)
{
 struct zr36060 *VAR_8 = (struct zr36060 *) VAR_4->data;
 int *VAR_9 = (int *) VAR_7;

 FUNC_0(2, "%s: control %d call with %d byte\n", VAR_8->name, VAR_5,
  VAR_6);

 switch (VAR_5) {
 case 136:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  FUNC_2(VAR_8);
  *VAR_9 = VAR_8->status;
  break;

 case 141:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  *VAR_9 = VAR_0;
  break;

 case 134:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  if (*VAR_9 != VAR_0)
   return -VAR_2;

  return 0;

 case 135:
 case 128:

  return 0;

 case 129:

  return -VAR_3;

 case 137:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  *VAR_9 = VAR_8->total_code_vol;
  break;

 case 130:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  VAR_8->total_code_vol = *VAR_9;
  VAR_8->real_code_vol = (VAR_8->total_code_vol * 6) >> 3;
  break;

 case 138:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  *VAR_9 = FUNC_1(VAR_8);
  break;

 case 131:
  if (VAR_6 != sizeof(int))
   return -VAR_1;
  VAR_8->scalefact = *VAR_9;
  break;

 case 140: {
  struct jpeg_app_marker *VAR_10 = VAR_7;

  if (VAR_6 != sizeof(struct jpeg_app_marker))
   return -VAR_1;

  *VAR_10 = VAR_8->app;
  break;
 }

 case 133: {
  struct jpeg_app_marker *VAR_11 = VAR_7;

  if (VAR_6 != sizeof(struct jpeg_app_marker))
   return -VAR_1;

  VAR_8->app = *VAR_11;
  break;
 }

 case 139: {
  struct jpeg_com_marker *VAR_12 = VAR_7;

  if (VAR_6 != sizeof(struct jpeg_com_marker))
   return -VAR_1;

  *VAR_12 = VAR_8->com;
  break;
 }

 case 132: {
  struct jpeg_com_marker *VAR_13 = VAR_7;

  if (VAR_6 != sizeof(struct jpeg_com_marker))
   return -VAR_1;

  VAR_8->com = *VAR_13;
  break;
 }

 default:
  return -VAR_2;
 }

 return VAR_6;
}
