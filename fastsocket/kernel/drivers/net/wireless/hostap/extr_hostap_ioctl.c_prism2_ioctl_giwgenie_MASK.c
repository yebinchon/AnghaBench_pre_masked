
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {int generic_elem_len; int * generic_elem; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     struct iw_point *VAR_3, char *VAR_4)
{
 struct hostap_interface *VAR_5 = FUNC_1(VAR_1);
 local_info_t *VAR_6 = VAR_5->local;
 int VAR_7 = VAR_6->generic_elem_len - 2;

 if (VAR_7 <= 0 || VAR_6->generic_elem == ((void*)0)) {
  VAR_3->length = 0;
  return 0;
 }

 if (VAR_3->length < VAR_7)
  return -VAR_0;

 VAR_3->length = VAR_7;
 FUNC_0(VAR_4, VAR_6->generic_elem + 2, VAR_7);

 return 0;
}
