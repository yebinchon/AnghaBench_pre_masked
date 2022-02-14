
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int body; int header; } ;
typedef TYPE_1__ ogg_page ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(ogg_page *VAR_1) {
  if(VAR_1){
    FUNC_1(VAR_1->header);
    FUNC_1(VAR_1->body);
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
  }
  return VAR_0;
}
