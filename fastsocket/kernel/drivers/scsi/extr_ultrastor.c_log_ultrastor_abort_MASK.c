
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ultrastor_config {int mscp_free; TYPE_1__* mscp; } ;
struct TYPE_2__ {char target_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1(struct ultrastor_config *VAR_1,
    int VAR_2)
{
  static char VAR_3[80] = "abort %d (%x); MSCP free pool: %x;";
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
      VAR_3[20 + VAR_4*2] = ' ';
      if (! (VAR_1->mscp_free & (1 << VAR_4)))
 VAR_3[21 + VAR_4*2] = '0' + VAR_1->mscp[VAR_4].target_id;
      else
 VAR_3[21 + VAR_4*2] = '-';
    }
  VAR_3[20 + VAR_0 * 2] = '\n';
  VAR_3[21 + VAR_0 * 2] = 0;
  FUNC_0(VAR_3, VAR_2, &VAR_1->mscp[VAR_2], VAR_1->mscp_free);

}
