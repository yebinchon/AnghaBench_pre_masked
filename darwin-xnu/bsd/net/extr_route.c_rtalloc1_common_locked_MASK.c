
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct sockaddr_storage {int ss_family; int ss_len; } ;
struct sockaddr {size_t sa_family; } ;
struct rtentry {int rt_flags; int rt_gateway; TYPE_1__* rt_ifp; } ;
struct rt_addrinfo {struct sockaddr** rti_info; } ;
struct radix_node_head {int dummy; } ;
typedef int info ;
typedef int def_key ;
typedef struct sockaddr_storage* caddr_t ;
struct TYPE_7__ {int sa_family; int sa_len; } ;
struct TYPE_6__ {int rts_unreach; } ;
struct TYPE_5__ {int if_index; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtentry*) ;
 int FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct sockaddr_storage*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (struct rtentry*) ;
 struct rtentry* FUNC_5 (int ,struct sockaddr*,int *,struct radix_node_head*,unsigned int) ;
 int FUNC_6 (int,struct rt_addrinfo*,int ,int) ;
 struct radix_node_head** VAR_10 ;
 struct rtentry* FUNC_7 (struct sockaddr*,int ,int ,int ) ;
 int FUNC_8 (struct rtentry*) ;
 int FUNC_9 (int,struct sockaddr*,int *,int *,int ,struct rtentry**) ;
 TYPE_2__ VAR_11 ;

struct rtentry *
FUNC_10(struct sockaddr *VAR_12, int VAR_13, uint32_t VAR_14,
    unsigned int VAR_15)
{
 struct radix_node_head *VAR_16 = VAR_10[VAR_12->sa_family];
 struct rtentry *VAR_17, *VAR_18 = ((void*)0);
 struct rt_addrinfo VAR_19;
 uint32_t VAR_20;
 int VAR_21 = 0, VAR_22 = VAR_8;

 if (VAR_16 == ((void*)0))
  goto unreachable;





 VAR_17 = FUNC_5(VAR_0, VAR_12, ((void*)0), VAR_16, VAR_15);
 if (VAR_17 == ((void*)0))
  goto unreachable;

 FUNC_0(VAR_17);
 VAR_18 = VAR_17;
 VAR_20 = VAR_17->rt_flags & ~VAR_14;
 FUNC_1(VAR_17);
 if (VAR_13 && (VAR_20 & (VAR_2 | VAR_5))) {





  VAR_21 = FUNC_9(VAR_9, VAR_12, ((void*)0), ((void*)0), 0, &VAR_18);
  if (VAR_21) {






   VAR_18 = VAR_17;
   goto miss;
  }






  FUNC_8(VAR_17);
  if ((VAR_18->rt_flags & (VAR_3 | VAR_4)) ==
      (VAR_3 | VAR_4)) {
   struct rtentry *VAR_23 = ((void*)0);
   struct sockaddr_storage VAR_24;

   FUNC_2(&VAR_24, sizeof(VAR_24));
   VAR_24.ss_len = FUNC_4(VAR_18)->sa_len;
   VAR_24.ss_family = FUNC_4(VAR_18)->sa_family;

   VAR_23 = FUNC_7((struct sockaddr *)&VAR_24,
     0, 0, VAR_18->rt_ifp->if_index);

   if (VAR_23) {
    if (FUNC_3(FUNC_4(VAR_18), VAR_23->rt_gateway)) {
     VAR_18->rt_flags |= VAR_6;
    }
    FUNC_8(VAR_23);
   }
  }

  if ((VAR_17 = VAR_18) && (VAR_17->rt_flags & VAR_7)) {




   VAR_22 = VAR_9;
   goto miss;
  }
 }
 goto done;

unreachable:




 VAR_11.rts_unreach++;

miss:
 if (VAR_13) {





  FUNC_2((caddr_t)&VAR_19, sizeof(VAR_19));
  VAR_19.rti_info[VAR_1] = VAR_12;
  FUNC_6(VAR_22, &VAR_19, 0, VAR_21);
 }
done:
 return (VAR_18);
}
