
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nsec; int sec; int min; int hour; } ;
typedef TYPE_1__ network_mysqld_type_date_t ;
typedef int gboolean ;



__attribute__((used)) static gboolean FUNC_0(network_mysqld_type_date_t *VAR_0) {
 return (VAR_0->nsec < 1000000000 &&
       VAR_0->sec < 100 &&
       VAR_0->min <= 60 &&
       VAR_0->hour <= 24);
}
