
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int length; int type; } ;
struct TYPE_9__ {int length; int type; int tag; int revision_code; } ;
struct TYPE_11__ {TYPE_4__ go; TYPE_3__ header; } ;
struct TYPE_8__ {int length; int type; } ;
struct TYPE_12__ {TYPE_5__ mdb; TYPE_2__ header; } ;
struct TYPE_7__ {int length; } ;
struct write_sccb {TYPE_6__ msg_buf; TYPE_1__ header; } ;
struct sclp_buffer {unsigned short columns; unsigned short htab; scalar_t__ current_length; int * current_line; scalar_t__ mto_char_sum; scalar_t__ mto_number; scalar_t__ retry_count; struct write_sccb* sccb; } ;
struct msg_buf {int dummy; } ;
struct mdb {int dummy; } ;
struct go {int dummy; } ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct write_sccb*,int ,int) ;

struct sclp_buffer *
FUNC_1(void *VAR_2, unsigned short VAR_3, unsigned short VAR_4)
{
 struct sclp_buffer *VAR_5;
 struct write_sccb *VAR_6;

 VAR_6 = (struct write_sccb *) VAR_2;




 VAR_5 = ((struct sclp_buffer *) ((addr_t) VAR_6 + VAR_1)) - 1;
 VAR_5->sccb = VAR_6;
 VAR_5->retry_count = 0;
 VAR_5->mto_number = 0;
 VAR_5->mto_char_sum = 0;
 VAR_5->current_line = ((void*)0);
 VAR_5->current_length = 0;
 VAR_5->columns = VAR_3;
 VAR_5->htab = VAR_4;


 FUNC_0(VAR_6, 0, sizeof(struct write_sccb));
 VAR_6->header.length = sizeof(struct write_sccb);
 VAR_6->msg_buf.header.length = sizeof(struct msg_buf);
 VAR_6->msg_buf.header.type = VAR_0;
 VAR_6->msg_buf.mdb.header.length = sizeof(struct mdb);
 VAR_6->msg_buf.mdb.header.type = 1;
 VAR_6->msg_buf.mdb.header.tag = 0xD4C4C240;
 VAR_6->msg_buf.mdb.header.revision_code = 1;
 VAR_6->msg_buf.mdb.go.length = sizeof(struct go);
 VAR_6->msg_buf.mdb.go.type = 1;

 return VAR_5;
}
