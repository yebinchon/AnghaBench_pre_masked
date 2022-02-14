
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 long FUNC_3 (struct file*,unsigned int,unsigned long,int ) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_4,
       unsigned int VAR_5, unsigned long VAR_6)
{
 if (VAR_2 & VAR_1) {
  FUNC_1(VAR_0, "uvc_v4l2_ioctl(");
  FUNC_2(VAR_5);
  FUNC_0(")\n");
 }

 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_3);
}
