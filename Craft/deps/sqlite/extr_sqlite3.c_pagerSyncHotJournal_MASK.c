
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int journalHdr; int jfd; int noSync; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(Pager *VAR_2){
  int VAR_3 = VAR_0;
  if( !VAR_2->noSync ){
    VAR_3 = FUNC_1(VAR_2->jfd, VAR_1);
  }
  if( VAR_3==VAR_0 ){
    VAR_3 = FUNC_0(VAR_2->jfd, &VAR_2->journalHdr);
  }
  return VAR_3;
}
