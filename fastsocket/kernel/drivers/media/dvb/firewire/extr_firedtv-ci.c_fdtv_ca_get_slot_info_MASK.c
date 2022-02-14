
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {int dummy; } ;
struct firedtv {int dummy; } ;
struct ca_slot_info {scalar_t__ num; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct firedtv*,struct firedtv_tuner_status*) ;
 int FUNC_1 (struct firedtv_tuner_status*) ;

__attribute__((used)) static int FUNC_2(struct firedtv *VAR_2, void *VAR_3)
{
 struct firedtv_tuner_status VAR_4;
 struct ca_slot_info *VAR_5 = VAR_3;

 if (FUNC_0(VAR_2, &VAR_4))
  return -VAR_1;

 if (VAR_5->num != 0)
  return -VAR_1;

 VAR_5->type = VAR_0;
 VAR_5->flags = FUNC_1(&VAR_4);
 return 0;
}
