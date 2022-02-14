
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (struct wm8350*,int,int ) ;
 int FUNC_1 (struct wm8350*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct wm8350 *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0, VAR_10;

 switch (VAR_7) {
 case 131:
  VAR_9 = VAR_1;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8)
  VAR_10 = FUNC_1(VAR_6, VAR_9,
   VAR_2);
 else
  VAR_10 = FUNC_0(VAR_6, VAR_9,
   VAR_2);
 return VAR_10;
}
