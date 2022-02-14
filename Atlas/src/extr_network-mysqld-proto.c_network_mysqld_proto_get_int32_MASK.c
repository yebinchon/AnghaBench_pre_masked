
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_packet ;
typedef int guint64 ;
typedef int guint32 ;


 scalar_t__ FUNC_0 (int *,int*,int) ;

int FUNC_1(network_packet *VAR_0, guint32 *VAR_1) {
 guint64 VAR_2;

 if (FUNC_0(VAR_0, &VAR_2, 4)) return -1;

 *VAR_1 = VAR_2 & 0xffffffff;

 return 0;
}
