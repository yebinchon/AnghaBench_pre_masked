
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int file; TYPE_3__* param; } ;
typedef TYPE_2__ pm_file ;
typedef TYPE_3__* gzFile ;
struct TYPE_9__ {int align; } ;
struct TYPE_11__ {int fpos_out; int* index; unsigned char* out_buff; int fpos_in; int block_in_buff; unsigned char* in_buff; TYPE_1__ header; } ;
typedef TYPE_3__ cso_struct ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (unsigned char*,int,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,void*,size_t) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int,unsigned char*,int) ;

size_t FUNC_8(void *VAR_7, size_t VAR_8, pm_file *VAR_9)
{
  int VAR_10;

  if (VAR_9->type == VAR_2)
  {
    VAR_10 = FUNC_1(VAR_7, 1, VAR_8, VAR_9->file);
  }
  else if (VAR_9->type == VAR_3)
  {
    gzFile VAR_11 = VAR_9->param;
    int VAR_12;
    VAR_10 = FUNC_4(VAR_11, VAR_7, VAR_8);
    VAR_12 = FUNC_3(VAR_11);
    if (VAR_10 > 0 && (VAR_12 == VAR_5 || VAR_12 == VAR_6))

      FUNC_5(VAR_11);
  }
  else if (VAR_9->type == VAR_1)
  {
    cso_struct *VAR_13 = VAR_9->param;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    int VAR_18 = VAR_13->fpos_out >> 11;
    int VAR_19 = VAR_13->index[VAR_18];
    int VAR_20 = VAR_13->index[VAR_18+1];
    unsigned char *VAR_21 = VAR_7, *VAR_22;

    VAR_10 = 0;
    while (VAR_8 != 0)
    {
      VAR_16 = VAR_13->fpos_out&0x7ff;
      if (VAR_16 == 0 && VAR_8 >= 2048)
           VAR_22 = VAR_21;
      else VAR_22 = VAR_13->out_buff;

      VAR_14 = (VAR_19&0x7fffffff) << VAR_13->header.align;

      if (VAR_19 < 0) {
        if (VAR_14 != VAR_13->fpos_in)
          FUNC_2(VAR_9->file, VAR_14, VAR_4);
        VAR_17 = FUNC_1(VAR_22, 1, 2048, VAR_9->file);
        VAR_13->fpos_in = VAR_14 + VAR_17;
        if (VAR_17 != 2048) break;
      } else {
        VAR_15 = (((VAR_20&0x7fffffff) << VAR_13->header.align) - VAR_14) & 0xfff;
        if (VAR_18 != VAR_13->block_in_buff)
        {
          if (VAR_14 != VAR_13->fpos_in)
            FUNC_2(VAR_9->file, VAR_14, VAR_4);
          VAR_17 = FUNC_1(VAR_13->in_buff, 1, VAR_15, VAR_9->file);
          VAR_13->fpos_in = VAR_14 + VAR_17;
          if (VAR_17 != VAR_15) {
            FUNC_0(VAR_0, "cso: read failed @ %08x", VAR_14);
            break;
          }
          VAR_13->block_in_buff = VAR_18;
        }
        VAR_17 = FUNC_7(VAR_22, 2048, VAR_13->in_buff, VAR_15);
        if (VAR_17 != 0) {
          FUNC_0(VAR_0, "cso: uncompress failed @ %08x with %i", VAR_14, VAR_17);
          break;
        }
      }

      VAR_17 = 2048;
      if (VAR_16 != 0 || VAR_8 < 2048) {

        if (VAR_8 < VAR_17) VAR_17 = VAR_8;
        if (2048 - VAR_16 < VAR_17) VAR_17 = 2048 - VAR_16;
        FUNC_6(VAR_21, VAR_22 + VAR_16, VAR_17);
      }
      VAR_10 += VAR_17;
      VAR_21 += VAR_17;
      VAR_13->fpos_out += VAR_17;
      VAR_8 -= VAR_17;
      VAR_18++;
      VAR_19 = VAR_20;
      VAR_20 = VAR_13->index[VAR_18+1];
    }
  }
  else
    VAR_10 = 0;

  return VAR_10;
}
