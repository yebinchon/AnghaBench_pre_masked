
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtb_flags; scalar_t__ dtb_offset; scalar_t__ dtb_xamot_offset; scalar_t__ dtb_tomax; scalar_t__ dtb_size; } ;
typedef TYPE_1__ dtrace_buffer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(dtrace_buffer_t *VAR_4)
{
 FUNC_0(VAR_4->dtb_flags & VAR_0);
 FUNC_1(&VAR_3, VAR_2);

 if (!(VAR_4->dtb_flags & VAR_1))
  return;
 if (VAR_4->dtb_offset < VAR_4->dtb_xamot_offset) {
  FUNC_2(VAR_4->dtb_tomax + VAR_4->dtb_offset,
      VAR_4->dtb_xamot_offset - VAR_4->dtb_offset);
 }

 if (VAR_4->dtb_offset > VAR_4->dtb_xamot_offset) {
  FUNC_2(VAR_4->dtb_tomax + VAR_4->dtb_offset,
      VAR_4->dtb_size - VAR_4->dtb_offset);
  FUNC_2(VAR_4->dtb_tomax, VAR_4->dtb_xamot_offset);
 }
}
