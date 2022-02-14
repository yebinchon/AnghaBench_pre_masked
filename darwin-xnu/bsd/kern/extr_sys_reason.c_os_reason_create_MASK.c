
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* os_reason_t ;
struct TYPE_5__ {int osr_refcount; int osr_lock; int * osr_kcd_buf; scalar_t__ osr_bufsize; scalar_t__ osr_flags; int osr_code; int osr_namespace; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

os_reason_t
FUNC_5(uint32_t VAR_5, uint64_t VAR_6)
{
 os_reason_t VAR_7 = VAR_0;

 VAR_7 = (os_reason_t) FUNC_4(VAR_4);
 if (VAR_7 == VAR_0) {
  return VAR_7;
 }

 FUNC_0(VAR_7, sizeof(*VAR_7));

 VAR_7->osr_namespace = VAR_5;
 VAR_7->osr_code = VAR_6;
 VAR_7->osr_flags = 0;
 VAR_7->osr_bufsize = 0;
 VAR_7->osr_kcd_buf = ((void*)0);

 FUNC_2(&VAR_7->osr_lock, VAR_3, VAR_2);
 VAR_7->osr_refcount = 1;

 return VAR_7;
}
