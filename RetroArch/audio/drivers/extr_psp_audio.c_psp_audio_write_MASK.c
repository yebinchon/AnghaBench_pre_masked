
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void const uint32_t ;
typedef size_t uint16_t ;
typedef int ssize_t ;
struct TYPE_2__ {size_t write_pos; int fifo_lock; scalar_t__ buffer; int cond_lock; int cond; scalar_t__ read_pos; scalar_t__ nonblocking; int running; } ;
typedef TYPE_1__ psp_audio_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__,void const*,size_t) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(void *VAR_2, const void *VAR_3, size_t VAR_4)
{
   psp_audio_t* VAR_5 = (psp_audio_t*)VAR_2;
   uint16_t VAR_6 = VAR_5->write_pos;
   uint16_t VAR_7 = VAR_4 / sizeof(uint32_t);

   if (!VAR_5->running)
      return -1;

   if (VAR_5->nonblocking)
   {
      if (VAR_0 - ((uint16_t)
            (VAR_5->write_pos - VAR_5->read_pos) & VAR_1) < VAR_4)
      return 0;
   }

   FUNC_2(VAR_5->cond_lock);
   while (VAR_0 - ((uint16_t)
      (VAR_5->write_pos - VAR_5->read_pos) & VAR_1) < VAR_4)
      FUNC_1(VAR_5->cond, VAR_5->cond_lock);
   FUNC_3(VAR_5->cond_lock);

   FUNC_2(VAR_5->fifo_lock);
   if((VAR_6 + VAR_7) > VAR_0)
   {
      FUNC_0(VAR_5->buffer + VAR_6, VAR_3,
            (VAR_0 - VAR_6) * sizeof(uint32_t));
      FUNC_0(VAR_5->buffer, (uint32_t*) VAR_3 +
            (VAR_0 - VAR_6),
            (VAR_6 + VAR_7 - VAR_0) * sizeof(uint32_t));
   }
   else
      FUNC_0(VAR_5->buffer + VAR_6, VAR_3, VAR_4);

   VAR_6 += VAR_7;
   VAR_6 &= VAR_1;
   VAR_5->write_pos = VAR_6;

   FUNC_3(VAR_5->fifo_lock);
   return VAR_4;

}
