
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct necp_uuid_id_mapping {int uuid; } ;
struct TYPE_4__ {scalar_t__ necp_app_id; } ;
struct TYPE_3__ {TYPE_2__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 struct necp_uuid_id_mapping* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct mbuf *VAR_4,
         uuid_t VAR_5)
{
 if (VAR_4 == ((void*)0) || !(VAR_4->m_flags & VAR_2)) {
  return (VAR_0);
 }

 bool VAR_6 = VAR_1;
 if (VAR_4->m_pkthdr.necp_mtag.necp_app_id != 0) {
  FUNC_1(&VAR_3);
  struct necp_uuid_id_mapping *VAR_7 = FUNC_2(VAR_4->m_pkthdr.necp_mtag.necp_app_id);
  if (VAR_7 != ((void*)0)) {
   FUNC_4(VAR_5, VAR_7->uuid);
   VAR_6 = 1;
  }
  FUNC_0(&VAR_3);
 }
 if (!VAR_6) {
  FUNC_3(VAR_5);
 }
 return (0);
}
