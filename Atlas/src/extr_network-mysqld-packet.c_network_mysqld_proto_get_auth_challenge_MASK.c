
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_3__ {int capabilities; int charset; int server_status; int server_version; int challenge; int * server_version_str; int thread_id; } ;
typedef TYPE_1__ network_mysqld_auth_challenge ;
typedef int guint8 ;
typedef int gchar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,int **) ;
 scalar_t__ FUNC_9 (int *,int **,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*,int*,int*,int*) ;

int FUNC_12(network_packet *VAR_2, network_mysqld_auth_challenge *VAR_3) {
 int VAR_4, VAR_5, VAR_6;
 gchar *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 guint8 VAR_9;
 int VAR_10 = 0;

 VAR_10 = VAR_10 || FUNC_7(VAR_2, &VAR_9);

 if (VAR_10) return -1;

 switch (VAR_9) {
 case 0xff:
  return -1;
 case 0x0a:
  break;
 default:
  FUNC_1("%s: unknown protocol %d",
    VAR_1,
    VAR_9
    );
  return -1;
 }

 VAR_10 = VAR_10 || FUNC_8(VAR_2, &VAR_3->server_version_str);
 VAR_10 = VAR_10 || (((void*)0) == VAR_3->server_version_str);

 VAR_10 = VAR_10 || FUNC_6(VAR_2, &VAR_3->thread_id);






 VAR_10 = VAR_10 || FUNC_9(VAR_2, &VAR_7, 8);

 VAR_10 = VAR_10 || FUNC_10(VAR_2, 1);

 VAR_10 = VAR_10 || FUNC_5(VAR_2, &VAR_3->capabilities);
 VAR_10 = VAR_10 || FUNC_7(VAR_2, &VAR_3->charset);
 VAR_10 = VAR_10 || FUNC_5(VAR_2, &VAR_3->server_status);

 VAR_10 = VAR_10 || FUNC_10(VAR_2, 13);

 if (VAR_3->capabilities & VAR_0) {
  VAR_10 = VAR_10 || FUNC_9(VAR_2, &VAR_8, 12);
  VAR_10 = VAR_10 || FUNC_10(VAR_2, 1);
 }

 if (!VAR_10) {


  if (3 != FUNC_11(VAR_3->server_version_str, "%d.%d.%d%*s", &VAR_4, &VAR_5, &VAR_6)) {


   FUNC_0("%s: protocol 10, but version number not parsable", VAR_1);

   return -1;
  }




  if (VAR_5 < 0 || VAR_5 > 100 ||
      VAR_6 < 0 || VAR_6 > 100 ||
      VAR_4 < 0 || VAR_4 > 10) {
   FUNC_0("%s: protocol 10, but version number out of range", VAR_1);

   return -1;
  }

  VAR_3->server_version =
   VAR_4 * 10000 +
   VAR_5 * 100 +
   VAR_6;
  FUNC_4(VAR_3->challenge, 0);
  FUNC_3(VAR_3->challenge, VAR_7, 8);
  if (VAR_8) FUNC_3(VAR_3->challenge, VAR_8, 12);
 }

 if (VAR_7) FUNC_2(VAR_7);
 if (VAR_8) FUNC_2(VAR_8);

 return VAR_10 ? -1 : 0;
}
