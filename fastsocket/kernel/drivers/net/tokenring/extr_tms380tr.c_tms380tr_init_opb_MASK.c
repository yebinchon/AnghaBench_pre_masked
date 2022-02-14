
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* NodeAddr; int * ProdIDAddr; int TXBufMax; int TXBufMin; scalar_t__ Reserved; void* BufSize; void* TxListSize; void* RxListSize; scalar_t__ FunctAddr; scalar_t__ GroupAddr; int FullDuplex; int OPENOptions; } ;
struct net_local {TYPE_1__ ocpl; scalar_t__ dmabuffer; scalar_t__ ProductID; } ;
struct net_device {scalar_t__ dev_addr; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_2 (unsigned short) ;
 unsigned long FUNC_3 (scalar_t__) ;
 struct net_local* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 struct net_local *VAR_8;
 unsigned long VAR_9;
 unsigned short VAR_10 = VAR_3;
 unsigned short VAR_11 = VAR_4;
 unsigned short VAR_12 = VAR_0;
 int VAR_13;

 VAR_8 = FUNC_4(VAR_7);

 VAR_8->ocpl.OPENOptions = 0;
 VAR_8->ocpl.OPENOptions |= VAR_1;
 VAR_8->ocpl.FullDuplex = 0;
 VAR_8->ocpl.FullDuplex |= VAR_2;
        for (VAR_13=0;VAR_13<6;VAR_13++)
                VAR_8->ocpl.NodeAddr[VAR_13] = ((unsigned char *)VAR_7->dev_addr)[VAR_13];

 VAR_8->ocpl.GroupAddr = 0;
 VAR_8->ocpl.FunctAddr = 0;
 VAR_8->ocpl.RxListSize = FUNC_2((unsigned short)VAR_10);
 VAR_8->ocpl.TxListSize = FUNC_2((unsigned short)VAR_11);
 VAR_8->ocpl.BufSize = FUNC_2((unsigned short)VAR_12);
 VAR_8->ocpl.Reserved = 0;
 VAR_8->ocpl.TXBufMin = VAR_6;
 VAR_8->ocpl.TXBufMax = VAR_5;

 VAR_9 = FUNC_3(((char *)VAR_8->ProductID - (char *)VAR_8) + VAR_8->dmabuffer);

 VAR_8->ocpl.ProdIDAddr[0] = FUNC_1(VAR_9);
 VAR_8->ocpl.ProdIDAddr[1] = FUNC_0(VAR_9);

 return;
}
