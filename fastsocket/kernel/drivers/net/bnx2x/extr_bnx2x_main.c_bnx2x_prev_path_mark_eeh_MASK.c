
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_prev_path_list {int aer; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bnx2x*) ;
 struct bnx2x_prev_path_list* FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_1)
{
 struct bnx2x_prev_path_list *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_3(&VAR_0);
 if (VAR_3) {
  FUNC_0("Received %d when tried to take lock\n", VAR_3);
  return VAR_3;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  VAR_2->aer = 1;
  VAR_3 = 0;
 } else {
  FUNC_0("path %d: Entry does not exist for eeh; Flow occurs before initial insmod is over ?\n",
     FUNC_1(VAR_1));
 }

 FUNC_4(&VAR_0);

 return VAR_3;
}
