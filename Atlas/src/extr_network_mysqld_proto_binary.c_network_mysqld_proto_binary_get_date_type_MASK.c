
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network_packet ;
typedef int network_mysqld_type_t ;
struct TYPE_4__ {int month; int day; int hour; int min; int sec; int nsec; int year; } ;
typedef TYPE_1__ network_mysqld_type_date_t ;
typedef int guint8 ;
typedef int date ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(network_packet *VAR_0, network_mysqld_type_t *VAR_1) {
 int VAR_2 = 0;
 guint8 VAR_3;
 network_mysqld_type_date_t VAR_4;

 VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_3);



 switch (VAR_3) {
 case 11:
 case 7:
 case 4:
 case 0:
  break;
 default:
  return -1;
 }

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));
 if (VAR_3 > 0) {
  VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_4.year);
  VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_4.month);
  VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_4.day);

  if (VAR_3 > 4) {
   VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_4.hour);
   VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_4.min);
   VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_4.sec);

   if (VAR_3 > 7) {
    VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_4.nsec);
   }
  }
 }

 if (0 == VAR_2) {
  VAR_2 = VAR_2 || FUNC_4(VAR_1, &VAR_4);
 }

 return VAR_2 ? -1 : 0;
}
