
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct option {char* member_0; int member_1; int member_3; int member_2; } ;
typedef int ccv_cnnp_dataframe_t ;
struct TYPE_9__ {int filename; } ;
struct TYPE_10__ {TYPE_1__ file; } ;
typedef TYPE_2__ ccv_categorized_t ;
struct TYPE_11__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 TYPE_3__* FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__* const) ;
 scalar_t__ FUNC_3 (TYPE_3__* const,int) ;
 int FUNC_4 (int * const) ;
 int * FUNC_5 (TYPE_3__* const) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**,char*,struct option*,int*) ;
 char* VAR_0 ;
 int FUNC_9 (int,int * const,int * const,TYPE_3__* const) ;

int FUNC_10(int VAR_1, char** VAR_2)
{
 FUNC_6();
 static struct option VAR_3[] = {

  {"help", 0, 0, 0},

  {"train-list", 1, 0, 0},
  {"test-list", 1, 0, 0},

  {"base-dir", 1, 0, 0},
  {0, 0, 0, 0}
 };
 int VAR_4;
 char* VAR_5 = 0;
 char* VAR_6 = 0;
 char* VAR_7 = 0;
 while (FUNC_8(VAR_1, VAR_2, "", VAR_3, &VAR_4) != -1)
 {
  switch (VAR_4)
  {
   case 0:
    FUNC_7(0);
   case 1:
    VAR_5 = VAR_0;
    break;
   case 2:
    VAR_6 = VAR_0;
    break;
   case 3:
    VAR_7 = VAR_0;
    break;
  }
 }
 ccv_array_t* const VAR_8 = FUNC_0(VAR_5, VAR_7);
 ccv_cnnp_dataframe_t* const VAR_9 = FUNC_5(VAR_8);
 ccv_array_t* const VAR_10 = FUNC_0(VAR_6, VAR_7);
 ccv_cnnp_dataframe_t* const VAR_11 = FUNC_5(VAR_10);
 FUNC_9(128, VAR_9, VAR_11, VAR_10);
 FUNC_4(VAR_9);
 FUNC_4(VAR_11);
 int VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_8->rnum; VAR_12++)
  FUNC_1(((ccv_categorized_t*)FUNC_3(VAR_8, VAR_12))->file.filename);
 FUNC_2(VAR_8);
 for (VAR_12 = 0; VAR_12 < VAR_10->rnum; VAR_12++)
  FUNC_1(((ccv_categorized_t*)FUNC_3(VAR_10, VAR_12))->file.filename);
 FUNC_2(VAR_10);
 return 0;
}
