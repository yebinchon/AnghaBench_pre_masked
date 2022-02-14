
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int length; } ;
struct TYPE_9__ {TYPE_3__ header; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_10__ {TYPE_4__ mdb; TYPE_2__ header; } ;
struct TYPE_6__ {scalar_t__ length; } ;
struct write_sccb {TYPE_5__ msg_buf; TYPE_1__ header; } ;
struct sclp_buffer {int current_length; int mto_char_sum; int mto_number; struct write_sccb* sccb; int * current_line; } ;
struct mto {int length; } ;
typedef scalar_t__ addr_t ;



__attribute__((used)) static void
FUNC_0(struct sclp_buffer *VAR_0)
{
 struct write_sccb *VAR_1;
 struct mto *VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = VAR_0->current_length;
 VAR_0->current_line = ((void*)0);
 VAR_0->current_length = 0;


 VAR_4 = sizeof(struct mto) + VAR_3;


 VAR_1 = VAR_0->sccb;
 VAR_2 = (struct mto *)(((addr_t) VAR_1) + VAR_1->header.length);


 VAR_2->length = VAR_4;





 VAR_1->header.length += VAR_4;
 VAR_1->msg_buf.header.length += VAR_4;
 VAR_1->msg_buf.mdb.header.length += VAR_4;






 VAR_0->mto_number++;
 VAR_0->mto_char_sum += VAR_3;
}
