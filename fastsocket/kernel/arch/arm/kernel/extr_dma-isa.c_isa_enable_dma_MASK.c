
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int length; unsigned long dma_address; } ;
struct TYPE_5__ {unsigned int dma_mode; int sgcount; int count; scalar_t__ invalid; TYPE_1__ buf; int addr; TYPE_1__* sg; } ;
typedef TYPE_2__ dma_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned long FUNC_0 (int *,int ,int,int) ;
 int ** VAR_12 ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_13, dma_t *VAR_14)
{
 if (VAR_14->invalid) {
  unsigned long VAR_15, VAR_16;
  unsigned int VAR_17;
  enum dma_data_direction VAR_18;

  VAR_17 = (VAR_13 & 3) | VAR_14->dma_mode;
  switch (VAR_14->dma_mode & VAR_2) {
  case 129:
   VAR_18 = VAR_1;
   break;

  case 128:
   VAR_18 = VAR_4;
   break;

  case 130:
   VAR_18 = VAR_0;
   break;

  default:
   VAR_18 = VAR_3;
   break;
  }

  if (!VAR_14->sg) {




   VAR_14->sg = &VAR_14->buf;
   VAR_14->sgcount = 1;
   VAR_14->buf.length = VAR_14->count;
   VAR_14->buf.dma_address = FUNC_0(((void*)0),
    VAR_14->addr, VAR_14->count,
    VAR_18);
  }

  VAR_15 = VAR_14->buf.dma_address;
  VAR_16 = VAR_14->buf.length - 1;

  FUNC_1(VAR_15 >> 16, VAR_12[VAR_13][VAR_11]);
  FUNC_1(VAR_15 >> 24, VAR_12[VAR_13][VAR_10]);

  if (VAR_13 >= 4) {
   VAR_15 >>= 1;
   VAR_16 >>= 1;
  }

  FUNC_1(0, VAR_12[VAR_13][VAR_6]);

  FUNC_1(VAR_15, VAR_12[VAR_13][VAR_5]);
  FUNC_1(VAR_15 >> 8, VAR_12[VAR_13][VAR_5]);

  FUNC_1(VAR_16, VAR_12[VAR_13][VAR_7]);
  FUNC_1(VAR_16 >> 8, VAR_12[VAR_13][VAR_7]);

  FUNC_1(VAR_17, VAR_12[VAR_13][VAR_9]);
  VAR_14->invalid = 0;
 }
 FUNC_1(VAR_13 & 3, VAR_12[VAR_13][VAR_8]);
}
