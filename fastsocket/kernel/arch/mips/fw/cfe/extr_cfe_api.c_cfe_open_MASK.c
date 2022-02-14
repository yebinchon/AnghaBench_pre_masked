
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xiocb_buffer {int dummy; } ;
struct TYPE_3__ {int buf_length; int buf_ptr; scalar_t__ buf_offset; } ;
struct TYPE_4__ {TYPE_1__ xiocb_buffer; } ;
struct cfe_xiocb {scalar_t__ xiocb_status; int xiocb_handle; int xiocb_psize; TYPE_2__ plist; scalar_t__ xiocb_flags; int xiocb_fcode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct cfe_xiocb*) ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_1)
{
 struct cfe_xiocb VAR_2;

 VAR_2.xiocb_fcode = VAR_0;
 VAR_2.xiocb_status = 0;
 VAR_2.xiocb_handle = 0;
 VAR_2.xiocb_flags = 0;
 VAR_2.xiocb_psize = sizeof(struct xiocb_buffer);
 VAR_2.plist.xiocb_buffer.buf_offset = 0;
 VAR_2.plist.xiocb_buffer.buf_ptr = FUNC_0(VAR_1);
 VAR_2.plist.xiocb_buffer.buf_length = FUNC_2(VAR_1);

 FUNC_1(&VAR_2);

 if (VAR_2.xiocb_status < 0)
  return VAR_2.xiocb_status;
 return VAR_2.xiocb_handle;
}
