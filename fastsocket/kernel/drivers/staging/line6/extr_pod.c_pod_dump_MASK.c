
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {char prog_data; int line6; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,unsigned char const*,int) ;
 char* FUNC_3 (struct usb_line6_pod*,int ,int) ;
 int FUNC_4 (struct usb_line6_pod*) ;

__attribute__((used)) static void FUNC_5(struct usb_line6_pod *VAR_2, const unsigned char *VAR_3)
{
 int VAR_4 = 1 + sizeof(VAR_2->prog_data);
 char *VAR_5 = FUNC_3(VAR_2, VAR_0, VAR_4);
 if (!VAR_5)
  return;


 VAR_5[VAR_1] = 5;
 FUNC_2(VAR_5 + VAR_1 + 1, VAR_3, sizeof(VAR_2->prog_data));
 FUNC_1(&VAR_2->line6, VAR_5, VAR_4);
 FUNC_2(&VAR_2->prog_data, VAR_3, sizeof(VAR_2->prog_data));
 FUNC_4(VAR_2);
 FUNC_0(VAR_5);
}
