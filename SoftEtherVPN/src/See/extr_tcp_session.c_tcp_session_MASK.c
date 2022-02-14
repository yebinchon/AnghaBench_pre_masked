
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_8__ {scalar_t__ direction; int status; scalar_t__ seq_n_0_cln; scalar_t__ ack_cln; scalar_t__ ack_srv; TYPE_1__ last_timestamp; TYPE_1__ timestamp_block; scalar_t__ seq_n_0_srv; TYPE_1__ syn_ack_timestamp; TYPE_1__ syn_timestamp; int bytes_srv_to_cln; int pkts_srv_to_cln; int bytes_cln_to_srv; int pkts_cln_to_srv; } ;
typedef TYPE_2__ tcp_data ;
struct TYPE_10__ {int* buffer; } ;
struct TYPE_9__ {int key_len; } ;
typedef TYPE_3__ TME_DATA ;
typedef TYPE_4__ MEM_TYPE ;


 int VAR_0 ;




 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int*,int) ;


uint32 FUNC_2(uint8 *VAR_6, uint32 VAR_7, TME_DATA *VAR_8, MEM_TYPE *VAR_9, uint8 *VAR_10)

{

 uint32 VAR_11;
 uint32 VAR_12=FUNC_1(VAR_10,12);
 uint8 VAR_13=VAR_9->buffer[25];
 tcp_data *VAR_14=(tcp_data*)(VAR_6+VAR_8->key_len*4);

 VAR_14->last_timestamp=VAR_14->timestamp_block;
 VAR_14->timestamp_block.tv_sec=0x7fffffff;

 if (VAR_12==VAR_14->direction)
 {
  VAR_14->pkts_cln_to_srv++;
  VAR_14->bytes_cln_to_srv+=VAR_7;
 }
 else
 {
  VAR_14->pkts_srv_to_cln++;
  VAR_14->bytes_srv_to_cln+=VAR_7;
 }

 VAR_13&=(VAR_0|VAR_1|VAR_4|VAR_3);

 switch (VAR_14->status)
 {
 case 134:
  VAR_11=134;
  break;

 case 128:
  if (VAR_13==VAR_4)
  {
   if (FUNC_0(VAR_9->buffer,20)!=0)
   {

    VAR_11=134;
    break;
   }
   VAR_11=129;
   VAR_14->syn_timestamp=VAR_14->last_timestamp;

   VAR_14->direction=VAR_12;
   VAR_14->seq_n_0_cln=FUNC_0(VAR_9->buffer,16);
  }
  else
   VAR_11=128;
  break;

 case 129:
  if ((VAR_13&VAR_3)&&(VAR_12!=VAR_14->direction))
  {
   VAR_11=135;
   break;
  }
  if ((VAR_13==VAR_4)&&(VAR_12==VAR_14->direction))
  {
   VAR_11=129;
   VAR_14->seq_n_0_cln=FUNC_0(VAR_9->buffer,16);
   break;
  }

  if ((VAR_13==(VAR_4|VAR_0))&&(VAR_12!=VAR_14->direction))
  {
   if (FUNC_0(VAR_9->buffer,20)!=VAR_14->seq_n_0_cln+1)
   {
    VAR_11=134;
    break;
   }
   VAR_11=130;

   VAR_14->syn_ack_timestamp=VAR_14->last_timestamp;

   VAR_14->seq_n_0_srv=FUNC_0(VAR_9->buffer,16);
   VAR_14->ack_cln=VAR_14->seq_n_0_cln+1;
  }
  else
  {
   VAR_11=134;
  }
  break;

 case 130:
  if ((VAR_13&VAR_0)&&(VAR_13&VAR_3)&&(VAR_12==VAR_14->direction))
  {
   VAR_11=135;
   VAR_14->ack_srv=FUNC_0(VAR_9->buffer,20);
   break;
  }

  if ((VAR_13==VAR_0)&&(!(VAR_13&(VAR_4|VAR_1|VAR_3)))&&(VAR_12==VAR_14->direction))
  {
   if (FUNC_0(VAR_9->buffer,20)!=VAR_14->seq_n_0_srv+1)
   {
    VAR_11=134;
    break;
   }
   VAR_11=133;
   VAR_14->ack_srv=VAR_14->seq_n_0_srv+1;
   break;
  }
  if ((VAR_13&VAR_0)&&(VAR_13&VAR_4)&&(VAR_12!=VAR_14->direction))
  {
   VAR_11=130;
   break;
  }

  VAR_11=134;
  break;

 case 133:
  if (VAR_13&VAR_4)
  {
   if ((VAR_13&VAR_0)&&
    (VAR_12!=VAR_14->direction)&&
    ((VAR_14->ack_cln-FUNC_0(VAR_9->buffer,20))<VAR_2)
    )
   {
    VAR_11=133;
    break;
   }

   if ((!(VAR_13&VAR_0))&&
    (VAR_12==VAR_14->direction)&&
    (FUNC_0(VAR_9->buffer,16)==VAR_14->seq_n_0_cln)&&
    (FUNC_1(VAR_9->buffer,20)==0)
    )
   {
    VAR_11=133;
    break;
   }

   VAR_11=134;
   break;
  }
  if (VAR_13&VAR_0)
   if (VAR_12==VAR_14->direction)
   {
    uint32 VAR_15=FUNC_0(VAR_9->buffer,20);
    if (VAR_15-VAR_14->ack_srv<VAR_2)
     VAR_14->ack_srv=VAR_15;
   }
   else
   {
    uint32 VAR_16=FUNC_0(VAR_9->buffer,20);
    if (VAR_16-VAR_14->ack_cln<VAR_2)
     VAR_14->ack_cln=VAR_16;
   }
  if (VAR_13&VAR_3)
  {
   VAR_11=135;
   break;
  }
  if (VAR_13&VAR_1)
   if (VAR_12==VAR_14->direction)
   {
    VAR_14->ack_cln=FUNC_0(VAR_9->buffer,16);
    VAR_11=132;
    break;
   }
   else
   {
    VAR_14->ack_srv=FUNC_0(VAR_9->buffer,16);
    VAR_11=131;
    break;
   }
  VAR_11=133;
  break;

 case 135:
  VAR_11=135;
  break;

 case 131:
  if (VAR_13&VAR_4)
  {
   VAR_11=134;
   break;
  }

  VAR_11=131;

  if (VAR_13&VAR_0)
  {
   uint32 VAR_17=FUNC_0(VAR_9->buffer,20);
   if (VAR_12!=VAR_14->direction)
    if ((VAR_17-VAR_14->ack_cln)<VAR_2)
     VAR_14->ack_cln=VAR_17;
  }

  if (VAR_13&VAR_3)
   VAR_11=135;
  else
   if ((VAR_13&VAR_1)&&(VAR_12==VAR_14->direction))
   {
    VAR_14->ack_cln=FUNC_0(VAR_9->buffer,16);
    VAR_11=136;
   }

  break;

 case 132:
  if (VAR_13&VAR_4)
  {
   VAR_11=134;
   break;
  }

  VAR_11=132;

  if (VAR_13&VAR_0)
  {
   uint32 VAR_18=FUNC_0(VAR_9->buffer,20);
   if (VAR_12==VAR_14->direction)
    if (VAR_18-VAR_14->ack_srv<VAR_2)
     VAR_14->ack_srv=VAR_18;
  }

  if (VAR_13&VAR_3)
   VAR_11=135;
  else
   if ((VAR_13&VAR_1)&&(VAR_12!=VAR_14->direction))
   {
    VAR_14->ack_srv=FUNC_0(VAR_9->buffer,16);
    VAR_11=136;
   }

  break;

 case 136:
   VAR_11=136;
  break;
 default:
  VAR_11=134;

 }

 VAR_14->status=VAR_11;

 if ((VAR_11==136)||(VAR_11==128)||(VAR_11==135)||(VAR_11==134))
  VAR_14->timestamp_block=VAR_14->last_timestamp;

 return VAR_5;
}
