
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dbg_chip_ident {scalar_t__ ident; int match; scalar_t__ revision; } ;
struct file {int dummy; } ;
struct au0828_fh {struct au0828_dev* dev; } ;
struct au0828_dev {int v4l2_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ,struct v4l2_dbg_chip_ident*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
        struct v4l2_dbg_chip_ident *VAR_7)
{
 struct au0828_fh *VAR_8 = VAR_6;
 struct au0828_dev *VAR_9 = VAR_8->dev;
 VAR_7->ident = VAR_2;
 VAR_7->revision = 0;

 if (FUNC_0(&VAR_7->match)) {
  VAR_7->ident = VAR_1;
  return 0;
 }

 FUNC_1(&VAR_9->v4l2_dev, 0, VAR_3, VAR_4, VAR_7);
 if (VAR_7->ident == VAR_2)
  return -VAR_0;

 return 0;
}
