
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ type; scalar_t__* ip; scalar_t__ port; int ipx; } ;
typedef TYPE_1__ netadr_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_2 (netadr_t VAR_5, netadr_t VAR_6)
{
 if (VAR_5.type != VAR_6.type)
  return VAR_3;

 if (VAR_5.type == VAR_2)
  return VAR_4;

 if (VAR_5.type == VAR_0)
 {
  if (VAR_5.ip[0] == VAR_6.ip[0] && VAR_5.ip[1] == VAR_6.ip[1] && VAR_5.ip[2] == VAR_6.ip[2] && VAR_5.ip[3] == VAR_6.ip[3] && VAR_5.port == VAR_6.port)
   return VAR_4;
  return VAR_3;
 }

 if (VAR_5.type == VAR_1)
 {
  if ((FUNC_1(VAR_5.ipx, VAR_6.ipx, 10) == 0) && VAR_5.port == VAR_6.port)
   return VAR_4;
  return VAR_3;
 }

 FUNC_0 ("NET_CompareAdr: bad address type\n");
 return VAR_3;
}
