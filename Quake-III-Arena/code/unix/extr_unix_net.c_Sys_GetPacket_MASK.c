
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int qboolean ;
typedef int netadr_t ;
struct TYPE_3__ {int maxsize; int cursize; scalar_t__ readcount; int data; } ;
typedef TYPE_1__ msg_t ;
typedef int from ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sockaddr_in*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int ,int,int ,struct sockaddr*,int*) ;

qboolean FUNC_5 (netadr_t *VAR_7, msg_t *VAR_8)
{
 int VAR_9;
 struct sockaddr_in VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 for (VAR_13 = 0 ; VAR_13 < 2 ; VAR_13++)
 {
  if (VAR_13 == 0)
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_4;

  if (!VAR_12)
   continue;

  VAR_11 = sizeof(VAR_10);
  VAR_9 = FUNC_4 (VAR_12, VAR_8->data, VAR_8->maxsize
   , 0, (struct sockaddr *)&VAR_10, &VAR_11);

  FUNC_3 (&VAR_10, VAR_7);

  VAR_8->readcount = 0;

  if (VAR_9 == -1)
  {
   VAR_14 = VAR_2;

   if (VAR_14 == VAR_1 || VAR_14 == VAR_0)
    continue;
   FUNC_0 ("NET_GetPacket: %s from %s\n", FUNC_2(),
      FUNC_1(*VAR_7));
   continue;
  }

  if (VAR_9 == VAR_8->maxsize)
  {
   FUNC_0 ("Oversize packet from %s\n", FUNC_1 (*VAR_7));
   continue;
  }

  VAR_8->cursize = VAR_9;
  return VAR_6;
 }

 return VAR_5;
}
