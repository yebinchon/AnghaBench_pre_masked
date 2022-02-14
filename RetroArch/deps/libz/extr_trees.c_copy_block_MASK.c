
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ush ;
typedef int ulg ;
struct TYPE_6__ {int bits_sent; } ;
typedef TYPE_1__ deflate_state ;
typedef int charf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(deflate_state *VAR_0, charf *VAR_1, unsigned VAR_2, int VAR_3)
   {
      FUNC_0(VAR_0);

      if (VAR_3) {
         FUNC_2(VAR_0, (ush)VAR_2);
         FUNC_2(VAR_0, (ush)~VAR_2);



      }



      while (VAR_2--) {
         FUNC_1(VAR_0, *VAR_1++);
      }
   }
