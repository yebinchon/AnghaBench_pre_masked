
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_device {struct list_head* discdata; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct list_head*) ;
 struct list_head* FUNC_3 (int,int ) ;
 int FUNC_4 (struct tape_device*) ;
 int FUNC_5 (struct tape_device*) ;

__attribute__((used)) static int
FUNC_6(struct tape_device * VAR_1)
{
 int VAR_2;
 struct list_head * VAR_3;

 FUNC_0(6, "34xx device setup\n");
 if ((VAR_2 = FUNC_5(VAR_1)) == 0) {
  if ((VAR_2 = FUNC_4(VAR_1)) != 0) {
   FUNC_1(3, "34xx medium sense returned %d\n", VAR_2);
  }
 }
 VAR_3 = FUNC_3(sizeof(struct list_head), VAR_0);
 if (VAR_3) {
   FUNC_2(VAR_3);
   VAR_1->discdata = VAR_3;
 }

 return VAR_2;
}
