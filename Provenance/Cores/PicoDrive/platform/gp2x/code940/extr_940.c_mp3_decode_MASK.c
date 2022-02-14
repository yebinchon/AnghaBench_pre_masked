
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mp3_offs; int mp3_len; size_t mp3_buffsel; int mp3_lasterr; int mp3_errors; } ;
struct TYPE_3__ {int * mp3_buffer; int mp3dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char**,int*,int ,int ) ;
 unsigned char* VAR_2 ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (int*,int,int) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_5 = VAR_3->mp3_offs;
 unsigned char *VAR_6 = VAR_2 + VAR_5;
 int VAR_7 = VAR_3->mp3_len - VAR_5;
 int VAR_8;
 int VAR_9 = 0, VAR_10;

 if (VAR_7 <= 0) return;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
 {
  VAR_8 = FUNC_1(VAR_6, VAR_7);
  if (VAR_8 < 0)
   goto set_eof;

  VAR_6 += VAR_8;
  VAR_7 -= VAR_8;

  VAR_10 = FUNC_0(VAR_4->mp3dec, &VAR_6, &VAR_7,
    VAR_4->mp3_buffer[VAR_3->mp3_buffsel], 0);
  if (VAR_10) {
   if (VAR_10 == VAR_1)

    continue;

   if (VAR_10 == VAR_0)
    goto set_eof;

   if (VAR_10 <= -6 && VAR_10 >= -12) {


    VAR_6++;
    VAR_7--;
    continue;
   }
   VAR_3->mp3_errors++;
   VAR_3->mp3_lasterr = VAR_10;
  }
  break;
 }

 FUNC_2(&VAR_3->mp3_offs, VAR_5, VAR_6 - VAR_2);
 return;

set_eof:
 FUNC_2(&VAR_3->mp3_offs, VAR_5, VAR_3->mp3_len);
}
