
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ this_residual; int ptr; TYPE_4__* buffer; int buffers_residual; } ;
struct scsi_cmnd {unsigned char* cmnd; TYPE_2__ SCp; TYPE_1__* device; } ;
struct TYPE_11__ {unsigned short base; unsigned long recon_tmo; } ;
typedef TYPE_3__ ppa_struct ;
struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_9__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned long VAR_7 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (unsigned short) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_8)
{





 ppa_struct *VAR_9 = FUNC_0(VAR_8->device->host);
 unsigned short VAR_10 = VAR_9->base;
 unsigned long VAR_11 = VAR_7;

 unsigned char VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;

 VAR_13 = VAR_8->cmnd[0];
 VAR_15 = ((VAR_13 == VAR_4) ||
  (VAR_13 == VAR_3) || (VAR_13 == VAR_6) || (VAR_13 == VAR_5));





 VAR_12 = (FUNC_4(VAR_10) & 0xf0);

 while (VAR_12 != (unsigned char) 0xf0) {




  if (FUNC_6(VAR_7, VAR_11 + 1))
   return 0;

  if ((VAR_8->SCp.this_residual <= 0)) {
   FUNC_1(VAR_9, VAR_1);
   return -1;
  }
  if ((VAR_12 & 0xc0) != 0xc0) {



   unsigned long VAR_17 = VAR_9->recon_tmo;
   for (; VAR_17 && ((VAR_12 = (FUNC_4(VAR_10) & 0xf0)) & 0xc0) != 0xc0;
        VAR_17--)
    FUNC_7(1);

   if (!VAR_17)
    return 0;
  }


  VAR_14 = (VAR_15 && (VAR_8->SCp.this_residual >= VAR_2))
      ? VAR_2 : 1;

  if (VAR_12 == (unsigned char) 0xc0)
   VAR_16 = FUNC_3(VAR_9, VAR_8->SCp.ptr, VAR_14);
  else
   VAR_16 = FUNC_2(VAR_9, VAR_8->SCp.ptr, VAR_14);

  VAR_8->SCp.ptr += VAR_14;
  VAR_8->SCp.this_residual -= VAR_14;

  if (!VAR_16) {
   FUNC_1(VAR_9, VAR_0);
   return -1;
  }
  if (VAR_8->SCp.buffer && !VAR_8->SCp.this_residual) {

   if (VAR_8->SCp.buffers_residual--) {
    VAR_8->SCp.buffer++;
    VAR_8->SCp.this_residual =
        VAR_8->SCp.buffer->length;
    VAR_8->SCp.ptr = FUNC_5(VAR_8->SCp.buffer);
   }
  }

  VAR_12 = (FUNC_4(VAR_10) & 0xf0);

  if (!(VAR_12 & 0x80))
   return 0;
 }
 return 1;
}
