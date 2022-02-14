
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_6__* row; TYPE_5__* fields; } ;
typedef TYPE_2__ proxy_resultset_t ;
struct TYPE_13__ {int offset; TYPE_1__* data; } ;
typedef TYPE_3__ network_packet ;
typedef int network_mysqld_lenenc_type ;
typedef int lua_State ;
typedef int guint64 ;
typedef scalar_t__ gsize ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_1__* data; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct TYPE_14__ {TYPE_2__* udata; } ;
struct TYPE_11__ {int len; int str; } ;
typedef TYPE_4__ GRef ;
typedef TYPE_5__ GPtrArray ;
typedef TYPE_6__ GList ;


 int VAR_0 ;




 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_3__*,int*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int*) ;
 int FUNC_10 (TYPE_3__*,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_1) {
 GRef *VAR_2 = *(GRef **)FUNC_6(VAR_1, FUNC_7(1));
 proxy_resultset_t *VAR_3 = VAR_2->udata;
 network_packet VAR_4;
 GPtrArray *VAR_5 = VAR_3->fields;
 gsize VAR_6;
 int VAR_7 = 0;
 network_mysqld_lenenc_type VAR_8;

 GList *VAR_9 = VAR_3->row;

 FUNC_0(VAR_9 != ((void*)0), 0);

 VAR_4.data = VAR_9->data;
 VAR_4.offset = 0;

 VAR_7 = VAR_7 || FUNC_11(&VAR_4);
 VAR_7 = VAR_7 || FUNC_9(&VAR_4, &VAR_8);
 FUNC_0(VAR_7 == 0, 0);

 switch (VAR_8) {
 case 130:






 case 131:

  return 0;
 case 129:
 case 128:
  break;
 }

 FUNC_2(VAR_1);

 for (VAR_6 = 0; VAR_6 < VAR_5->len; VAR_6++) {
  guint64 VAR_10;

  VAR_7 = VAR_7 || FUNC_9(&VAR_4, &VAR_8);
  FUNC_0(VAR_7 == 0, 0);

  switch (VAR_8) {
  case 128:
   FUNC_10(&VAR_4, 1);
   FUNC_4(VAR_1);
   break;
  case 129:
   VAR_7 = VAR_7 || FUNC_8(&VAR_4, &VAR_10);
   VAR_7 = VAR_7 || !(VAR_10 <= VAR_4.data->len);
   VAR_7 = VAR_7 || !(VAR_4.offset + VAR_10 <= VAR_4.data->len);
   if (VAR_7) return FUNC_1(VAR_1, "%s: row-data is invalid", VAR_0);

   FUNC_3(VAR_1, VAR_4.data->str + VAR_4.offset, VAR_10);

   VAR_7 = VAR_7 || FUNC_10(&VAR_4, VAR_10);
   break;
  default:

   VAR_7 = 1;
   break;
  }


  FUNC_5(VAR_1, -2, VAR_6 + 1);
  FUNC_0(VAR_7 == 0, 0);
 }

 VAR_3->row = VAR_3->row->next;

 return 1;
}
