
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_packet ;
typedef scalar_t__ guint8 ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;

int FUNC_2(network_packet *VAR_0) {
 guint8 VAR_1;


 if (0 != FUNC_1(VAR_0, &VAR_1)) {
  return -1;
 }
 FUNC_0(VAR_1 == 0, -1);

 return 0;
}
