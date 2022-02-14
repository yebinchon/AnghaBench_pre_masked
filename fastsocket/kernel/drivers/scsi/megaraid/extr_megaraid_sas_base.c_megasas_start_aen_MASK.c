
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; int locale; scalar_t__ reserved; } ;
union megasas_evt_class_locale {int word; TYPE_1__ members; } ;
struct megasas_instance {int dummy; } ;
struct megasas_evt_log_info {scalar_t__ newest_seq_num; } ;
typedef int eli ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct megasas_instance*,struct megasas_evt_log_info*) ;
 int FUNC_1 (struct megasas_instance*,scalar_t__,int ) ;
 int FUNC_2 (struct megasas_evt_log_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct megasas_instance *VAR_2)
{
 struct megasas_evt_log_info VAR_3;
 union megasas_evt_class_locale VAR_4;




 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 if (FUNC_0(VAR_2, &VAR_3))
  return -1;




 VAR_4.members.reserved = 0;
 VAR_4.members.locale = VAR_1;
 VAR_4.members.class = VAR_0;

 return FUNC_1(VAR_2, VAR_3.newest_seq_num + 1,
        VAR_4.word);
}
