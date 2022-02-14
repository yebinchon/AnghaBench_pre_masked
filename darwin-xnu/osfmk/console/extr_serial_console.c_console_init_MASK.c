
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int console_buf_t ;
typedef int UInt32 ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ buffer; scalar_t__ write_ptr; scalar_t__ read_ptr; scalar_t__ used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (char*,int) ;

void
FUNC_6(void)
{
 int VAR_9, VAR_10;
 uint32_t * VAR_11;

 if (!FUNC_0(0, VAR_2, (UInt32 *)&VAR_7.len))
  return;

 FUNC_1(VAR_7.len > 0);

 VAR_9 = FUNC_4(VAR_8, (vm_offset_t *)&VAR_7.buffer, VAR_1, VAR_5);
 if (VAR_9 != VAR_3) {
  FUNC_5("console_ring_init() failed to allocate ring buffer, error %d\n", VAR_9);
 }


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_11 = (uint32_t *)((uintptr_t)VAR_7.buffer + VAR_7.len + (VAR_10 * sizeof(console_buf_t)));
  *VAR_11 = VAR_0;
 }

 VAR_7.used = 0;
 VAR_7.read_ptr = VAR_7.buffer;
 VAR_7.write_ptr = VAR_7.buffer;
 FUNC_2();
 FUNC_3(&VAR_6);
}
