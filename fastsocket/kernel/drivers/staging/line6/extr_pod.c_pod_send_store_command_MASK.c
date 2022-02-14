
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int line6; int prog_data_buf; } ;
struct usb_interface {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,int *,int) ;
 char* FUNC_3 (struct usb_line6_pod*,int ,int) ;
 int FUNC_4 (char const*,short,short,char*) ;
 struct usb_interface* FUNC_5 (struct device*) ;
 struct usb_line6_pod* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, const char *VAR_3, size_t VAR_4, short VAR_5, short VAR_6)
{
 struct usb_interface *VAR_7 = FUNC_5(VAR_2);
 struct usb_line6_pod *VAR_8 = FUNC_6(VAR_7);

 int VAR_9 = 3 + sizeof(VAR_8->prog_data_buf);
 char *VAR_10 = FUNC_3(VAR_8, VAR_0, VAR_9);
 if (!VAR_10)
  return 0;

 VAR_10[VAR_1] = 5;
 FUNC_4(VAR_3, VAR_5, VAR_6, VAR_10 + VAR_1 + 1);
 FUNC_2(VAR_10 + VAR_1 + 3, &VAR_8->prog_data_buf, sizeof(VAR_8->prog_data_buf));

 FUNC_1(&VAR_8->line6, VAR_10, VAR_9);
 FUNC_0(VAR_10);

 return VAR_4;
}
