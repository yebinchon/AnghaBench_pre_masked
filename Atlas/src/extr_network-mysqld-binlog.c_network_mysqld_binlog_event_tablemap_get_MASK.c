
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ offset; TYPE_7__* data; } ;
typedef TYPE_3__ network_packet ;
struct TYPE_17__ {int fields; int table_id; int table_name; int db_name; } ;
typedef TYPE_4__ network_mysqld_table ;
struct TYPE_14__ {scalar_t__ metadata_len; int columns_len; int* null_bits; scalar_t__* metadata; scalar_t__* columns; int table_id; int table_name; int db_name; } ;
struct TYPE_15__ {TYPE_1__ table_map_event; } ;
struct TYPE_18__ {TYPE_2__ event; } ;
typedef TYPE_5__ network_mysqld_binlog_event ;
typedef int guint8 ;
typedef int guint16 ;
typedef int guint ;
typedef int guchar ;
typedef enum enum_field_types { ____Placeholder_enum_field_types } enum_field_types ;
struct TYPE_20__ {scalar_t__ len; scalar_t__* str; } ;
struct TYPE_19__ {int max_length; int type; int decimals; int flags; } ;
typedef TYPE_6__ MYSQL_FIELD ;
typedef TYPE_7__ GString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int const VAR_3 ;



 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,TYPE_6__*) ;
 int FUNC_5 (int ,int ) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,int*) ;
 int FUNC_8 (TYPE_3__*,int*) ;

int FUNC_9(
  network_mysqld_binlog_event *VAR_5,
  network_mysqld_table *VAR_6) {

 network_packet VAR_7;
 GString VAR_8;
 guint VAR_9;
 int VAR_10 = 0;

 FUNC_5(VAR_6->db_name, VAR_5->event.table_map_event.db_name);
 FUNC_5(VAR_6->table_name, VAR_5->event.table_map_event.table_name);

 VAR_6->table_id = VAR_5->event.table_map_event.table_id;

 VAR_8.str = VAR_5->event.table_map_event.metadata;
 VAR_8.len = VAR_5->event.table_map_event.metadata_len;

 VAR_7.data = &VAR_8;
 VAR_7.offset = 0;


 for (VAR_9 = 0; VAR_9 < VAR_5->event.table_map_event.columns_len; VAR_9++) {
  MYSQL_FIELD *VAR_11 = FUNC_6();
  enum enum_field_types VAR_12;
  guint8 VAR_13, VAR_14;
  guint16 VAR_15;

  guint VAR_16 = VAR_9 / 8;
  guint VAR_17 = VAR_9 % 8;

  VAR_11->flags |= (VAR_5->event.table_map_event.null_bits[VAR_16] >> VAR_17) & 0x1 ? 0 : VAR_4;

  VAR_12 = (enum enum_field_types)VAR_5->event.table_map_event.columns[VAR_9];







  switch ((guchar)VAR_12) {
  case 134:
   VAR_10 = VAR_10 || FUNC_8(&VAR_7,
     &VAR_13);
   VAR_10 = VAR_10 || FUNC_8(&VAR_7,
     &VAR_14);
   if (!VAR_10) {
    if ((VAR_13 & 0x30) != 0x30) {

     VAR_11->max_length |= (((VAR_13 & 0x30) ^ 0x30) << 4);
     VAR_11->type = VAR_13 | 0x30;
    } else {
     VAR_11->max_length = VAR_14;
     VAR_11->type = VAR_13;
    }
   }

   break;
  case 130:
  case 129:


   VAR_10 = VAR_10 || FUNC_7(&VAR_7, &VAR_15);

   if (!VAR_10) {
    VAR_11->type = VAR_12;
    VAR_11->max_length = VAR_15;
   }
   break;
  case 140:
  case 147:

   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_13);

   if (!VAR_10) {
    VAR_11->type = (guchar)VAR_12;
    VAR_11->max_length = VAR_13;


    if (VAR_11->type == 147) {
     switch (VAR_11->max_length) {
     case 1:
      VAR_11->type = VAR_3;
      break;
     case 2:
      VAR_11->type = 147;
      break;
     case 3:
      VAR_11->type = VAR_2;
      break;
     case 4:
      VAR_11->type = VAR_1;
      break;
     default:
      VAR_10 = 1;
      break;
     }
    } else if (VAR_11->type == 140) {
     if (VAR_11->max_length != 4) {
      VAR_10 = 1;
     }
    } else {
     FUNC_0();
    }
   }

   break;
  case 136:
   VAR_11->type = VAR_12;




   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_13);
   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_14);

   if (!VAR_10) {
    VAR_11->max_length = VAR_13;
    VAR_11->decimals = VAR_14;
   }
   break;
  case 143:
  case 141:

   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_13);

   if (!VAR_10) {
    VAR_11->type = VAR_12;
    VAR_11->max_length = VAR_13;
   }
   break;
  case 142:



   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_13);
   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_14);

   if (!VAR_10) {
    VAR_11->type = VAR_13;
    VAR_11->max_length = VAR_14;
   }
   break;
  case 148:




   VAR_11->type = VAR_12;

   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_13);
   VAR_10 = VAR_10 || FUNC_8(&VAR_7, &VAR_14);

   if (!VAR_10) {
    VAR_11->max_length = VAR_14 + (VAR_13 == 0 ? 0 : 1);
   }

   break;


  case 144:
  case 146:
  case 145:
  case 133:
  case 132:
  case 128:

  case 131:
  case 135:
  case 139:
  case 138:
  case 137:
   VAR_11->type = VAR_12;
   break;
  default:
   FUNC_3("%s: field-type %d isn't handled",
     VAR_0,
     VAR_12
     );
   break;
  }

  FUNC_4(VAR_6->fields, VAR_11);
 }

 if (VAR_7.offset != VAR_7.data->len) {
  FUNC_2(VAR_0, VAR_5->event.table_map_event.columns, VAR_5->event.table_map_event.columns_len);
  FUNC_2(VAR_0, VAR_5->event.table_map_event.metadata, VAR_5->event.table_map_event.metadata_len);
 }
 if (VAR_7.offset != VAR_7.data->len) {
  FUNC_1("%s: ",
    VAR_0);
  VAR_10 = 1;
 }

 return VAR_10 ? -1 : 0;
}
