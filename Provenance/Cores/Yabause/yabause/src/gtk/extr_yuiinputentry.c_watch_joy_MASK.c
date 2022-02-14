
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ gpointer ;
typedef scalar_t__ gboolean ;
struct TYPE_2__ {scalar_t__ (* Scan ) (int) ;int (* KeyName ) (scalar_t__,char*,int) ;int Name; int canScan; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,char*,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,char*,int) ;

__attribute__((used)) static gboolean FUNC_5(gpointer VAR_9) {
 u32 VAR_10;

 if (! VAR_7) return VAR_5;

 if (! VAR_1->canScan) {
  VAR_7 = VAR_0;
  return VAR_5;
 }

 VAR_10 = VAR_1->Scan(VAR_4 | VAR_2 | VAR_3);

 if (VAR_10 == 0) {
  return VAR_5;
 } else {
  char VAR_11[100];

  FUNC_2(VAR_11, "Pad.%s.1", (char *)VAR_9);
  FUNC_0(VAR_8, VAR_1->Name, VAR_11, VAR_10);
  VAR_1->KeyName(VAR_10, VAR_11, 100);
  FUNC_1(VAR_6, VAR_11);
  VAR_7 = VAR_0;
  return VAR_0;
 }
}
