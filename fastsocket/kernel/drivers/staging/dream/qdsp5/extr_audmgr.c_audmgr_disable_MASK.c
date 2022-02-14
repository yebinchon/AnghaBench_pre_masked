
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audmgr_disable_msg {int handle; int hdr; } ;
struct audmgr {scalar_t__ state; int wait; int ept; int handle; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ,struct audmgr_disable_msg*,int) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (int ,int,int) ;

int FUNC_7(struct audmgr *VAR_6)
{
 struct audmgr_disable_msg VAR_7;
 int VAR_8;

 if (VAR_6->state == VAR_4)
  return 0;

 FUNC_3(&VAR_7.hdr, VAR_1, FUNC_2(VAR_6->ept),
     VAR_0);
 VAR_7.handle = FUNC_1(VAR_6->handle);

 VAR_6->state = VAR_5;

 VAR_8 = FUNC_4(VAR_6->ept, &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_6->wait, VAR_6->state != VAR_5, 15 * VAR_3);
 if (VAR_8 == 0) {
  FUNC_5("audmgr_disable: ARM9 did not reply to RPC am->state = %d\n", VAR_6->state);
  FUNC_0();
 }

 if (VAR_6->state == VAR_4)
  return 0;

 FUNC_5("audmgr: unexpected state %d while disabling?!\n", VAR_6->state);
 return -VAR_2;
}
