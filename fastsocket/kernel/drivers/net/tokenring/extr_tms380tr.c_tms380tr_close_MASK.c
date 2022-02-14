
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; int function; scalar_t__ expires; } ;
struct net_local {int HaltInProgress; int Sleeping; TYPE_1__ timer; scalar_t__ TransmitCommandActive; int wait_for_tok_int; } ;
struct net_device {scalar_t__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 struct net_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct net_local*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int ) ;
 int VAR_5 ;

int FUNC_14(struct net_device *VAR_6)
{
 struct net_local *VAR_7 = FUNC_7(VAR_6);
 FUNC_8(VAR_6);

 FUNC_4(&VAR_7->timer);



 VAR_7->HaltInProgress = 1;
 FUNC_13(VAR_6, VAR_1);
 VAR_7->timer.expires = VAR_4 + 1*VAR_0;
 VAR_7->timer.function = VAR_5;
 VAR_7->timer.data = (unsigned long)VAR_6;
 FUNC_2(&VAR_7->timer);

 FUNC_12(VAR_6);

 VAR_7->Sleeping = 1;
 FUNC_6(&VAR_7->wait_for_tok_int);
 VAR_7->TransmitCommandActive = 0;

 FUNC_4(&VAR_7->timer);
 FUNC_11(VAR_6);
 FUNC_1(0xFF00, VAR_3);




 FUNC_10(VAR_7);

 return (0);
}
