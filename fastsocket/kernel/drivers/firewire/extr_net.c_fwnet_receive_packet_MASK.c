
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long offset; } ;
struct fwnet_device {TYPE_1__ handler; } ;
struct fw_request {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct fw_card*,struct fw_request*,int) ;
 scalar_t__ FUNC_2 (struct fwnet_device*,void*,size_t,int,int,int) ;
 int FUNC_3 (struct fw_request*) ;

__attribute__((used)) static void FUNC_4(struct fw_card *VAR_6, struct fw_request *VAR_7,
  int VAR_8, int VAR_9, int VAR_10, int VAR_11,
  int VAR_12, unsigned long long VAR_13, void *VAR_14,
  size_t VAR_15, void *VAR_16)
{
 struct fwnet_device *VAR_17 = VAR_16;
 int VAR_18;

 if (VAR_9 == VAR_0) {
  FUNC_3(VAR_7);

  return;
 }

 if (VAR_13 != VAR_17->handler.offset)
  VAR_18 = VAR_1;
 else if (VAR_8 != VAR_5)
  VAR_18 = VAR_4;
 else if (FUNC_2(VAR_17, VAR_14, VAR_15,
           VAR_10, VAR_11, 0) != 0) {
  FUNC_0("Incoming packet failure\n");
  VAR_18 = VAR_3;
 } else
  VAR_18 = VAR_2;

 FUNC_1(VAR_6, VAR_7, VAR_18);
}
