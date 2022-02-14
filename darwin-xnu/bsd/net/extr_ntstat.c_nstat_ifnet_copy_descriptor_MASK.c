
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct nstat_ifnet_cookie {struct ifnet* ifp; } ;
struct TYPE_5__ {int ifd_len; int ifd_desc; } ;
struct ifnet {TYPE_1__ if_desc; int if_type; int if_data_threshold; int if_index; int if_xname; } ;
typedef scalar_t__ nstat_provider_cookie_t ;
struct TYPE_6__ {int description; int type; int threshold; int ifindex; int name; } ;
typedef TYPE_2__ nstat_ifnet_descriptor ;
typedef int errno_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ifnet*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static errno_t
FUNC_7(
 nstat_provider_cookie_t VAR_1,
 void *VAR_2,
 u_int32_t VAR_3)
{
 nstat_ifnet_descriptor *VAR_4 = (nstat_ifnet_descriptor *)VAR_2;
 struct nstat_ifnet_cookie *VAR_5 =
     (struct nstat_ifnet_cookie *)VAR_1;
 struct ifnet *VAR_6 = VAR_5->ifp;

 if (VAR_3 < sizeof(nstat_ifnet_descriptor))
  return VAR_0;

 if (FUNC_5(VAR_1))
  return VAR_0;

 FUNC_0(VAR_4, sizeof(*VAR_4));
 FUNC_2(VAR_6);
 FUNC_6(VAR_4->name, VAR_6->if_xname, sizeof(VAR_4->name));
 VAR_4->ifindex = VAR_6->if_index;
 VAR_4->threshold = VAR_6->if_data_threshold;
 VAR_4->type = VAR_6->if_type;
 if (VAR_6->if_desc.ifd_len < sizeof(VAR_4->description))
  FUNC_3(VAR_4->description, VAR_6->if_desc.ifd_desc,
          sizeof(VAR_4->description));
 FUNC_4(VAR_6, VAR_4);
 FUNC_1(VAR_6);
 return 0;
}
