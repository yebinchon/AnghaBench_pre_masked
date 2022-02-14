
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int dumpreq; int line6; } ;
struct usb_interface {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (struct usb_line6_pod*,int ,int) ;
 int FUNC_5 (char const*,short,short,char*) ;
 struct usb_interface* FUNC_6 (struct device*) ;
 struct usb_line6_pod* FUNC_7 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, const char *VAR_4, size_t VAR_5, short VAR_6, short VAR_7)
{
 struct usb_interface *VAR_8 = FUNC_6(VAR_3);
 struct usb_line6_pod *VAR_9 = FUNC_7(VAR_8);
 int VAR_10 = 4;
 char *VAR_11 = FUNC_4(VAR_9, VAR_1, VAR_10);

 if (!VAR_11)
  return 0;

 FUNC_5(VAR_4, VAR_6, VAR_7, VAR_11 + VAR_2);
 VAR_11[VAR_2 + 2] = 0;
 VAR_11[VAR_2 + 3] = 0;
 FUNC_2(&VAR_9->dumpreq, VAR_0);

 if (FUNC_3(&VAR_9->line6, VAR_11, VAR_10) < VAR_10)
  FUNC_1(&VAR_9->dumpreq);

 FUNC_0(VAR_11);

 return VAR_5;
}
