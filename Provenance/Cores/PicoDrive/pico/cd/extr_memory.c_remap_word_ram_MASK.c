
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned long* Fetch; } ;
struct TYPE_5__ {unsigned long* Fetch; } ;
struct TYPE_4__ {void** word_ram1M; void* word_ram2M; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int,int,void*,int) ;
 int FUNC_1 (int ,int,int,int ,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int ** VAR_15 ;
 int ** VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_2(u32 VAR_21)
{
  void *VAR_22;


  if (!(VAR_21 & 4)) {

    VAR_22 = VAR_4->word_ram2M;
    FUNC_0(0x200000, 0x23ffff, VAR_22, 0);
    FUNC_0(0x080000, 0x0bffff, VAR_22, 1);

  }
  else {
    int VAR_23 = VAR_21 & 1;
    int VAR_24 = (VAR_21 & 0x18) >> 3;
    VAR_22 = VAR_4->word_ram1M[VAR_23];
    FUNC_0(0x200000, 0x21ffff, VAR_22, 0);
    VAR_22 = VAR_4->word_ram1M[VAR_23 ^ 1];
    FUNC_0(0x0c0000, 0x0effff, VAR_22, 1);

    FUNC_1(VAR_10, 0x220000, 0x23ffff, VAR_6[VAR_23], 1);
    FUNC_1(VAR_9, 0x220000, 0x23ffff, VAR_5[VAR_23], 1);
    FUNC_1(VAR_12, 0x220000, 0x23ffff, VAR_8[VAR_23], 1);
    FUNC_1(VAR_11, 0x220000, 0x23ffff, VAR_7[VAR_23], 1);

    FUNC_1(VAR_18, 0x080000, 0x0bffff, VAR_14[VAR_23 ^ 1], 1);
    FUNC_1(VAR_17, 0x080000, 0x0bffff, VAR_13[VAR_23 ^ 1], 1);
    FUNC_1(VAR_20, 0x080000, 0x0bffff, VAR_16[VAR_23 ^ 1][VAR_24], 1);
    FUNC_1(VAR_19, 0x080000, 0x0bffff, VAR_15[VAR_23 ^ 1][VAR_24], 1);
  }
}
