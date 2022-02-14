
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_queued_cmd {int * cdb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ata_queued_cmd *VAR_3)
{
 if (!VAR_2) {
  return -VAR_1;
 }


 if (FUNC_0(VAR_3->cdb[0]) == VAR_0)
  return -VAR_1;
 return 0;
}
