
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
typedef size_t guint ;
struct TYPE_8__ {size_t len; char* str; } ;
typedef TYPE_2__ GString ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,char*,size_t) ;

__attribute__((used)) static int FUNC_2(network_packet *VAR_0, GString *VAR_1) {
 guint VAR_2;

 FUNC_0(VAR_0, -1);
 FUNC_0(VAR_1, -1);

 for (VAR_2 = VAR_0->offset; VAR_2 < VAR_0->data->len; VAR_2++) {
  const char VAR_3 = VAR_0->data->str[VAR_2];

  if (VAR_3 == '\n') break;
 }

 if (VAR_0->data->str[VAR_2] == '\n') {
  FUNC_1(VAR_1, VAR_0->data->str + VAR_0->offset, VAR_2 - VAR_0->offset);

  VAR_0->offset = VAR_2 + 1;

  return 0;
 }

 return -1;
}
