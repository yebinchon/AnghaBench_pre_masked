
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_scsi_cmd {struct completion* back; } ;
struct ub_dev {int dummy; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct ub_dev *VAR_0, struct ub_scsi_cmd *VAR_1)
{
 struct completion *VAR_2 = VAR_1->back;
 FUNC_0(VAR_2);
}
