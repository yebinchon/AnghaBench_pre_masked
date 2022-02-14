
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* os_reason_t ;
struct TYPE_4__ {scalar_t__ osr_bufsize; int osr_kcd_descriptor; int * osr_kcd_buf; int osr_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(os_reason_t VAR_2)
{
 FUNC_1(VAR_2 != VAR_1);
 FUNC_0(&VAR_2->osr_lock, VAR_0);

 if (VAR_2->osr_kcd_buf != ((void*)0) && VAR_2->osr_bufsize != 0) {
  FUNC_3(VAR_2->osr_kcd_buf, VAR_2->osr_bufsize);
 }

 VAR_2->osr_bufsize = 0;
 VAR_2->osr_kcd_buf = ((void*)0);
 FUNC_2(&VAR_2->osr_kcd_descriptor, sizeof(VAR_2->osr_kcd_descriptor));

 return;
}
