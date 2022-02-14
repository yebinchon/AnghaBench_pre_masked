
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_6__* data; } ;
typedef TYPE_1__ network_packet ;
typedef int network_mysqld_frm ;
struct TYPE_12__ {int len; int str; } ;
struct TYPE_11__ {int message; } ;
typedef int GMappedFile ;
typedef TYPE_2__ GError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,int ,TYPE_2__**) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 TYPE_6__* FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 () ;

int FUNC_14(
  const char *VAR_2,
  const char *VAR_3) {
 network_packet *VAR_4;
 GMappedFile *VAR_5;
 GError *VAR_6 = ((void*)0);
 network_mysqld_frm *VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_5(VAR_2, VAR_0, &VAR_6);
 if (!VAR_5) {
  FUNC_0("%s: %s",
    VAR_1,
    VAR_6->message);
  FUNC_1(VAR_6);
  return -1;
 }

 VAR_4 = FUNC_13();
 VAR_4->data = FUNC_7(((void*)0));

 VAR_4->data->str = FUNC_3(VAR_5);
 VAR_4->data->len = FUNC_4(VAR_5);

 VAR_7 = FUNC_8();
 VAR_8 = VAR_8 || FUNC_11(VAR_4, VAR_7);
 if (!VAR_8) {
  FUNC_9(VAR_7);
  FUNC_10(VAR_7, VAR_3);
 }

 FUNC_2(VAR_5);

 FUNC_6(VAR_4->data, VAR_0);
 FUNC_12(VAR_4);

 return VAR_8 ? -1 : 0;
}
