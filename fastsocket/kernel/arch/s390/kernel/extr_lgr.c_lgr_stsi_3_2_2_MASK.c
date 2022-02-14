
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysinfo_3_2_2 {int count; TYPE_2__* vm; } ;
struct lgr_info {int vm_count; TYPE_1__* vm; } ;
struct TYPE_4__ {int cpi; int name; } ;
struct TYPE_3__ {int cpi; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sysinfo_3_2_2*,int,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct lgr_info *VAR_4)
{
 struct sysinfo_3_2_2 *VAR_5 = (void *) VAR_2;
 int VAR_6;

 if (FUNC_2(VAR_5, 3, 2, 2) == -VAR_0)
  return;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3, VAR_5->count, VAR_1); VAR_6++) {
  FUNC_0(VAR_4->vm[VAR_6].name, VAR_5->vm[VAR_6].name,
   sizeof(VAR_5->vm[VAR_6].name));
  FUNC_0(VAR_4->vm[VAR_6].cpi, VAR_5->vm[VAR_6].cpi,
   sizeof(VAR_5->vm[VAR_6].cpi));
 }
 VAR_4->vm_count = VAR_5->count;
}
