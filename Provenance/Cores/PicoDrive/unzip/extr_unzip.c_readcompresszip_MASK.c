
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zipent {int compressed_size; } ;
struct TYPE_4__ {int zip; int fp; } ;
typedef TYPE_1__ ZIP ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*,struct zipent*) ;

int FUNC_3(ZIP* VAR_1, struct zipent* VAR_2, char* VAR_3) {
 int VAR_4 = FUNC_2(VAR_1,VAR_2);
 if (VAR_4!=0)
  return VAR_4;

 if (FUNC_1(VAR_3, VAR_2->compressed_size, 1, VAR_1->fp)!=1) {
  FUNC_0 ("Reading compressed data", VAR_0, VAR_1->zip);
  return -1;
 }

 return 0;
}
