
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zPath; } ;
typedef TYPE_1__ unixFile ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_2(unixFile *VAR_1, int VAR_2, int VAR_3){
  if( FUNC_0(VAR_2) ){
    FUNC_1(VAR_0, "close",
                       VAR_1 ? VAR_1->zPath : 0, VAR_3);
  }
}
