
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
struct console_font {unsigned int charcount; scalar_t__ width; int height; int data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct vc_data*,int ) ;
 int FUNC_1 (int *,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_6, struct console_font *VAR_7, unsigned VAR_8)
{
 unsigned VAR_9 = VAR_7->charcount;
 int VAR_10;

 if (VAR_5 < VAR_3)
  return -VAR_0;

 if (VAR_7->width != VAR_2 ||
     (VAR_9 != 256 && VAR_9 != 512))
  return -VAR_0;

 VAR_10 = FUNC_1(&VAR_4, VAR_7->data, 1, VAR_9 == 512);
 if (VAR_10)
  return VAR_10;

 if (!(VAR_8 & VAR_1))
  VAR_10 = FUNC_0(VAR_6, VAR_7->height);
 return VAR_10;
}
