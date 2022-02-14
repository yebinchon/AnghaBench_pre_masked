
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swapout_io_completion {scalar_t__ swp_io_busy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct swapout_io_completion* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct swapout_io_completion *
FUNC_1(void)
{ int VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
         if (VAR_1[VAR_3].swp_io_busy == 0)
          return (&VAR_1[VAR_3]);
 }
 FUNC_0(VAR_2 == VAR_0);

 return ((void*)0);
}
