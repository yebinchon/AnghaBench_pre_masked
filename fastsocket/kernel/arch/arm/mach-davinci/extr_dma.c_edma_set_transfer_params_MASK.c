
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
typedef enum sync_dimension { ____Placeholder_sync_dimension } sync_dimension ;
struct TYPE_2__ {unsigned int num_slots; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int FUNC_2 (unsigned int,int ,unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,unsigned int,int,int) ;
 int FUNC_4 (unsigned int,int ,unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ,unsigned int,int) ;

void FUNC_6(unsigned VAR_7,
  u16 VAR_8, u16 VAR_9, u16 VAR_10,
  u16 VAR_11, enum sync_dimension VAR_12)
{
 unsigned VAR_13;

 VAR_13 = FUNC_1(VAR_7);
 VAR_7 = FUNC_0(VAR_7);

 if (VAR_7 < VAR_6[VAR_13]->num_slots) {
  FUNC_3(VAR_13, VAR_3, VAR_7,
    0x0000ffff, VAR_11 << 16);
  if (VAR_12 == VAR_0)
   FUNC_2(VAR_13, VAR_4, VAR_7, ~VAR_5);
  else
   FUNC_4(VAR_13, VAR_4, VAR_7, VAR_5);

  FUNC_5(VAR_13, VAR_1, VAR_7, (VAR_9 << 16) | VAR_8);
  FUNC_5(VAR_13, VAR_2, VAR_7, VAR_10);
 }
}
