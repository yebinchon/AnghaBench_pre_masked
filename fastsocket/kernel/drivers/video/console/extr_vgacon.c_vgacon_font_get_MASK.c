
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;
struct vc_data {TYPE_1__ vc_font; } ;
struct console_font {int charcount; int data; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_6, struct console_font *VAR_7)
{
 if (VAR_5 < VAR_2)
  return -VAR_0;

 VAR_7->width = VAR_1;
 VAR_7->height = VAR_6->vc_font.height;
 VAR_7->charcount = VAR_4 ? 512 : 256;
 if (!VAR_7->data)
  return 0;
 return FUNC_0(&VAR_3, VAR_7->data, 0, VAR_4);
}
