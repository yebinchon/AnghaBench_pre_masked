
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct fsg_dev {scalar_t__ config; TYPE_1__* gadget; } ;
struct TYPE_2__ {int speed; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
 int FUNC_1 (struct fsg_dev*,char*,char*,scalar_t__) ;



 int FUNC_2 (struct fsg_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct fsg_dev *VAR_0, u8 VAR_1)
{
 int VAR_2 = 0;


 if (VAR_0->config != 0) {
  FUNC_0(VAR_0, "reset config\n");
  VAR_0->config = 0;
  VAR_2 = FUNC_2(VAR_0, -1);
 }


 if (VAR_1 != 0) {
  VAR_0->config = VAR_1;
  if ((VAR_2 = FUNC_2(VAR_0, 0)) != 0)
   VAR_0->config = 0;
  else {
   char *VAR_3;

   switch (VAR_0->gadget->speed) {
   case 128: VAR_3 = "low"; break;
   case 130: VAR_3 = "full"; break;
   case 129: VAR_3 = "high"; break;
   default: VAR_3 = "?"; break;
   }
   FUNC_1(VAR_0, "%s speed config #%d\n", VAR_3, VAR_0->config);
  }
 }
 return VAR_2;
}
