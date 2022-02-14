
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct xiocb_buffer {int dummy; } ;
struct TYPE_3__ {unsigned int buf_ioctlcmd; int buf_length; int buf_retlen; int buf_ptr; int buf_offset; } ;
struct TYPE_4__ {TYPE_1__ xiocb_buffer; } ;
struct cfe_xiocb {int xiocb_status; int xiocb_handle; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; int xiocb_fcode; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (struct cfe_xiocb*) ;

int
FUNC_2(int VAR_1, unsigned int VAR_2, unsigned char *VAR_3,
   int VAR_4, int *VAR_5, u64 VAR_6)
{
 struct cfe_xiocb VAR_7;

 VAR_7.xiocb_fcode = VAR_0;
 VAR_7.xiocb_status = 0;
 VAR_7.xiocb_handle = VAR_1;
 VAR_7.xiocb_flags = 0;
 VAR_7.xiocb_psize = sizeof(struct xiocb_buffer);
 VAR_7.plist.xiocb_buffer.buf_offset = VAR_6;
 VAR_7.plist.xiocb_buffer.buf_ioctlcmd = VAR_2;
 VAR_7.plist.xiocb_buffer.buf_ptr = FUNC_0(VAR_3);
 VAR_7.plist.xiocb_buffer.buf_length = VAR_4;

 FUNC_1(&VAR_7);

 if (VAR_5)
  *VAR_5 = VAR_7.plist.xiocb_buffer.buf_retlen;
 return VAR_7.xiocb_status;
}
