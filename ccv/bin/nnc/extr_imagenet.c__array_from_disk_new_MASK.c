
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; } ;
typedef TYPE_1__ ccv_file_info_t ;
typedef int ccv_categorized_t ;
typedef int ccv_array_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const* const,char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,char*,int*,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char const* const) ;
 int FUNC_11 (char*,char const* const,int) ;

__attribute__((used)) static ccv_array_t* FUNC_12(const char* const VAR_1, const char* const VAR_2)
{
 FILE *VAR_3 = FUNC_6(VAR_1, "r");
 FUNC_0(VAR_3 && "list doesn't exists");
 int VAR_4 = (VAR_2 != 0) ? FUNC_10(VAR_2) + 1 : 0;
 ccv_array_t* VAR_5 = FUNC_2(sizeof(ccv_categorized_t), 64, 0);
 int VAR_6;
 char* VAR_7 = (char*)FUNC_9(1024);
 while (FUNC_8(VAR_3, "%d %s", &VAR_6, VAR_7) != VAR_0)
 {
  char* VAR_8 = (char*)FUNC_1(1024);
  if (VAR_2 != 0)
  {
   FUNC_11(VAR_8, VAR_2, 1024);
   VAR_8[VAR_4 - 1] = '/';
  }
  FUNC_11(VAR_8 + VAR_4, VAR_7, 1024 - VAR_4);
  ccv_file_info_t VAR_9 = {
   .filename = VAR_8,
  };

  ccv_categorized_t VAR_10 = FUNC_4(VAR_6 - 1, 0, &VAR_9);
  FUNC_3(VAR_5, &VAR_10);
 }
 FUNC_7(VAR_7);
 FUNC_5(VAR_3);
 return VAR_5;
}
