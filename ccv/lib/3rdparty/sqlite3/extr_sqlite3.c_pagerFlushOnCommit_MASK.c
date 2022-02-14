
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tempFile; int pPCache; int fd; } ;
typedef TYPE_1__ Pager ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(Pager *VAR_0, int VAR_1){
  if( VAR_0->tempFile==0 ) return 1;
  if( !VAR_1 ) return 0;
  if( !FUNC_0(VAR_0->fd) ) return 0;
  return (FUNC_1(VAR_0->pPCache)>=25);
}
