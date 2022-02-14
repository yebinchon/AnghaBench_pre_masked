
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_driver_state {int dummy; } ;
struct vio_dring_register {int num_cookies; int options; int descr_size; int num_descr; scalar_t__ dring_ident; } ;


 int VAR_0 ;
 int FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (int ,char*,unsigned long long,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct vio_driver_state *VAR_1,
        struct vio_dring_register *VAR_2)
{
 FUNC_1(VAR_0, "GOT DRING_REG NACK ident[%llx] "
        "ndesc[%u] dsz[%u] opt[0x%x] ncookies[%u]\n",
        (unsigned long long) VAR_2->dring_ident,
        VAR_2->num_descr, VAR_2->descr_size, VAR_2->options,
        VAR_2->num_cookies);

 return FUNC_0(VAR_1);
}
