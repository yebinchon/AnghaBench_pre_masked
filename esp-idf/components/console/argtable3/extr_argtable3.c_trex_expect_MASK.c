
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* _p; } ;
typedef TYPE_1__ TRex ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_2(TRex *VAR_0, int VAR_1){
 if((*VAR_0->_p) != VAR_1)
  FUNC_1(VAR_0, FUNC_0("expected paren"));
 VAR_0->_p++;
}
