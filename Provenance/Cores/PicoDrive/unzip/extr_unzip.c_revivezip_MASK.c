
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fp; int zip; } ;
typedef TYPE_1__ ZIP ;


 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static ZIP* FUNC_1(ZIP* VAR_0) {
 if (!VAR_0->fp) {
  VAR_0->fp = FUNC_0(VAR_0->zip, "rb");
  if (!VAR_0->fp) {
   return 0;
  }
 }
 return VAR_0;

}
