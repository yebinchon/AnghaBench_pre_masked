
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int * PacketLogConfig; } ;
struct TYPE_8__ {TYPE_1__* TCPHeader; } ;
struct TYPE_9__ {int TypeL3; int * HttpLog; int TypeL7; TYPE_2__ L4; int TypeL4; } ;
struct TYPE_7__ {int Flag; } ;
typedef TYPE_3__ PKT ;
typedef TYPE_4__ HUB_LOG ;
 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

UINT FUNC_1(HUB_LOG *VAR_12, PKT *VAR_13)
{
 UINT VAR_14 = 0;

 if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
 {
  return VAR_5;
 }


 VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_2]);

 switch (VAR_13->TypeL3)
 {
 case 138:

  VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_0]);
  break;

 case 137:

  VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_4]);

  switch (VAR_13->TypeL4)
  {
  case 135:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_3]);
   break;

  case 133:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_6]);

   if (VAR_13->L4.TCPHeader->Flag & VAR_11 ||
    VAR_13->L4.TCPHeader->Flag & VAR_10 ||
    VAR_13->L4.TCPHeader->Flag & VAR_9)
   {

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
   }

   break;

  case 132:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_8]);

   switch (VAR_13->TypeL7)
   {
   case 131:

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_1]);
    break;

   case 129:

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
    break;

   case 128:

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
    break;

    case 130:

     VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
     break;
   }

   break;
  }

  break;

 case 136:

  VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_4]);

  switch (VAR_13->TypeL4)
  {
  case 134:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_3]);
   break;

  case 133:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_6]);

   if (VAR_13->L4.TCPHeader->Flag & VAR_11 ||
    VAR_13->L4.TCPHeader->Flag & VAR_10 ||
    VAR_13->L4.TCPHeader->Flag & VAR_9)
   {

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
   }

   break;

  case 132:

   VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_8]);

   switch (VAR_13->TypeL7)
   {
   case 129:

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
    break;

   case 128:

    VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
    break;

    case 130:

     VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
     break;
   }

   break;
  }

  break;
 }

 if (VAR_13->HttpLog != ((void*)0))
 {

  VAR_14 = FUNC_0(VAR_14, VAR_12->PacketLogConfig[VAR_7]);
 }

 return VAR_14;
}
