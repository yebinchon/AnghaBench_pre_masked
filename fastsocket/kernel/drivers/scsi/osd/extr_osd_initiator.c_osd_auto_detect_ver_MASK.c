
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct osd_dev*,void*) ;
 int FUNC_2 (struct osd_dev*,int ) ;

int FUNC_3(struct osd_dev *VAR_1, void *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1, VAR_0);
  FUNC_0("converting to OSD1\n");
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 }

 return VAR_3;
}
