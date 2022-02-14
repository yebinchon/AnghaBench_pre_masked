
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct rtentry {int rt_flags; TYPE_1__* rt_ifa; int rt_gateway; } ;
struct rt_addrinfo {struct sockaddr** rti_info; } ;
struct ifnet {unsigned int if_index; } ;
struct ifaddr {int ifa_addr; } ;
typedef int info ;
typedef int caddr_t ;
struct TYPE_6__ {int sa_len; } ;
struct TYPE_5__ {short rts_dynamic; short rts_newgateway; int rts_badredirect; } ;
struct TYPE_4__ {struct sockaddr* ifa_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ifaddr*) ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct rtentry*) ;
 int FUNC_3 (struct rtentry*) ;
 int FUNC_4 (struct rtentry*) ;
 int FUNC_5 (struct rtentry*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct sockaddr*,int ) ;
 struct ifaddr* FUNC_8 (struct sockaddr*) ;
 struct ifaddr* FUNC_9 (struct sockaddr*,unsigned int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_22 ;
 int FUNC_12 (struct rtentry*,int *,int ,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct rtentry*) ;
 TYPE_3__* FUNC_16 (struct rtentry*) ;
 int FUNC_17 (int ,struct rt_addrinfo*,int,int) ;
 int FUNC_18 (struct rtentry*,int ,struct sockaddr*) ;
 struct rtentry* FUNC_19 (struct sockaddr*,int ,int,unsigned int) ;
 int FUNC_20 (struct rtentry*) ;
 int FUNC_21 (int ,struct sockaddr*,struct sockaddr*,struct sockaddr*,int,int *,unsigned int) ;
 TYPE_2__ VAR_23 ;
 struct sockaddr* FUNC_22 (struct sockaddr*,struct sockaddr_storage*,unsigned int*) ;

void
FUNC_23(struct ifnet *VAR_24, struct sockaddr *VAR_25, struct sockaddr *VAR_26,
    struct sockaddr *VAR_27, int VAR_28, struct sockaddr *VAR_29,
    struct rtentry **VAR_30)
{
 struct rtentry *VAR_31 = ((void*)0);
 int VAR_32 = 0;
 short *VAR_33 = 0;
 struct rt_addrinfo VAR_34;
 struct ifaddr *VAR_35 = ((void*)0);
 unsigned int VAR_36 = (VAR_24 != ((void*)0)) ? VAR_24->if_index : VAR_6;
 struct sockaddr_storage VAR_37;
 int VAR_38 = VAR_29->sa_family;

 FUNC_1(VAR_22, VAR_7);
 FUNC_10(VAR_22);
 if (VAR_38 == VAR_0)

  VAR_29 = FUNC_22(VAR_29, &VAR_37, &VAR_36);






 if ((VAR_35 = FUNC_9(VAR_26, VAR_36)) == ((void*)0)) {
  VAR_32 = VAR_4;
  goto out;
 }


 VAR_31 = FUNC_19(VAR_25, 0, VAR_13|VAR_19, VAR_36);
 if (VAR_31 != ((void*)0))
  FUNC_2(VAR_31);
 if (!(VAR_28 & VAR_14) && VAR_31 != ((void*)0) &&
     (!FUNC_7(VAR_29, VAR_31->rt_gateway) || !FUNC_7(VAR_31->rt_ifa->ifa_addr,
     VAR_35->ifa_addr))) {
  VAR_32 = VAR_3;
 } else {
  FUNC_0(VAR_35);
  if ((VAR_35 = FUNC_8(VAR_26))) {
   FUNC_0(VAR_35);
   VAR_35 = ((void*)0);
   VAR_32 = VAR_2;
  }
 }

 if (VAR_35) {
  FUNC_0(VAR_35);
  VAR_35 = ((void*)0);
 }

 if (VAR_32) {
  if (VAR_31 != ((void*)0))
   FUNC_5(VAR_31);
  goto done;
 }







 if ((VAR_31 == ((void*)0)) || (FUNC_16(VAR_31) != ((void*)0) && FUNC_16(VAR_31)->sa_len < 2))
  goto create;




 FUNC_3(VAR_31);
 if (VAR_31->rt_flags & VAR_16) {
  if (((VAR_31->rt_flags & VAR_17) == 0) && (VAR_28 & VAR_17)) {






create:
   if (VAR_31 != ((void*)0))
    FUNC_5(VAR_31);
   VAR_28 |= VAR_16 | VAR_15;
   VAR_32 = FUNC_21(VAR_20, VAR_25,
       VAR_26, VAR_27, VAR_28, ((void*)0), VAR_36);
   VAR_33 = &VAR_23.rts_dynamic;
  } else {




   VAR_31->rt_flags |= VAR_18;
   VAR_28 |= VAR_18;
   VAR_33 = &VAR_23.rts_newgateway;



   VAR_32 = FUNC_18(VAR_31, FUNC_15(VAR_31), VAR_26);
   FUNC_5(VAR_31);
  }
 } else {
  FUNC_5(VAR_31);
  VAR_32 = VAR_2;
 }
done:
 if (VAR_31 != ((void*)0)) {
  FUNC_4(VAR_31);
  if (!VAR_32) {

   FUNC_12(VAR_31, ((void*)0), VAR_8, ((void*)0), VAR_5);
   if (VAR_30)
    *VAR_30 = VAR_31;
   else
    FUNC_20(VAR_31);
  }
  else
   FUNC_20(VAR_31);
 }
out:
 if (VAR_32) {
  VAR_23.rts_badredirect++;
 } else {
  if (VAR_33 != ((void*)0))
   (*VAR_33)++;

  if (VAR_38 == VAR_0)
   FUNC_14();




 }
 FUNC_11(VAR_22);
 FUNC_6((caddr_t)&VAR_34, sizeof(VAR_34));
 VAR_34.rti_info[VAR_10] = VAR_25;
 VAR_34.rti_info[VAR_11] = VAR_26;
 VAR_34.rti_info[VAR_12] = VAR_27;
 VAR_34.rti_info[VAR_9] = VAR_29;
 FUNC_17(VAR_21, &VAR_34, VAR_28, VAR_32);
}
