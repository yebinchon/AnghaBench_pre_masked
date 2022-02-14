
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int addr; } ;
struct v4l2_dbg_chip_ident {int ident; int revision; TYPE_1__ match; } ;
struct sd {size_t sensor; int i2c_addr; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_3,
   struct v4l2_dbg_chip_ident *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;

 switch (VAR_4->match.type) {
 case 129:
  if (VAR_4->match.addr != 0)
   return -VAR_0;
  VAR_4->revision = 0;
  VAR_4->ident = VAR_1;
  return 0;
 case 128:
  if (VAR_4->match.addr != VAR_5->i2c_addr)
   return -VAR_0;
  VAR_4->revision = 0;
  VAR_4->ident = VAR_2[VAR_5->sensor];
  return 0;
 }
 return -VAR_0;
}
