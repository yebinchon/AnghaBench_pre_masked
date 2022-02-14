
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int stat_timer; scalar_t__ nphystat; scalar_t__ phystat; int devicename; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__** VAR_8 ;
 int FUNC_4 (int,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(unsigned long VAR_9)
{
 unsigned long VAR_10;
 int VAR_11 = (unsigned int) VAR_9;

 FUNC_2("%s: Checking status...\n", VAR_8[VAR_11]->devicename);




 if (VAR_8[VAR_11]->nphystat && !VAR_8[VAR_11]->phystat) {
  FUNC_2("PhyStat transition to RUN\n");
  FUNC_3("%s: Switch contacted, transmitter enabled\n",
   VAR_8[VAR_11]->devicename);
  FUNC_0(VAR_11, VAR_2, 0, ((void*)0));
 }
 else if (!VAR_8[VAR_11]->nphystat && VAR_8[VAR_11]->phystat) {
  FUNC_2("PhyStat transition to STOP\n");
  FUNC_3("%s: Switch connection lost, transmitter disabled\n",
   VAR_8[VAR_11]->devicename);

  FUNC_0(VAR_11, VAR_3, 0, ((void*)0));
 }

 VAR_8[VAR_11]->phystat = VAR_8[VAR_11]->nphystat;


 FUNC_5(&VAR_8[VAR_11]->lock, VAR_10);
 FUNC_1(&VAR_8[VAR_11]->stat_timer, VAR_7+VAR_1);
 FUNC_6(&VAR_8[VAR_11]->lock, VAR_10);


 FUNC_4(VAR_11, VAR_0,VAR_6,VAR_4,
  VAR_5,0,0,((void*)0));
}
