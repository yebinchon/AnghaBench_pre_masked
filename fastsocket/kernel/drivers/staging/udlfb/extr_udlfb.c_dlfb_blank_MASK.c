
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct dlfb_data* par; } ;
struct dlfb_data {char* buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlfb_data*,int) ;
 char* FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct fb_info *VAR_2)
{
 struct dlfb_data *VAR_3 = VAR_2->par;
 char *VAR_4 = VAR_3->buf;

 VAR_4 = FUNC_1(VAR_4, 0xFF, 0x00);
 if (VAR_1 != VAR_0) {
  VAR_4 = FUNC_1(VAR_4, 0x1F, 0x01);
 } else {
  VAR_4 = FUNC_1(VAR_4, 0x1F, 0x00);
 }
 VAR_4 = FUNC_1(VAR_4, 0xFF, 0xFF);

 FUNC_0(VAR_3, VAR_4 - VAR_3->buf);

 return 0;
}
