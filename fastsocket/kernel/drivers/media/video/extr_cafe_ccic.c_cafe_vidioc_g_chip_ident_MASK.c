
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dbg_chip_ident {int ident; int match; scalar_t__ revision; } ;
struct file {int dummy; } ;
struct cafe_camera {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cafe_camera*,int ,int ,struct v4l2_dbg_chip_ident*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
  struct v4l2_dbg_chip_ident *VAR_6)
{
 struct cafe_camera *VAR_7 = VAR_5;

 VAR_6->ident = VAR_1;
 VAR_6->revision = 0;
 if (FUNC_1(&VAR_6->match)) {
  VAR_6->ident = VAR_0;
  return 0;
 }
 return FUNC_0(VAR_7, VAR_2, VAR_3, VAR_6);
}
