
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_packet_id; scalar_t__ packet_id_is_reset; } ;
typedef TYPE_1__ network_socket ;
typedef int network_queue ;
typedef int gsize ;
typedef int GString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,char const*,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *) ;

int FUNC_6(network_socket *VAR_2, network_queue *VAR_3, const char *VAR_4, size_t VAR_5) {
 gsize VAR_6 = 0;

 do {
  GString *VAR_7;
  gsize VAR_8 = FUNC_0(VAR_5, VAR_1);

  VAR_7 = FUNC_2(VAR_5 + 4);

  if (VAR_2->packet_id_is_reset) {
   VAR_2->packet_id_is_reset = VAR_0;
   VAR_2->last_packet_id = 0xff;
  }

  FUNC_4(VAR_7, VAR_8);
  FUNC_3(VAR_7, ++VAR_2->last_packet_id);
  FUNC_1(VAR_7, VAR_4 + VAR_6, VAR_8);

  FUNC_5(VAR_3, VAR_7);

  if (VAR_5 == VAR_1) {
   VAR_7 = FUNC_2(4);

   FUNC_4(VAR_7, 0);
   FUNC_3(VAR_7, ++VAR_2->last_packet_id);

   FUNC_5(VAR_3, VAR_7);
  }

  VAR_5 -= VAR_8;
  VAR_6 += VAR_8;
 } while (VAR_5 > 0);

 return 0;
}
