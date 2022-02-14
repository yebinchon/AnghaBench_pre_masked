
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct ifnet {int * if_proto_hash; } ;
struct if_proto {size_t protocol_family; } ;


 int VAR_0 ;
 struct if_proto* FUNC_0 (int *) ;
 struct if_proto* FUNC_1 (struct if_proto*,int ) ;
 int FUNC_2 (struct if_proto*) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int VAR_1 ;
 size_t FUNC_4 (size_t) ;

__attribute__((used)) static struct if_proto *
FUNC_5(struct ifnet *VAR_2, u_int32_t VAR_3)
{
 struct if_proto *VAR_4 = ((void*)0);
 u_int32_t VAR_5 = FUNC_4(VAR_3);

 FUNC_3(VAR_2, VAR_0);

 if (VAR_2->if_proto_hash != ((void*)0))
  VAR_4 = FUNC_0(&VAR_2->if_proto_hash[VAR_5]);

 while (VAR_4 != ((void*)0) && VAR_4->protocol_family != VAR_3)
  VAR_4 = FUNC_1(VAR_4, VAR_1);

 if (VAR_4 != ((void*)0))
  FUNC_2(VAR_4);

 return (VAR_4);
}
