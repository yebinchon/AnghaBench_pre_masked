
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct airo_info {int dummy; } ;
typedef int cmd ;
struct TYPE_7__ {scalar_t__ parm0; scalar_t__ cmd; } ;
struct TYPE_6__ {int status; int rsp0; } ;
typedef TYPE_1__ Resp ;
typedef TYPE_2__ Cmd ;


 scalar_t__ FUNC_0 (struct airo_info*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct airo_info *VAR_0, u16 VAR_1, u16 VAR_2)
{
 Cmd VAR_3;
 Resp VAR_4;
 u16 VAR_5;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.cmd = VAR_2;
 VAR_3.parm0 = VAR_1;
 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5 != 0) return VAR_5;
 if ( (VAR_4.status & 0x7F00) != 0) {
  return (VAR_2 << 8) + (VAR_4.rsp0 & 0xFF);
 }
 return 0;
}
