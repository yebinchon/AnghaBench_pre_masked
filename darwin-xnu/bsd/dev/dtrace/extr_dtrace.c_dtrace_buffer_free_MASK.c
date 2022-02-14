
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dtb_size; int dtb_flags; int * dtb_xamot; int * dtb_tomax; } ;
typedef TYPE_1__ dtrace_buffer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(dtrace_buffer_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (int)VAR_1; VAR_4++) {
  dtrace_buffer_t *VAR_5 = &VAR_3[VAR_4];

  if (VAR_5->dtb_tomax == ((void*)0)) {
   FUNC_0(VAR_5->dtb_xamot == ((void*)0));
   FUNC_0(VAR_5->dtb_size == 0);
   continue;
  }

  if (VAR_5->dtb_xamot != ((void*)0)) {
   FUNC_0(!(VAR_5->dtb_flags & VAR_0));
   FUNC_1(VAR_5->dtb_xamot, VAR_5->dtb_size);

   FUNC_0(VAR_2 >= VAR_5->dtb_size);
   VAR_2 -= VAR_5->dtb_size;
  }

  FUNC_1(VAR_5->dtb_tomax, VAR_5->dtb_size);
  FUNC_0(VAR_2 >= VAR_5->dtb_size);
  VAR_2 -= VAR_5->dtb_size;

  VAR_5->dtb_size = 0;
  VAR_5->dtb_tomax = ((void*)0);
  VAR_5->dtb_xamot = ((void*)0);
 }
}
