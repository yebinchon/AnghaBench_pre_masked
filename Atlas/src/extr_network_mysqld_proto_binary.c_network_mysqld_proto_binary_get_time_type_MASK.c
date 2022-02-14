
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
typedef int network_packet ;
struct TYPE_4__ {int sign; int hour; int min; int sec; int nsec; int days; } ;
typedef TYPE_1__ network_mysqld_type_time_t ;
typedef int network_mysqld_type_t ;
typedef int guint8 ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(network_packet *VAR_0, network_mysqld_type_t *VAR_1) {
 int VAR_2 = 0;
 guint8 VAR_3;
 network_mysqld_type_time_t VAR_4;

 VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_3);



 switch (VAR_3) {
 case 12:
 case 8:
 case 0:
  break;
 default:
  return -1;
 }

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 if (VAR_3 > 0) {
  VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_4.sign);
  VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_4.days);

  VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_4.hour);
  VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_4.min);
  VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_4.sec);

  if (VAR_3 > 8) {
   VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_4.nsec);
  }
 }

 if (0 == VAR_2) {
  VAR_2 = VAR_2 || FUNC_3(VAR_1, &VAR_4);
 }

 return VAR_2 ? -1 : 0;
}
