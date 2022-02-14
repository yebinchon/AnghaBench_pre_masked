
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int fifo_size; int ptr1_reg; int fifo_start; } ;
struct cx88_core {int dummy; } ;
typedef void* s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct sram_channel* VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_5 ;
 void** FUNC_2 (int,int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static s16 *FUNC_4(struct cx88_core *VAR_6, u32 *VAR_7)
{
 struct sram_channel *VAR_8 = &VAR_4[VAR_3];
 s16 *VAR_9;

 unsigned int VAR_10;
 unsigned int VAR_11 = VAR_8->fifo_size/VAR_0;
 unsigned int VAR_12 = VAR_11/4;
 unsigned int VAR_13 = VAR_12*(VAR_0-1);

 u32 VAR_14 = FUNC_0(VAR_8->ptr1_reg);
 u32 VAR_15 = (VAR_14 - VAR_8->fifo_start + VAR_11);

 FUNC_1(1, "read RDS samples: current_address=%08x (offset=%08x), "
  "sample_count=%d, aud_intstat=%08x\n", VAR_14,
  VAR_14 - VAR_8->fifo_start, VAR_13,
  FUNC_0(VAR_2));

 VAR_9 = FUNC_2(sizeof(s16)*VAR_13, VAR_1);
 if (!VAR_9)
  return ((void*)0);

 *VAR_7 = VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++) {
  VAR_15 = VAR_15 % (VAR_0*VAR_11);
  VAR_9[VAR_10] = FUNC_0(VAR_8->fifo_start + VAR_15);
  VAR_15 += 4;
 }

 if (VAR_5 >= 2) {
  FUNC_1(2, "RDS samples dump: ");
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
   FUNC_3("%hd ", VAR_9[VAR_10]);
  FUNC_3(".\n");
 }

 return VAR_9;
}
