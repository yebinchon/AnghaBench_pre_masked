
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int (* clear_screen ) (unsigned int,unsigned int,int,unsigned int,int) ;} ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 char VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_0 (int,char,int) ;
 int FUNC_1 (unsigned int,unsigned int,int,unsigned int,int) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_9, unsigned int VAR_10, int VAR_11, unsigned int VAR_12,
  int VAR_13)
{
 if (!VAR_6) return;

 if ( VAR_9 < VAR_4 && VAR_10 < VAR_5 && VAR_12 <= VAR_5 )
 {
  uint32_t VAR_14, VAR_15;

  switch (VAR_13) {
   case 0:
    VAR_14 = (VAR_10 * VAR_4) + VAR_9;
    VAR_15 = (VAR_12 * VAR_4) - 1;
    break;
   case 1:
    VAR_14 = (VAR_11 * VAR_4);
    VAR_15 = (VAR_10 * VAR_4) + VAR_9;
    break;
   case 2:
    VAR_14 = (VAR_11 * VAR_4);
    VAR_15 = (VAR_12 * VAR_4) - 1;
    break;
   default:
    VAR_14 = 0;
    VAR_15 = 0;
    break;
  }

  FUNC_0(VAR_1 + VAR_14, VAR_0, VAR_15 - VAR_14 + 1);
  FUNC_0(VAR_2 + VAR_14, ' ', VAR_15 - VAR_14 + 1);
  FUNC_0(VAR_3 + VAR_14, VAR_7, VAR_15 - VAR_14 + 1);
 }

 VAR_8.clear_screen(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
}
