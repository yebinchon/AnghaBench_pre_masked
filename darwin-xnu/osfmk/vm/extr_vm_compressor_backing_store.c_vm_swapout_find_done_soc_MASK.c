
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swapout_io_completion {scalar_t__ swp_io_done; } ;


 int VAR_0 ;
 struct swapout_io_completion* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct swapout_io_completion *
FUNC_0(void)
{ int VAR_3;

        if (VAR_2) {
         for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
          if (VAR_1[VAR_3].swp_io_done)
           return (&VAR_1[VAR_3]);
  }
 }
 return ((void*)0);
}
