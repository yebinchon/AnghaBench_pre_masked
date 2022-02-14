
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sa_family; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_8__ {TYPE_7__ sin_addr; int sin_port; } ;
struct TYPE_10__ {TYPE_2__ common; TYPE_1__ ipv4; } ;
struct TYPE_11__ {TYPE_3__ addr; } ;
typedef TYPE_4__ network_address ;
typedef int gboolean ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_7__) ;
 int FUNC_4 (int ) ;

gboolean FUNC_5(network_address *VAR_3, network_address *VAR_4) {
 if (VAR_4->addr.common.sa_family != VAR_3->addr.common.sa_family) {
  FUNC_2("%s: is-local family %d != %d",
    VAR_1,
    VAR_4->addr.common.sa_family,
    VAR_3->addr.common.sa_family
    );
  return VAR_0;
 }

 switch (VAR_4->addr.common.sa_family) {
 case 129:



  FUNC_1("%s: is-local src: %s(:%d) =? ...",
    VAR_1,
    FUNC_3(VAR_4->addr.ipv4.sin_addr),
    FUNC_4(VAR_4->addr.ipv4.sin_port));

  FUNC_1("%s: is-local dst: %s(:%d)",
    VAR_1,
    FUNC_3(VAR_3->addr.ipv4.sin_addr),
    FUNC_4(VAR_3->addr.ipv4.sin_port)
    );

  return (VAR_3->addr.ipv4.sin_addr.s_addr == VAR_4->addr.ipv4.sin_addr.s_addr);





 default:
  FUNC_0("%s: sa_family = %d", VAR_1, VAR_4->addr.common.sa_family);
  return VAR_0;
 }
}
