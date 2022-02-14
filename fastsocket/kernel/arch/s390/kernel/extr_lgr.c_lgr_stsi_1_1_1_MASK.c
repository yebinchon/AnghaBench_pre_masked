
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_1_1_1 {int plant; int sequence; int model; int type; int manufacturer; } ;
struct lgr_info {int plant; int sequence; int model; int type; int manufacturer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct sysinfo_1_1_1*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct lgr_info *VAR_2)
{
 struct sysinfo_1_1_1 *VAR_3 = (void *) VAR_1;

 if (FUNC_1(VAR_3, 1, 1, 1) == -VAR_0)
  return;
 FUNC_0(VAR_2->manufacturer, VAR_3->manufacturer,
  sizeof(VAR_3->manufacturer));
 FUNC_0(VAR_2->type, VAR_3->type, sizeof(VAR_3->type));
 FUNC_0(VAR_2->model, VAR_3->model, sizeof(VAR_3->model));
 FUNC_0(VAR_2->sequence, VAR_3->sequence, sizeof(VAR_3->sequence));
 FUNC_0(VAR_2->plant, VAR_3->plant, sizeof(VAR_3->plant));
}
