
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ netadr_t ;
typedef int addr ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,struct sockaddr_in*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,void const*,int,int ,struct sockaddr*,int) ;

void FUNC_6( int VAR_7, const void *VAR_8, netadr_t VAR_9 )
{
 int VAR_10;
 struct sockaddr_in VAR_11;
 int VAR_12;

 if (VAR_9.type == VAR_1)
 {
  VAR_12 = VAR_5;
 }
 else if (VAR_9.type == VAR_3)
 {
  VAR_12 = VAR_5;
 }
 else if (VAR_9.type == VAR_4)
 {
  VAR_12 = VAR_6;
 }
 else if (VAR_9.type == VAR_2)
 {
  VAR_12 = VAR_6;
 }
 else {
  FUNC_0 (VAR_0, "NET_SendPacket: bad address type");
  return;
 }

 if (!VAR_12)
  return;

 FUNC_4 (&VAR_9, &VAR_11);

 VAR_10 = FUNC_5 (VAR_12, VAR_8, VAR_7, 0, (struct sockaddr *)&VAR_11, sizeof(VAR_11) );
 if (VAR_10 == -1)
 {
  FUNC_1 ("NET_SendPacket ERROR: %s to %s\n", FUNC_3(),
    FUNC_2 (VAR_9));
 }
}
