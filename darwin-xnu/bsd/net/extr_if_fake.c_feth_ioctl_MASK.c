
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int user_addr_t ;
union ifdrvu {TYPE_2__* ifdrvu_64; TYPE_1__* ifdrvu_32; void* ifdrvu_p; } ;
typedef int uint32_t ;
typedef int u_long ;
struct TYPE_16__ {int sa_len; int sa_data; } ;
struct ifdevmtu {int ifdm_min; int ifdm_max; int ifdm_current; } ;
struct ifreq {TYPE_3__ ifr_addr; int ifr_mtu; struct ifdevmtu ifr_devmtu; } ;
struct ifmediareq64 {int ifmu_ulist; } ;
struct ifmediareq32 {int ifmu_ulist; } ;
struct ifmediareq {unsigned int ifm_count; int ifm_status; int ifm_mask; void* ifm_current; void* ifm_active; } ;
typedef TYPE_4__* ifnet_t ;
typedef TYPE_5__* if_fake_ref ;
typedef int boolean_t ;
struct TYPE_18__ {unsigned int iff_media_count; int iff_media_list; int * iff_peer; } ;
struct TYPE_17__ {int if_flags; } ;
struct TYPE_15__ {int ifd_data; int ifd_len; int ifd_cmd; } ;
struct TYPE_14__ {int ifd_data; int ifd_len; int ifd_cmd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int,int) ;
 int FUNC_10 (TYPE_4__*,int ,int ) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(ifnet_t VAR_11, u_long VAR_12, void * VAR_13)
{
 unsigned int VAR_14;
 struct ifdevmtu * VAR_15;
 union ifdrvu VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 boolean_t VAR_19 = VAR_2;
 int VAR_20 = 0;
 struct ifmediareq * VAR_21;
 struct ifreq * VAR_22;
 if_fake_ref VAR_23;
 int VAR_24;
 user_addr_t VAR_25;

 VAR_22 = (struct ifreq *)VAR_13;
 switch (VAR_12) {
 case 131:
  FUNC_9(VAR_11, VAR_4, VAR_4);
  break;

 case 135:
 case 134:
  FUNC_4();
  VAR_23 = (if_fake_ref)FUNC_12(VAR_11);
  if (VAR_23 == ((void*)0)) {
   FUNC_7();
   return (VAR_1);
  }
  VAR_24 = (VAR_23->iff_peer != ((void*)0))
      ? (VAR_6 | VAR_5) : VAR_6;
  VAR_21 = (struct ifmediareq *)VAR_13;
  VAR_25 = (VAR_12 == 134) ?
   ((struct ifmediareq64 *)VAR_21)->ifmu_ulist :
   FUNC_0(((struct ifmediareq32 *)VAR_21)->ifmu_ulist);
  VAR_14 = VAR_21->ifm_count;
  VAR_21->ifm_active = VAR_7;
  VAR_21->ifm_current = VAR_7;
  VAR_21->ifm_mask = 0;
  VAR_21->ifm_status = VAR_24;
  if (VAR_25 == VAR_10) {
   VAR_21->ifm_count = VAR_23->iff_media_count;
  }
  else if (VAR_14 > 0) {
   if (VAR_14 > VAR_23->iff_media_count) {
    VAR_14 = VAR_23->iff_media_count;
   }
   VAR_21->ifm_count = VAR_14;
   VAR_20 = FUNC_1(&VAR_23->iff_media_list, VAR_25,
     VAR_14 * sizeof(int));
  }
  FUNC_7();
  break;

 case 136:
  VAR_15 = &VAR_22->ifr_devmtu;
  VAR_15->ifdm_current = FUNC_8(VAR_11);
  VAR_15->ifdm_max = FUNC_5();
  VAR_15->ifdm_min = VAR_8;
  break;

 case 128:
  if (VAR_22->ifr_mtu > FUNC_5() || VAR_22->ifr_mtu < VAR_8) {
   VAR_20 = VAR_0;
  } else {
   VAR_20 = FUNC_11(VAR_11, VAR_22->ifr_mtu);
  }
  break;

 case 133:
 case 132:
  VAR_20 = FUNC_13(FUNC_2());
  if (VAR_20 != 0) {
   break;
  }
  VAR_19 = VAR_9;

 case 138:
 case 137:
  VAR_16.ifdrvu_p = VAR_13;
  if (VAR_12 == 138 || VAR_12 == 133) {
   VAR_17 = VAR_16.ifdrvu_32->ifd_cmd;
   VAR_18 = VAR_16.ifdrvu_32->ifd_len;
   VAR_25 = FUNC_0(VAR_16.ifdrvu_32->ifd_data);

  } else {
   VAR_17 = VAR_16.ifdrvu_64->ifd_cmd;
   VAR_18 = VAR_16.ifdrvu_64->ifd_len;
   VAR_25 = VAR_16.ifdrvu_64->ifd_data;
  }
  if (VAR_19) {
   VAR_20 = FUNC_6(VAR_11, VAR_17, VAR_18,
       VAR_25);
  } else {
   VAR_20 = FUNC_3(VAR_11, VAR_17, VAR_18,
       VAR_25);
  }
  break;

 case 129:
  VAR_20 = FUNC_10(VAR_11, VAR_22->ifr_addr.sa_data,
      VAR_22->ifr_addr.sa_len);
  break;

 case 130:
  if ((VAR_11->if_flags & VAR_4) != 0) {

   if ((VAR_11->if_flags & VAR_3) == 0) {

    VAR_20 = FUNC_9(VAR_11, VAR_3,
        VAR_3);
   }
  } else if ((VAR_11->if_flags & VAR_3) != 0) {

   VAR_20 = FUNC_9(VAR_11, 0, VAR_3);
  }
  break;

 case 140:
 case 139:
  VAR_20 = 0;
  break;
 default:
  VAR_20 = VAR_1;
  break;
 }
 return VAR_20;
}
