
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char value ;
struct TYPE_2__ {int* control; } ;
struct usb_line6_pod {int line6; TYPE_1__ prog_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int const) ;
 char* FUNC_2 (struct usb_line6_pod*,int ,int const) ;
 unsigned short FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct usb_line6_pod *VAR_4, const char *VAR_5,
        int VAR_6, int VAR_7, unsigned short VAR_8,
        int VAR_9)
{
 char *VAR_10;
 static const int VAR_11 = 5;
 unsigned short VAR_12;

 if (((VAR_4->prog_data.control[VAR_2] & 0x40) == 0) && VAR_9)
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_4, VAR_1, VAR_11);
 if (!VAR_10)
  return 0;
 VAR_12 = FUNC_3(VAR_5, ((void*)0), 10) & VAR_8;
 VAR_10[VAR_3] = VAR_7;
 VAR_10[VAR_3 + 1] = (VAR_12 >> 12) & 0x0f;
 VAR_10[VAR_3 + 2] = (VAR_12 >> 8) & 0x0f;
 VAR_10[VAR_3 + 3] = (VAR_12 >> 4) & 0x0f;
 VAR_10[VAR_3 + 4] = (VAR_12 ) & 0x0f;
 FUNC_1(&VAR_4->line6, VAR_10, VAR_11);
 FUNC_0(VAR_10);
 return VAR_6;
}
