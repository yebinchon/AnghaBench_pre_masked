
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t word ;
typedef int byte ;
struct TYPE_9__ {scalar_t__ command; int length; } ;
struct TYPE_7__ {scalar_t__ Data; } ;
struct TYPE_8__ {TYPE_1__ data_b3_req; } ;
struct TYPE_11__ {TYPE_3__ header; TYPE_2__ info; } ;
struct TYPE_10__ {size_t msg_in_read_pos; size_t msg_in_write_pos; size_t msg_in_wrap_pos; scalar_t__ msg_in_queue; scalar_t__ appl; } ;
typedef TYPE_4__ PLCI ;
typedef TYPE_5__ CAPI_MSG ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1 (PLCI *VAR_3)
{
  word VAR_4;

  if (VAR_3->appl)
  {
    VAR_4 = VAR_3->msg_in_read_pos;
    while (VAR_4 != VAR_3->msg_in_write_pos)
    {
      if (VAR_4 == VAR_3->msg_in_wrap_pos)
        VAR_4 = 0;
      if (((CAPI_MSG *)(&((byte *)(VAR_3->msg_in_queue))[VAR_4]))->header.command == VAR_2)
      {

        FUNC_0 (VAR_3->appl,
          (byte *)(long)(((CAPI_MSG *)(&((byte *)(VAR_3->msg_in_queue))[VAR_4]))->info.data_b3_req.Data));

      }

      VAR_4 += (((CAPI_MSG *)(&((byte *)(VAR_3->msg_in_queue))[VAR_4]))->header.length +
        VAR_0 + 3) & 0xfffc;

    }
  }
  VAR_3->msg_in_write_pos = VAR_1;
  VAR_3->msg_in_read_pos = VAR_1;
  VAR_3->msg_in_wrap_pos = VAR_1;
}
