
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_5__ {int remotenode; int datalength; int command; } ;
struct TYPE_4__ {int checksum; int numtics; int starttic; int retransmitfrom; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_5 (scalar_t__,char*,...) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;

void
FUNC_6
 (int VAR_9,
  int VAR_10 )
{
    VAR_5->checksum = FUNC_3 () | VAR_10;

    if (!VAR_9)
    {
 VAR_8 = *VAR_5;
 VAR_7 = 1;
 return;
    }

    if (VAR_3)
 return;

    if (!VAR_6)
 FUNC_1 ("Tried to transmit to another node");

    VAR_4->command = VAR_0;
    VAR_4->remotenode = VAR_9;
    VAR_4->datalength = FUNC_4 ();

    if (VAR_2)
    {
 int VAR_11;
 int VAR_12;
 if (VAR_5->checksum & VAR_1)
     VAR_12 = FUNC_0 (VAR_5->retransmitfrom);
 else
     VAR_12 = -1;

 FUNC_5 (VAR_2,"send (%i + %i, R %i) [%i] ",
   FUNC_0(VAR_5->starttic),
   VAR_5->numtics, VAR_12, VAR_4->datalength);

 for (VAR_11=0 ; VAR_11<VAR_4->datalength ; VAR_11++)
     FUNC_5 (VAR_2,"%i ",((byte *)VAR_5)[VAR_11]);

 FUNC_5 (VAR_2,"\n");
    }

    FUNC_2 ();
}
