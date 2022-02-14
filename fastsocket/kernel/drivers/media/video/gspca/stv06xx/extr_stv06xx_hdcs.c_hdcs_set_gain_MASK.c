
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sd*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1, __s32 VAR_2)
{
 FUNC_0(VAR_0, "Writing gain %d", VAR_2);
 return FUNC_1((struct sd *) VAR_1,
          VAR_2 & 0xff);
}
