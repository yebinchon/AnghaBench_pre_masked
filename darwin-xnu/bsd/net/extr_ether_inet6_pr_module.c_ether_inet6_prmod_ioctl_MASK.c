
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int sa_data; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
typedef int protocol_family_t ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_8__ {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static errno_t
FUNC_3(ifnet_t VAR_5, protocol_family_t VAR_6,
    u_long VAR_7, void *VAR_8)
{
#pragma unused(protocol_family)
 int VAR_9 = 0;

 switch (VAR_7) {
 case 128:





  if ((VAR_5->if_flags & VAR_2) == 0) {
   FUNC_2(VAR_5, VAR_3, VAR_3);
   FUNC_1(VAR_5, 0, VAR_4, ((void*)0));
  }
  break;

 case 129: {
  struct ifreq *VAR_10 = (struct ifreq *)(void *)VAR_8;
  (void) FUNC_0(VAR_5,
      VAR_10->ifr_addr.sa_data, VAR_1);
  break;
 }

 default:
  VAR_9 = VAR_0;
  break;
 }
 return (VAR_9);
}
