
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pb_type; int pb_mbuf; } ;
typedef TYPE_1__ pbuf_t ;
typedef int mbuf_svc_class_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

mbuf_svc_class_t
FUNC_2(const pbuf_t *VAR_3)
{

 if (VAR_3->pb_type == VAR_1)
  return FUNC_1(VAR_3->pb_mbuf);

 FUNC_0(VAR_3->pb_type == VAR_2);

 return (VAR_0);
}
