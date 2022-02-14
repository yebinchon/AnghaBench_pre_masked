
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {size_t generic_elem_len; int dev; TYPE_1__* func; int * generic_elem; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;
struct TYPE_3__ {int (* set_rid ) (int ,int ,int *,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int *,size_t) ;
 struct hostap_interface* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int *,size_t) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, u8 *VAR_4,
         size_t VAR_5)
{
 struct hostap_interface *VAR_6 = FUNC_4(VAR_3);
 local_info_t *VAR_7 = VAR_6->local;
 u8 *VAR_8;





 VAR_8 = FUNC_2(VAR_5 + 2, VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 *((__le16 *) VAR_8) = FUNC_0(VAR_5);
 FUNC_3(VAR_8 + 2, VAR_4, VAR_5);

 FUNC_1(VAR_7->generic_elem);
 VAR_7->generic_elem = VAR_8;
 VAR_7->generic_elem_len = VAR_5 + 2;

 return VAR_7->func->set_rid(VAR_7->dev, VAR_2,
        VAR_8, VAR_5 + 2);
}
