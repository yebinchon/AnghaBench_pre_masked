
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tfile_check {int count; struct tfile_check* next; TYPE_1__** tfile_arr; } ;
struct TYPE_2__ {int file; } ;


 int VAR_0 ;
 struct tfile_check VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7;
 struct tfile_check *VAR_8 = &VAR_1;


 while (VAR_8) {
  for (VAR_7 = 0; VAR_7 < VAR_8->count; VAR_7++) {
   VAR_5++;
   FUNC_1();
   VAR_6 = FUNC_0(&VAR_3, VAR_0,
     VAR_4, VAR_8->tfile_arr[VAR_7]->file,
     VAR_8->tfile_arr[VAR_7]->file, VAR_2);
   if (VAR_6)
    return VAR_6;
  }
  VAR_8 = VAR_8->next;
 }
 return VAR_6;
}
