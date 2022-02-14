
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {struct maple_device* mq; int recvbuf; } ;


 int FUNC_0 (struct maple_device*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct maple_device *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->mq->recvbuf);
 FUNC_0(VAR_1->mq);
 FUNC_0(VAR_1);
}
