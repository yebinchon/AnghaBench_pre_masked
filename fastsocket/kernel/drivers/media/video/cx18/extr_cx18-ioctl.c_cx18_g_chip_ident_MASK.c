
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int addr; } ;
struct v4l2_dbg_chip_ident {scalar_t__ revision; int ident; TYPE_1__ match; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cx18*,int ,int ,struct v4l2_dbg_chip_ident*) ;
 int FUNC_1 (struct cx18*,int ,int ,int ,struct v4l2_dbg_chip_ident*) ;
 scalar_t__ FUNC_2 (struct cx18*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
    struct v4l2_dbg_chip_ident *VAR_8)
{
 struct cx18 *VAR_9 = ((struct cx18_open_id *)VAR_7)->cx;
 int VAR_10 = 0;

 VAR_8->ident = VAR_3;
 VAR_8->revision = 0;
 switch (VAR_8->match.type) {
 case 130:
  switch (VAR_8->match.addr) {
  case 0:
   VAR_8->ident = VAR_2;
   VAR_8->revision = FUNC_2(VAR_9, 0xC72028);
   break;
  case 1:





   FUNC_1(VAR_9, VAR_0,
         VAR_4, VAR_5, VAR_8);
   break;
  default:




   VAR_10 = -VAR_1;
   break;
  }
  break;
 case 128:

  FUNC_0(VAR_9, VAR_4, VAR_5, VAR_8);
  break;
 case 129:





  FUNC_0(VAR_9, VAR_4, VAR_5, VAR_8);
  break;
 default:
  VAR_10 = -VAR_1;
  break;
 }
 return VAR_10;
}
