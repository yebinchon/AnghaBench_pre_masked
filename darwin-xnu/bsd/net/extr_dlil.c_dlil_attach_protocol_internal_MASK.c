
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u_int32_t ;
struct net_event_data {int dummy; } ;
struct kev_dl_proto_data {int proto_remaining_count; int proto_family; } ;
struct ifnet_demux_desc {int dummy; } ;
struct ifnet {int (* if_add_proto ) (struct ifnet*,int ,struct ifnet_demux_desc const*,size_t) ;int * if_proto_hash; } ;
struct if_proto {int protocol_family; struct ifnet* ifp; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct if_proto* FUNC_0 (int *) ;
 int FUNC_1 (struct if_proto*,struct if_proto*,int ) ;
 int FUNC_2 (int *,struct if_proto*,int ) ;
 struct if_proto* FUNC_3 (struct if_proto*,int ) ;
 int FUNC_4 (struct ifnet*,int *,int ) ;
 int FUNC_5 (struct ifnet*,int ,int ,struct net_event_data*,int) ;
 struct if_proto* FUNC_6 (struct ifnet*,int ) ;
 int FUNC_7 (struct if_proto*) ;
 int FUNC_8 (struct if_proto*) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int VAR_3 ;
 size_t FUNC_11 (int ) ;
 int FUNC_12 (struct ifnet*,int ,struct ifnet_demux_desc const*,size_t) ;

__attribute__((used)) static errno_t
FUNC_13(struct if_proto *VAR_4,
    const struct ifnet_demux_desc *VAR_5, u_int32_t VAR_6,
    uint32_t * VAR_7)
{
 struct kev_dl_proto_data VAR_8;
 struct ifnet *VAR_9 = VAR_4->ifp;
 int VAR_10 = 0;
 u_int32_t VAR_11 = FUNC_11(VAR_4->protocol_family);
 struct if_proto *VAR_12;
 struct if_proto *VAR_13;


 FUNC_10(VAR_9);
 VAR_13 = FUNC_6(VAR_9, VAR_4->protocol_family);
 if (VAR_13 != ((void*)0)) {
  FUNC_9(VAR_9);
  FUNC_7(VAR_13);
  return (VAR_0);
 }





 VAR_10 = VAR_9->if_add_proto(VAR_9, VAR_4->protocol_family, VAR_5,
     VAR_6);
 if (VAR_10) {
  FUNC_9(VAR_9);
  return (VAR_10);
 }




 VAR_12 = FUNC_0(&VAR_9->if_proto_hash[VAR_11]);
 while (VAR_12 != ((void*)0) && FUNC_3(VAR_12, VAR_3) != ((void*)0))
  VAR_12 = FUNC_3(VAR_12, VAR_3);
 if (VAR_12)
  FUNC_1(VAR_12, VAR_4, VAR_3);
 else
  FUNC_2(&VAR_9->if_proto_hash[VAR_11],
      VAR_4, VAR_3);


 FUNC_8(VAR_4);





 VAR_8.proto_family = VAR_4->protocol_family;
 VAR_8.proto_remaining_count = FUNC_4(VAR_9, ((void*)0), 0);

 FUNC_9(VAR_9);

 FUNC_5(VAR_9, VAR_2, VAR_1,
     (struct net_event_data *)&VAR_8,
     sizeof (struct kev_dl_proto_data));
 if (VAR_7 != ((void*)0)) {
  *VAR_7 = VAR_8.proto_remaining_count;
 }
 return (VAR_10);
}
