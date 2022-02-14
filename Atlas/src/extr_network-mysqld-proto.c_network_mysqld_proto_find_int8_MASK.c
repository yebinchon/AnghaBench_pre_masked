
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_1__ network_packet ;
typedef scalar_t__ guint8 ;
typedef scalar_t__ guint ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*) ;

int FUNC_1(network_packet *VAR_0, guint8 VAR_1, guint *VAR_2) {
 int VAR_3 = 0;
 guint VAR_4 = VAR_0->offset;

 while (!VAR_3) {
  guint8 VAR_5;

  VAR_3 = VAR_3 || FUNC_0(VAR_0, &VAR_5);
  if (!VAR_3) {
   if (VAR_1 == VAR_5) {
    *VAR_2 = VAR_0->offset - VAR_4;
    break;
   }
  }
 }

 VAR_0->offset = VAR_4;

 return VAR_3;
}
