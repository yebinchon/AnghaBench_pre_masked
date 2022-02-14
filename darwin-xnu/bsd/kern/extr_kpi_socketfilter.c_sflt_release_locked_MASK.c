
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sf_handle; int (* sf_unregistered ) (int ) ;} ;
struct socket_filter {scalar_t__ sf_refcount; TYPE_1__ sf_filter; } ;


 int FUNC_0 (struct socket_filter*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct socket_filter *VAR_2)
{
 VAR_2->sf_refcount--;
 if (VAR_2->sf_refcount == 0) {

  if (VAR_2->sf_filter.sf_unregistered) {
   FUNC_2(VAR_1);
   VAR_2->sf_filter.sf_unregistered(
       VAR_2->sf_filter.sf_handle);
   FUNC_1(VAR_1);
  }


  FUNC_0(VAR_2, VAR_0);
 }
}
