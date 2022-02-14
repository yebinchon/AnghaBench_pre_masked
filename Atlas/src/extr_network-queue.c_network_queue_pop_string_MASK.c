
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; scalar_t__ offset; int chunks; } ;
typedef TYPE_1__ network_queue ;
typedef scalar_t__ gsize ;
struct TYPE_12__ {scalar_t__ len; scalar_t__ str; } ;
typedef TYPE_2__ GString ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;

GString *FUNC_5(network_queue *VAR_1, gsize VAR_2, GString *VAR_3) {
 gsize VAR_4 = VAR_2;
 GString *VAR_5;

 if (VAR_1->len < VAR_2) {
  return ((void*)0);
 }

 while ((VAR_5 = FUNC_0(VAR_1->chunks))) {
  gsize VAR_6 = VAR_4 < (VAR_5->len - VAR_1->offset) ? VAR_4 : (VAR_5->len - VAR_1->offset);

  if (!VAR_3 && (VAR_1->offset == 0) && (VAR_5->len == VAR_2)) {





   VAR_3 = FUNC_1(VAR_1->chunks);
   VAR_1->len -= VAR_6;
   return VAR_3;
  }

  if (!VAR_3) {

   VAR_3 = FUNC_4(VAR_2);
  }
  FUNC_2(VAR_3, VAR_5->str + VAR_1->offset, VAR_6);

  VAR_1->offset += VAR_6;
  VAR_1->len -= VAR_6;
  VAR_4 -= VAR_6;

  if (VAR_5->len == VAR_1->offset) {

   FUNC_3(FUNC_1(VAR_1->chunks), VAR_0);
   VAR_1->offset = 0;
  } else {
   break;
  }
 }

 return VAR_3;
}
