
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int addr; } ;
struct v4l2_dbg_chip_ident {int ident; TYPE_1__ match; scalar_t__ revision; } ;
struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int v4l2_dev; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_dbg_chip_ident*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
  struct v4l2_dbg_chip_ident *VAR_7)
{
 struct saa7146_fh *VAR_8 = VAR_6;
 struct saa7146_dev *VAR_9 = VAR_8->dev;

 VAR_7->ident = VAR_1;
 VAR_7->revision = 0;
 if (VAR_7->match.type == VAR_0 && !VAR_7->match.addr) {
  VAR_7->ident = VAR_2;
  return 0;
 }
 return FUNC_0(&VAR_9->v4l2_dev, 0,
   VAR_3, VAR_4, VAR_7);
}
