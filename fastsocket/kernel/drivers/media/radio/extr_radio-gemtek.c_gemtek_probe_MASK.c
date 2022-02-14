
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct gemtek {int io; struct v4l2_device v4l2_dev; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (struct gemtek*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int,char*) ;
 int FUNC_4 (struct v4l2_device*,char*) ;
 int FUNC_5 (struct v4l2_device*,char*,...) ;
 int FUNC_6 (struct v4l2_device*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct gemtek *VAR_1)
{
 struct v4l2_device *VAR_2 = &VAR_1->v4l2_dev;
 int VAR_3[] = { 0x20c, 0x30c, 0x24c, 0x34c, 0x248, 0x28c };
 int VAR_4;

 if (!VAR_0) {
  FUNC_5(VAR_2, "Automatic device probing disabled.\n");
  return -1;
 }

 FUNC_5(VAR_2, "Automatic device probing enabled.\n");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); ++VAR_4) {
  FUNC_5(VAR_2, "Trying I/O port 0x%x...\n", VAR_3[VAR_4]);

  if (!FUNC_3(VAR_3[VAR_4], 1, "gemtek-probe")) {
   FUNC_6(VAR_2, "I/O port 0x%x busy!\n",
          VAR_3[VAR_4]);
   continue;
  }

  if (FUNC_1(VAR_1, VAR_3[VAR_4])) {
   FUNC_5(VAR_2, "Card found from I/O port "
          "0x%x!\n", VAR_3[VAR_4]);

   FUNC_2(VAR_3[VAR_4], 1);
   VAR_1->io = VAR_3[VAR_4];
   return VAR_1->io;
  }

  FUNC_2(VAR_3[VAR_4], 1);
 }

 FUNC_4(VAR_2, "Automatic probing failed!\n");
 return -1;
}
