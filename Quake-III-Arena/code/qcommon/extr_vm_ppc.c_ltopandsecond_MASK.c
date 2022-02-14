
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* instructionPointers; } ;


 int FUNC_0 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__* VAR_10 ;
 int FUNC_1 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static void FUNC_2() {
    if (VAR_11>=0 && VAR_7[VAR_8-1] == (VAR_3 | VAR_6<<21 | VAR_4<<16 | 4 ) && VAR_10[VAR_9]==0 ) {
 VAR_8--;
 if (!VAR_11) {
     VAR_14->instructionPointers[VAR_9] = VAR_8 * 4;
 }
 FUNC_0( VAR_1, VAR_5, VAR_4, 0 );
 FUNC_0( VAR_0, VAR_4, VAR_4, -4 );
    } else if (VAR_11>=0 && VAR_7[VAR_8-1] == (VAR_2 | VAR_6<<21 | VAR_4<<16 | 0 ) && VAR_10[VAR_9]==0 ) {
 VAR_8--;
 if (!VAR_11) {
     VAR_14->instructionPointers[VAR_9] = VAR_8 * 4;
 }
 FUNC_0( VAR_1, VAR_5, VAR_4, -4 );
 FUNC_0( VAR_0, VAR_4, VAR_4, -8 );
    } else {
 FUNC_1();
 FUNC_0( VAR_1, VAR_5, VAR_4, -4 );
 FUNC_0( VAR_0, VAR_4, VAR_4, -8 );
    }
    VAR_13 = VAR_12;
}
