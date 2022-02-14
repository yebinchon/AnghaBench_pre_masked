
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; TYPE_1__* data; } ;
typedef TYPE_2__ network_packet ;
struct TYPE_11__ {int sqlstate; int errmsg; int errcode; } ;
typedef TYPE_3__ network_mysqld_err_packet_t ;
typedef scalar_t__ guint8 ;
typedef int guint32 ;
typedef int guint16 ;
typedef int gchar ;
struct TYPE_9__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int **,int) ;

int FUNC_6(network_packet *VAR_3, network_mysqld_err_packet_t *VAR_4) {
 guint8 VAR_5, VAR_6;
 guint16 VAR_7;
 gchar *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 guint32 VAR_10 = VAR_0;

 int VAR_11 = 0;

 VAR_11 = VAR_11 || FUNC_4(VAR_3, &VAR_5);
 if (VAR_11) return -1;

 if (VAR_5 != VAR_2) {
  FUNC_0("%s: expected the first byte to be 0xff, got %d",
    VAR_1,
    VAR_5);
  return -1;
 }

 VAR_11 = VAR_11 || FUNC_3(VAR_3, &VAR_7);
 if (VAR_10 & VAR_0) {
  VAR_11 = VAR_11 || FUNC_4(VAR_3, &VAR_6);
  VAR_11 = VAR_11 || (VAR_6 != '#');
  VAR_11 = VAR_11 || FUNC_5(VAR_3, &VAR_8, 5);
 }
 if (VAR_3->offset < VAR_3->data->len) {
  VAR_11 = VAR_11 || FUNC_5(VAR_3, &VAR_9, VAR_3->data->len - VAR_3->offset);
 }

 if (!VAR_11) {
  VAR_4->errcode = VAR_7;
  if (VAR_9) FUNC_2(VAR_4->errmsg, VAR_9);
  FUNC_2(VAR_4->sqlstate, VAR_8);
 }

 if (VAR_8) FUNC_1(VAR_8);
 if (VAR_9) FUNC_1(VAR_9);

 return VAR_11 ? -1 : 0;
}
