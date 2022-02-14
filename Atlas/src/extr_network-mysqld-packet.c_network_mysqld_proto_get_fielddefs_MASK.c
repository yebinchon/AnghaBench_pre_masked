
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; int data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_proto_fielddef_t ;
typedef int network_mysqld_lenenc_type ;
typedef scalar_t__ guint64 ;
typedef int guint32 ;
typedef scalar_t__ guint ;
struct TYPE_11__ {int data; struct TYPE_11__* next; } ;
typedef int GPtrArray ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

GList *FUNC_7(GList *VAR_2, GPtrArray *VAR_3) {
 network_packet VAR_4;
 guint64 VAR_5;
 guint VAR_6;
 int VAR_7 = 0;
 guint32 VAR_8 = VAR_0;
 network_mysqld_lenenc_type VAR_9;

 VAR_4.data = VAR_2->data;
 VAR_4.offset = 0;

 VAR_7 = VAR_7 || FUNC_6(&VAR_4);

 VAR_7 = VAR_7 || FUNC_5(&VAR_4, &VAR_9);

 if (VAR_7) return ((void*)0);


 switch (VAR_9) {
 case 128:
  break;
 default:

  return ((void*)0);
 }

 VAR_7 = VAR_7 || FUNC_4(&VAR_4, &VAR_5);

 if (VAR_7) return ((void*)0);

 if (VAR_5 == 0) {

  return ((void*)0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  network_mysqld_proto_fielddef_t *VAR_10;

  VAR_2 = VAR_2->next;
  FUNC_0(VAR_2);

  VAR_4.data = VAR_2->data;
  VAR_4.offset = 0;

  VAR_10 = FUNC_2();

  VAR_7 = VAR_7 || FUNC_6(&VAR_4);
  VAR_7 = VAR_7 || FUNC_3(&VAR_4, VAR_10, VAR_8);

  FUNC_1(VAR_3, VAR_10);

  if (VAR_7) return ((void*)0);
 }


 VAR_2 = VAR_2->next;

 if (!VAR_2) return ((void*)0);

 VAR_4.data = VAR_2->data;
 VAR_4.offset = 0;

 VAR_7 = VAR_7 || FUNC_6(&VAR_4);

 VAR_7 = VAR_7 || FUNC_5(&VAR_4, &VAR_9);
 VAR_7 = VAR_7 || (VAR_9 != VAR_1);

 if (VAR_7) return ((void*)0);

 return VAR_2;
}
