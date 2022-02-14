
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* os_reason_t ;
typedef int mach_vm_address_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int osr_lock; int * osr_kcd_buf; int osr_kcd_descriptor; int osr_bufsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(os_reason_t VAR_9, uint32_t VAR_10,
    boolean_t VAR_11)
{
 if (VAR_9 == VAR_7) {
  return VAR_0;
 }

 if (VAR_10 > VAR_6) {
  return VAR_0;
 }

 FUNC_5(&VAR_9->osr_lock);

 FUNC_7(VAR_9);

 if (VAR_10 == 0) {
  FUNC_6(&VAR_9->osr_lock);
  return 0;
 }

 if (VAR_11) {
  VAR_9->osr_kcd_buf = FUNC_3(VAR_10, VAR_8);
  FUNC_0(VAR_9->osr_kcd_buf != ((void*)0));
 } else {
  VAR_9->osr_kcd_buf = FUNC_2(VAR_10, VAR_8);
  if (VAR_9->osr_kcd_buf == ((void*)0)) {
   FUNC_6(&VAR_9->osr_lock);
   return VAR_2;
  }
 }

 FUNC_1(VAR_9->osr_kcd_buf, VAR_10);

 VAR_9->osr_bufsize = VAR_10;

 if (FUNC_4(&VAR_9->osr_kcd_descriptor, (mach_vm_address_t) VAR_9->osr_kcd_buf,
     VAR_3, VAR_10, VAR_4) != VAR_5) {
  FUNC_7(VAR_9);

  FUNC_6(&VAR_9->osr_lock);
  return VAR_1;
 }

 FUNC_6(&VAR_9->osr_lock);

 return 0;
}
