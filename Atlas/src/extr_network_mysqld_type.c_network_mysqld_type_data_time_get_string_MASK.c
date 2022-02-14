
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nsec; int sec; int min; int hour; int days; scalar_t__ sign; } ;
typedef TYPE_1__ network_mysqld_type_time_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ network_mysqld_type_t ;
typedef int gsize ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*,int ,int ,int ,int ,int ) ;
 char* FUNC_1 (char*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(network_mysqld_type_t *VAR_1, char **VAR_2, gsize *VAR_3) {
 network_mysqld_type_time_t *VAR_4 = VAR_1->data;

 if (((void*)0) == VAR_1->data) return -1;

 if (((void*)0) != *VAR_2) {

  if (*VAR_3 < VAR_0) {
   return -1;
  }
  *VAR_3 = FUNC_0(*VAR_2, *VAR_3, "%s%d %02u:%02u:%02u.%09u",
    VAR_4->sign ? "-" : "",
    VAR_4->days,
    VAR_4->hour,
    VAR_4->min,
    VAR_4->sec,
    VAR_4->nsec);
 } else {
  *VAR_2 = FUNC_1("%s%d %02u:%02u:%02u.%09u",
    VAR_4->sign ? "-" : "",
    VAR_4->days,
    VAR_4->hour,
    VAR_4->min,
    VAR_4->sec,
    VAR_4->nsec);
  *VAR_3 = FUNC_2(*VAR_2);
 }

 return 0;
}
