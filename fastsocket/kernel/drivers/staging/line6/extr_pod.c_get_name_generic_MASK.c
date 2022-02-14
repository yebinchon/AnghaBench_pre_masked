
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int dumpreq; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct usb_line6_pod *VAR_1, const char *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;
 const char *VAR_5;
 char *VAR_6;
 char *VAR_7 = VAR_3;

 int VAR_8 = FUNC_0(&VAR_1->dumpreq, 0);
 if (VAR_8 < 0)
  return VAR_8;

 for (VAR_5 = VAR_2, VAR_6 = VAR_3; *VAR_5; ++VAR_5, ++VAR_6) {
  *VAR_6 = *VAR_5;
  if (*VAR_6 != ' ')
   VAR_7 = VAR_6;
  if (++VAR_4 == VAR_0)
   break;
 }

 *(VAR_7 + 1) = '\n';
 return VAR_7 - VAR_3 + 2;
}
