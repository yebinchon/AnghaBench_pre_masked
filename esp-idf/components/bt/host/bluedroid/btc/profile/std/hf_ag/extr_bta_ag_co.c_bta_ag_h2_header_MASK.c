
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {int sequence_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_0(UINT16 *VAR_8)
{
    UINT16 VAR_9 = 0x0801;
    UINT8 VAR_10 = VAR_7.sequence_number & (1 << 0);
    UINT8 VAR_11 = VAR_7.sequence_number & (1 << 1);
    VAR_9 |= (VAR_10 << 12
                | VAR_10 << 13
                | VAR_11 << (14 - 1)
                | VAR_11 << (15 - 1)
                );
    VAR_7.sequence_number++;
    *VAR_8 = VAR_9;
}
