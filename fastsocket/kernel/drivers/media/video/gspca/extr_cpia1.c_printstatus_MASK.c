
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int errorCode; int vpStatus; int debugFlags; int cmdError; int fatalError; int streamState; int grabState; int systemState; } ;
struct cam_params {TYPE_1__ status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cam_params *VAR_1)
{
 FUNC_0(VAR_0, "status: %02x %02x %02x %02x %02x %02x %02x %02x",
        VAR_1->status.systemState, VAR_1->status.grabState,
        VAR_1->status.streamState, VAR_1->status.fatalError,
        VAR_1->status.cmdError, VAR_1->status.debugFlags,
        VAR_1->status.vpStatus, VAR_1->status.errorCode);
}
