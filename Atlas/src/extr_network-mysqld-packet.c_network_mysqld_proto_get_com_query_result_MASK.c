
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
struct TYPE_20__ {int server_status; int insert_id; int affected_rows; int warnings; } ;
typedef TYPE_3__ network_mysqld_ok_packet_t ;
struct TYPE_21__ {int server_status; int warnings; } ;
typedef TYPE_4__ network_mysqld_eof_packet_t ;
typedef int network_mysqld_con ;
struct TYPE_22__ {int state; int query_status; int server_status; int was_resultset; int bytes; int rows; int warning_count; int binary_encoded; int insert_id; int affected_rows; } ;
typedef TYPE_5__ network_mysqld_com_query_result_t ;
typedef int guint8 ;
typedef int gboolean ;
struct TYPE_18__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(network_packet *VAR_4, network_mysqld_com_query_result_t *VAR_5, network_mysqld_con *VAR_6, gboolean VAR_7) {
 int VAR_8 = 0;
 guint8 VAR_9;
 int VAR_10 = 0;
 network_mysqld_eof_packet_t *VAR_11;
 network_mysqld_ok_packet_t *VAR_12;




 switch (VAR_5->state) {
 case 131:
  VAR_10 = VAR_10 || FUNC_8(VAR_4, &VAR_9);
  if (VAR_10) break;

  switch (VAR_9) {
  case 135:
   VAR_5->query_status = 135;
   VAR_8 = 1;
   break;
  case 133:




   FUNC_9(VAR_6);
   VAR_5->query_status = 133;

   VAR_12 = FUNC_4();

   VAR_10 = VAR_10 || FUNC_7(VAR_4, VAR_12);

   if (!VAR_10) {
    if (VAR_12->server_status & VAR_1) {

    } else {
     VAR_8 = 1;
    }

    VAR_5->server_status = VAR_12->server_status;
    VAR_5->warning_count = VAR_12->warnings;
    VAR_5->affected_rows = VAR_12->affected_rows;
    VAR_5->insert_id = VAR_12->insert_id;
    VAR_5->was_resultset = 0;
    VAR_5->binary_encoded= VAR_7;
   }

   FUNC_3(VAR_12);

   break;
  case 134:

   VAR_5->state = 130;
   VAR_8 = 1;

   break;
  case 136:
   FUNC_0("%s: COM_QUERY packet should not be (EOF), got: 0x%02x",
     VAR_0,
     VAR_9);

   VAR_10 = 1;

   break;
  default:
   VAR_5->query_status = 133;

   VAR_5->state = 132;
   break;
  }
  break;
 case 132:
  VAR_10 = VAR_10 || FUNC_8(VAR_4, &VAR_9);
  if (VAR_10) break;

  switch (VAR_9) {
  case 135:
  case 133:
  case 134:
   FUNC_0("%s: COM_QUERY should not be (OK|NULL|ERR), got: 0x%02x",
     VAR_0,
     VAR_9);

   VAR_10 = 1;

   break;
  case 136:





   if (VAR_4->data->len == 9) {
    VAR_11 = FUNC_2();

    VAR_10 = VAR_10 || FUNC_5(VAR_4, VAR_11);

    if (!VAR_10) {
     VAR_5->state = 128;


     VAR_5->server_status = VAR_11->server_status;
    }

    FUNC_1(VAR_11);
   } else {
    VAR_5->state = 128;
   }
   break;
  default:
   break;
  }
  break;
 case 128:
  VAR_10 = VAR_10 || FUNC_8(VAR_4, &VAR_9);
  if (VAR_10) break;

  switch (VAR_9) {
  case 136:
   if (VAR_4->data->len == 9) {
    VAR_11 = FUNC_2();

    VAR_10 = VAR_10 || FUNC_5(VAR_4, VAR_11);

    if (!VAR_10) {
     VAR_5->was_resultset = 1;
     if (!(VAR_5->server_status & 4096)) {
      VAR_5->server_status = VAR_11->server_status;
     }
     VAR_5->warning_count = VAR_11->warnings;

     if (VAR_5->server_status & VAR_1) {
      VAR_5->state = 131;
     } else {
      VAR_8 = 1;
     }
    }

    FUNC_1(VAR_11);
   }

   break;
  case 135:






   VAR_8 = 1;
   break;
  case 133:
  case 134:
   if (VAR_7) {



   } else {

    break;
   }
  default:
   VAR_5->rows++;
   VAR_5->bytes += VAR_4->data->len;
   break;
  }
  break;
 case 130:

  if (VAR_4->data->len == VAR_4->offset) {
   VAR_5->state = 129;
   VAR_8 = 1;
  }
  break;
 case 129:
  VAR_10 = VAR_10 || FUNC_6(VAR_4, &VAR_9);
  if (VAR_10) break;

  switch (VAR_9) {
  case 133:
   VAR_8 = 1;
   break;
  case 134:
  case 135:
  case 136:
  default:
   FUNC_0("%s: COM_QUERY,should be (OK), got: 0x%02x",
     VAR_0,
     VAR_9);

   VAR_10 = 1;

   break;
  }

  break;
 }

 if (VAR_10) return -1;

 return VAR_8;
}
