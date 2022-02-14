
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
struct slgt_info {unsigned int rbuf_fill_count; unsigned int rbuf_fill_index; int rx_restart; unsigned int rbuf_fill_level; unsigned int rbuf_count; int pending_bh; TYPE_2__* rbufs; TYPE_1__ params; int device_name; } ;
struct TYPE_6__ {unsigned char* buf; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__) ;
 int FUNC_2 (struct slgt_info*,int ) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (TYPE_2__,unsigned int) ;
 int FUNC_5 (TYPE_2__,unsigned short) ;

__attribute__((used)) static void FUNC_6(struct slgt_info *VAR_7)
{
 unsigned int VAR_8 = VAR_7->rbuf_fill_count;
 unsigned int VAR_9 = VAR_7->rbuf_fill_index;
 unsigned short VAR_10;

 while (FUNC_2(VAR_7, VAR_6) & VAR_3) {
  VAR_10 = FUNC_2(VAR_7, VAR_5);
  FUNC_0(("isr_rxdata %s RDR=%04X\n", VAR_7->device_name, VAR_10));
  if (FUNC_1(VAR_7->rbufs[VAR_9])) {

   FUNC_3(VAR_7);
   VAR_7->rx_restart = 1;
   continue;
  }
  VAR_7->rbufs[VAR_9].buf[VAR_8++] = (unsigned char)VAR_10;

  if (VAR_7->params.mode == VAR_4)
   VAR_7->rbufs[VAR_9].buf[VAR_8++] = (unsigned char)(VAR_10 >> 8);
  if (VAR_8 == VAR_7->rbuf_fill_level || (VAR_10 & VAR_1)) {

   FUNC_4(VAR_7->rbufs[VAR_9], VAR_8);
   FUNC_5(VAR_7->rbufs[VAR_9], VAR_2 | (VAR_10 >> 8));
   VAR_7->rbuf_fill_count = VAR_8 = 0;
   if (++VAR_9 == VAR_7->rbuf_count)
    VAR_9 = 0;
   VAR_7->pending_bh |= VAR_0;
  }
 }

 VAR_7->rbuf_fill_index = VAR_9;
 VAR_7->rbuf_fill_count = VAR_8;
}
