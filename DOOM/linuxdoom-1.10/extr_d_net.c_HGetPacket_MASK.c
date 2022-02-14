
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
typedef int boolean ;
struct TYPE_5__ {int remotenode; int datalength; int command; } ;
struct TYPE_4__ {int checksum; int numtics; int starttic; int retransmitfrom; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_4 (scalar_t__,char*,...) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

boolean FUNC_5 (void)
{
    if (VAR_9)
    {
 *VAR_7 = VAR_10;
 VAR_6->remotenode = 0;
 VAR_9 = 0;
 return 1;
    }

    if (!VAR_8)
 return 0;

    if (VAR_5)
 return 0;

    VAR_6->command = VAR_0;
    FUNC_1 ();

    if (VAR_6->remotenode == -1)
 return 0;

    if (VAR_6->datalength != FUNC_3 ())
    {
 if (VAR_4)
     FUNC_4 (VAR_4,"bad packet length %i\n",VAR_6->datalength);
 return 0;
    }

    if (FUNC_2 () != (VAR_7->checksum&VAR_1) )
    {
 if (VAR_4)
     FUNC_4 (VAR_4,"bad packet checksum\n");
 return 0;
    }

    if (VAR_4)
    {
 int VAR_11;
 int VAR_12;

 if (VAR_7->checksum & VAR_3)
     FUNC_4 (VAR_4,"setup packet\n");
 else
 {
     if (VAR_7->checksum & VAR_2)
  VAR_11 = FUNC_0 (VAR_7->retransmitfrom);
     else
  VAR_11 = -1;

     FUNC_4 (VAR_4,"get %i = (%i + %i, R %i)[%i] ",
       VAR_6->remotenode,
       FUNC_0(VAR_7->starttic),
       VAR_7->numtics, VAR_11, VAR_6->datalength);

     for (VAR_12=0 ; VAR_12<VAR_6->datalength ; VAR_12++)
  FUNC_4 (VAR_4,"%i ",((byte *)VAR_7)[VAR_12]);
     FUNC_4 (VAR_4,"\n");
 }
    }
    return 1;
}
