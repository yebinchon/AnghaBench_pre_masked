
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in_addr {int dummy; } ;
typedef int boolean_t ;
struct TYPE_2__ {int mount_point_length; struct in_addr server_ip; int server_name; int mount_point; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int ,int) ;

boolean_t
FUNC_2(struct in_addr * VAR_3,
   char * VAR_4, int VAR_5,
   char * VAR_6, int VAR_7)
{
    if (VAR_1 == ((void*)0))
 return (VAR_0);

    VAR_4[0] = '\0';
    VAR_6[0] = '\0';

    if (VAR_1->mount_point_length == 0) {
 return (VAR_0);
    }
    if (VAR_7 < VAR_1->mount_point_length) {
 FUNC_0("netboot: path too small %d < %d\n",
        VAR_7, VAR_1->mount_point_length);
 return (VAR_0);
    }
    FUNC_1(VAR_6, VAR_1->mount_point, VAR_7);
    FUNC_1(VAR_4, VAR_1->server_name, VAR_5);
    *VAR_3 = VAR_1->server_ip;
    return (VAR_2);
}
