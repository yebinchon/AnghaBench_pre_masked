
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct option {char* member_0; int member_1; int member_3; int member_2; } ;
typedef int ccv_icf_classifier_cascade_t ;
struct TYPE_11__ {int yaw; int pitch; int roll; int b; int a; int y; int x; } ;
struct TYPE_10__ {char* filename; TYPE_2__ pose; } ;
typedef TYPE_1__ ccv_file_info_t ;
typedef TYPE_2__ ccv_decimal_pose_t ;
struct TYPE_12__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 double FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,TYPE_3__*,double) ;
 int * FUNC_10 (char*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *,char*,char*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_17 (int,char**,char*,struct option*,int*) ;
 scalar_t__ FUNC_18 (int) ;
 char* VAR_1 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*,int) ;

int FUNC_21(int VAR_2, char** VAR_3)
{
 static struct option VAR_4[] = {

  {"help", 0, 0, 0},

  {"positive-list", 1, 0, 0},
  {"classifier-cascade", 1, 0, 0},
  {"acceptance", 1, 0, 0},

  {"base-dir", 1, 0, 0},
  {0, 0, 0, 0}
 };
 char* VAR_5 = 0;
 char* VAR_6 = 0;
 char* VAR_7 = 0;
 double VAR_8 = 0;
 int VAR_9, VAR_10;
 while (FUNC_17(VAR_2, VAR_3, "", VAR_4, &VAR_10) != -1)
 {
  switch (VAR_10)
  {
   case 0:
    FUNC_12();
   case 1:
    VAR_5 = VAR_1;
    break;
   case 2:
    VAR_6 = VAR_1;
    break;
   case 3:
    VAR_8 = FUNC_1(VAR_1);
    break;
   case 4:
    VAR_7 = VAR_1;
    break;
  }
 }
 FUNC_0(VAR_5 != 0);
 FUNC_0(VAR_6 != 0);
 FUNC_8(512 * 1024 * 1024);
 FILE* VAR_11 = FUNC_14(VAR_5, "r");
 FUNC_0(VAR_11 && "positive-list doesn't exists");
 char* VAR_12 = (char*)FUNC_18(1024);
 ccv_decimal_pose_t VAR_13;
 ccv_array_t* VAR_14 = FUNC_5(sizeof(ccv_file_info_t), 32, 0);
 int VAR_15 = (VAR_7 != 0) ? FUNC_19(VAR_7) + 1 : 0;

 while (FUNC_16(VAR_11, "%s %f %f %f %f %f %f %f", VAR_12, &VAR_13.x, &VAR_13.y, &VAR_13.a, &VAR_13.b, &VAR_13.roll, &VAR_13.pitch, &VAR_13.yaw) != VAR_0)
 {
  ccv_file_info_t VAR_16;
  VAR_16.filename = (char*)FUNC_2(1024);
  if (VAR_7 != 0)
  {
   FUNC_20(VAR_16.filename, VAR_7, 1024);
   VAR_16.filename[VAR_15 - 1] = '/';
  }
  FUNC_20(VAR_16.filename + VAR_15, VAR_12, 1024 - VAR_15);

  VAR_16.pose = VAR_13;
  FUNC_6(VAR_14, &VAR_16);
 }
 FUNC_13(VAR_11);
 FUNC_15(VAR_12);
 ccv_icf_classifier_cascade_t* VAR_17 = FUNC_10(VAR_6);
 FUNC_0(VAR_17 && "classifier cascade doesn't exists");
 FUNC_9(VAR_17, VAR_14, VAR_8);
 FUNC_11(VAR_17, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_14->rnum; VAR_9++)
 {
  ccv_file_info_t* VAR_18 = (ccv_file_info_t*)FUNC_4(VAR_14, VAR_9);
  FUNC_15(VAR_18->filename);
 }
 FUNC_3(VAR_14);
 FUNC_7();
 return 0;
}
