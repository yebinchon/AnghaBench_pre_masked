
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct enic {int * intr; int * rq; int * cq; } ;


 unsigned int FUNC_0 (struct enic*,int ) ;
 unsigned int FUNC_1 (struct enic*,int ) ;
 unsigned int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct napi_struct*) ;
 struct enic* FUNC_4 (struct net_device*) ;
 unsigned int FUNC_5 (int *,unsigned int,int ,int *) ;
 int FUNC_6 (int *,unsigned int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct napi_struct *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev;
 struct enic *VAR_6 = FUNC_4(VAR_5);
 unsigned int VAR_7 = FUNC_0(VAR_6, 0);
 unsigned int VAR_8 = FUNC_1(VAR_6, 0);
 unsigned int VAR_9 = FUNC_2();
 unsigned int VAR_10 = VAR_4;
 unsigned int VAR_11 = -1;
 unsigned int VAR_12, VAR_13, VAR_14;
 int VAR_15;




 VAR_13 = FUNC_5(&VAR_6->cq[VAR_7],
  VAR_10, VAR_1, ((void*)0));

 VAR_14 = FUNC_5(&VAR_6->cq[VAR_8],
  VAR_11, VAR_2, ((void*)0));






 VAR_12 = VAR_13 + VAR_14;

 if (VAR_12 > 0)
  FUNC_6(&VAR_6->intr[VAR_9],
   VAR_12,
   0 ,
   0 );

 VAR_15 = FUNC_8(&VAR_6->rq[0], VAR_0);





 if (VAR_15)
  VAR_13 = VAR_10;

 if (VAR_13 < VAR_10) {





  FUNC_3(VAR_3);
  FUNC_7(&VAR_6->intr[VAR_9]);
 }

 return VAR_13;
}
