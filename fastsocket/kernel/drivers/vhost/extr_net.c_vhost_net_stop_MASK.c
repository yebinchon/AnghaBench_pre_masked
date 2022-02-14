
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhost_net {scalar_t__ vqs; } ;
struct socket {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct socket* FUNC_0 (struct vhost_net*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vhost_net *VAR_2, struct socket **VAR_3,
      struct socket **VAR_4)
{
 *VAR_3 = FUNC_0(VAR_2, VAR_2->vqs + VAR_1);
 *VAR_4 = FUNC_0(VAR_2, VAR_2->vqs + VAR_0);
}
