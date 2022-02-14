
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int snapshot_button_status; scalar_t__ button_dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pwc_device *VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_0("Snapshot button pressed.\n");
  VAR_1->snapshot_button_status = 1;
 } else {
  FUNC_0("Snapshot button released.\n");
 }







}
