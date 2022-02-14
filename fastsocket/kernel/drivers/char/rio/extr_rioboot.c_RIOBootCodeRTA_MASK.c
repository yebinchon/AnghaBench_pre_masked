
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int Error; } ;
struct rio_info {int RIONumBootPkts; int RIOBootCount; TYPE_1__ RIOError; scalar_t__ RIOBootPackets; scalar_t__ RIOBooting; } ;
struct DownLoad {int Count; int DataP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(struct rio_info *VAR_9, struct DownLoad * VAR_10)
{
 int VAR_11;

 FUNC_1();

 FUNC_4(VAR_6, "Data at user address %p\n", VAR_10->DataP);




 if (VAR_10->Count > VAR_8) {
  FUNC_4(VAR_6, "RTA Boot Code Too Large!\n");
  VAR_9->RIOError.Error = VAR_5;
  FUNC_2();
  return -VAR_4;
 }

 if (VAR_9->RIOBooting) {
  FUNC_4(VAR_6, "RTA Boot Code : BUSY BUSY BUSY!\n");
  VAR_9->RIOError.Error = VAR_0;
  FUNC_2();
  return -VAR_2;
 }






 VAR_11 = (VAR_7 - (VAR_10->Count % VAR_7)) % VAR_7;






 FUNC_3(VAR_9->RIOBootPackets, 0, VAR_11);





 if (FUNC_0(((u8 *)VAR_9->RIOBootPackets) + VAR_11, VAR_10->DataP, VAR_10->Count)) {
  FUNC_4(VAR_6, "Bad data copy from user space\n");
  VAR_9->RIOError.Error = VAR_1;
  FUNC_2();
  return -VAR_3;
 }





 VAR_9->RIONumBootPkts = (VAR_10->Count + VAR_11) / VAR_7;
 VAR_9->RIOBootCount = VAR_10->Count;

 FUNC_2();
 return 0;
}
