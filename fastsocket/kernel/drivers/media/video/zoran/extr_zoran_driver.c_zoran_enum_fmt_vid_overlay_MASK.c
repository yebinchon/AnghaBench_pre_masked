
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_fh {struct zoran* zr; } ;
struct zoran {int dummy; } ;
struct v4l2_fmtdesc {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct zoran*,struct v4l2_fmtdesc*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
         struct v4l2_fmtdesc *VAR_3)
{
 struct zoran_fh *VAR_4 = VAR_2;
 struct zoran *VAR_5 = VAR_4->zr;

 return FUNC_0(VAR_5, VAR_3, VAR_0);
}
