
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long urb_count; unsigned long iso_skip_count; unsigned long iso_err_count; unsigned long data_count; } ;
struct uvd {unsigned long iso_packet_len; TYPE_2__* dev; TYPE_1__ stats; } ;
struct TYPE_4__ {int dev; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,unsigned long,char,unsigned long) ;

__attribute__((used)) static void FUNC_2(const struct uvd *VAR_1)
{
 if ((VAR_1 != ((void*)0)) && (VAR_1->stats.urb_count > 0)) {
  unsigned long VAR_2, VAR_3, VAR_4, VAR_5;
  VAR_2 = VAR_1->stats.urb_count * VAR_0;
  VAR_3 = VAR_1->stats.iso_skip_count + VAR_1->stats.iso_err_count;
  VAR_4 = VAR_2 - VAR_3;

  FUNC_0(VAR_2 != 0);
  if (VAR_4 < (((unsigned long)-1)/100))
   VAR_5 = (100 * VAR_4) / VAR_2;
  else
   VAR_5 = VAR_4 / (VAR_2 / 100);
  FUNC_1(&VAR_1->dev->dev,
    "Packet Statistics: Total=%lu. Empty=%lu. Usage=%lu%%\n",
    VAR_2, VAR_3, VAR_5);
  if (VAR_1->iso_packet_len > 0) {
   unsigned long VAR_6, VAR_7;
   char VAR_8 = ' ';
   VAR_6 = VAR_2 * VAR_1->iso_packet_len;
   VAR_7 = VAR_1->stats.data_count;
   FUNC_0(VAR_6 != 0);
   if (VAR_7 < (((unsigned long)-1)/100))
    VAR_5 = (100 * VAR_7) / VAR_6;
   else
    VAR_5 = VAR_7 / (VAR_6 / 100);

   if (VAR_7 > 10*1024) {
    VAR_7 /= 1024;
    VAR_8 = 'K';
    if (VAR_7 > 10*1024) {
     VAR_7 /= 1024;
     VAR_8 = 'M';
     if (VAR_7 > 10*1024) {
      VAR_7 /= 1024;
      VAR_8 = 'G';
      if (VAR_7 > 10*1024) {
       VAR_7 /= 1024;
       VAR_8 = 'T';
      }
     }
    }
   }
   FUNC_1(&VAR_1->dev->dev,
     "Transfer Statistics: Transferred=%lu%cB Usage=%lu%%\n",
     VAR_7, VAR_8, VAR_5);
  }
 }
}
