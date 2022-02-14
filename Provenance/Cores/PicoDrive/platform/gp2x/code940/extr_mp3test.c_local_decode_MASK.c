
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mp3_offs; int mp3_len; size_t mp3_buffsel; int mp3_lasterr; int mp3_errors; } ;
struct TYPE_3__ {int * mp3_buffer; int mp3dec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char**,int*,int ,int ) ;
 int FUNC_1 (unsigned char*,int) ;
 unsigned char* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_2(void)
{
 int VAR_4 = VAR_2->mp3_offs;
 unsigned char *VAR_5 = VAR_1 + VAR_4;
 int VAR_6 = VAR_2->mp3_len - VAR_4;
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_6 <= 0) return;

 VAR_7 = FUNC_1(VAR_5, VAR_6);
 if (VAR_7 < 0) {
  VAR_2->mp3_offs = VAR_2->mp3_len;
  return;
 }
 VAR_5 += VAR_7;
 VAR_6 -= VAR_7;

 VAR_8 = FUNC_0(VAR_3->mp3dec, &VAR_5, &VAR_6,
   VAR_3->mp3_buffer[VAR_2->mp3_buffsel], 0);
 if (VAR_8) {
  if (VAR_8 == VAR_0) {
   VAR_2->mp3_offs = VAR_2->mp3_len;
   return;
  } else if (VAR_8 <= -6 && VAR_8 >= -12) {


   VAR_5++;
  }
  VAR_2->mp3_errors++;
  VAR_2->mp3_lasterr = VAR_8;
 }
 VAR_2->mp3_offs = VAR_5 - VAR_1;
}
