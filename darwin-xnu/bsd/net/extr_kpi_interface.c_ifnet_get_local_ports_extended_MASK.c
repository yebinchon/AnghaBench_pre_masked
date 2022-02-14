
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int protocol_family_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_4__ {int if_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ,int,int *) ;
 int FUNC_4 (int,int ,int,int *) ;

errno_t
FUNC_5(ifnet_t VAR_14, protocol_family_t VAR_15,
    u_int32_t VAR_16, u_int8_t *VAR_17)
{
 u_int32_t VAR_18;
 u_int32_t VAR_19 = 0;

 if (VAR_17 == ((void*)0))
  return (VAR_0);

 switch (VAR_15) {
 case 128:
 case 130:
 case 129:
  break;
 default:
  return (VAR_0);
 }


 FUNC_1(VAR_17, FUNC_0(VAR_13));

 FUNC_2(VAR_14);


  VAR_19 |= ((VAR_16 & VAR_7) ?
   VAR_12 : 0);
  VAR_19 |= ((VAR_16 & VAR_3) ?
   VAR_10 : 0);
  VAR_19 |= ((VAR_16 & VAR_4) ?
   VAR_11 : 0);
  VAR_19 |= ((VAR_16 & VAR_2) ?
   VAR_9 : 0);
  VAR_19 |= ((VAR_16 & VAR_1) ?
   VAR_8 : 0);

  VAR_18 = (VAR_14 != ((void*)0)) ? VAR_14->if_index : 0;

  if (!(VAR_16 & VAR_5))
   FUNC_4(VAR_18, VAR_15, VAR_19,
       VAR_17);

  if (!(VAR_16 & VAR_6))
   FUNC_3(VAR_18, VAR_15, VAR_19,
       VAR_17);

 return (0);
}
