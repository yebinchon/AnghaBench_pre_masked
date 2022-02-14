
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct smd_alloc_elm {int ctype; int cid; int * name; int ref_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int* VAR_1 ;
 struct smd_alloc_elm* FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_2)
{
 struct smd_alloc_elm *VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_1(VAR_0, sizeof(*VAR_3) * 64);

 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  if (VAR_1[VAR_4])
   continue;
  if (!VAR_3[VAR_4].ref_count)
   continue;
  if (!VAR_3[VAR_4].name[0])
   continue;
  FUNC_0(VAR_3[VAR_4].name,
      VAR_3[VAR_4].cid,
      VAR_3[VAR_4].ctype);
  VAR_1[VAR_4] = 1;
 }
}
