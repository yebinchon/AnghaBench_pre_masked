
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_info {scalar_t__ RIOQuickCheck; scalar_t__ RIOSignalProcess; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct rio_info *VAR_3)
{
 if (VAR_3->RIOQuickCheck != VAR_1)
  return (0);
 VAR_3->RIOQuickCheck = VAR_0;
 if (VAR_3->RIOSignalProcess) {
  FUNC_0(VAR_2, "Send SIG-HUP");



 }
 return (0);
}
