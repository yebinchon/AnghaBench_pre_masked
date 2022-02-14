
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alauda_media_info {int pba_to_lba; int lba_to_pba; } ;
struct alauda_info {struct alauda_media_info* port; } ;


 int FUNC_0 (struct alauda_media_info*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct alauda_info *VAR_1 = (struct alauda_info *) VAR_0;
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  struct alauda_media_info *VAR_3 = &VAR_1->port[VAR_2];

  FUNC_0(VAR_3);
  FUNC_1(VAR_3->lba_to_pba);
  FUNC_1(VAR_3->pba_to_lba);
 }
}
