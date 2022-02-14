
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {int charsetnr; int length; int type; int flags; int decimals; int name; int table; int org_name; int org_table; int db; int catalog; } ;
typedef TYPE_1__ network_mysqld_proto_fielddef_t ;
typedef int guint8 ;
typedef int guint32 ;
typedef void* guint16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,void**) ;
 scalar_t__ FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;

int FUNC_6(network_packet *VAR_1, network_mysqld_proto_fielddef_t *VAR_2, guint32 VAR_3) {
 int VAR_4 = 0;

 if (VAR_3 & VAR_0) {
  guint16 VAR_5;
  guint32 VAR_6;
  guint8 VAR_7;
  guint16 VAR_8;
  guint8 VAR_9;

  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->catalog, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->db, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->table, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->org_table, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->name, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->org_name, ((void*)0));

  VAR_4 = VAR_4 || FUNC_5(VAR_1, 1);

  VAR_4 = VAR_4 || FUNC_0(VAR_1, &VAR_5);
  VAR_4 = VAR_4 || FUNC_2(VAR_1, &VAR_6);
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_7);
  VAR_4 = VAR_4 || FUNC_0(VAR_1, &VAR_8);
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_9);

  VAR_4 = VAR_4 || FUNC_5(VAR_1, 2);
  if (!VAR_4) {
   VAR_2->charsetnr = VAR_5;
   VAR_2->length = VAR_6;
   VAR_2->type = VAR_7;
   VAR_2->flags = VAR_8;
   VAR_2->decimals = VAR_9;
  }
 } else {
  guint8 VAR_10;
  guint32 VAR_11;
  guint8 VAR_12;
  guint8 VAR_13;



  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->table, ((void*)0));
  VAR_4 = VAR_4 || FUNC_4(VAR_1, &VAR_2->name, ((void*)0));
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_10);
  VAR_4 = VAR_4 || (VAR_10 != 3);
  VAR_4 = VAR_4 || FUNC_1(VAR_1, &VAR_11);
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_10);
  VAR_4 = VAR_4 || (VAR_10 != 1);
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_12);
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_10);
  if (VAR_10 == 3) {
   guint16 VAR_14;

   VAR_4 = VAR_4 || FUNC_0(VAR_1, &VAR_14);

   if (!VAR_4) VAR_2->flags = VAR_14;
  } else if (VAR_10 == 2) {
   guint8 VAR_15;

   VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_15);

   if (!VAR_4) VAR_2->flags = VAR_15;
  } else {
   VAR_4 = -1;
  }
  VAR_4 = VAR_4 || FUNC_3(VAR_1, &VAR_13);

  if (!VAR_4) {
   VAR_2->charsetnr = 0x08 ;
   VAR_2->length = VAR_11;
   VAR_2->type = VAR_12;
   VAR_2->decimals = VAR_13;
  }
 }

 return VAR_4 ? -1 : 0;
}
