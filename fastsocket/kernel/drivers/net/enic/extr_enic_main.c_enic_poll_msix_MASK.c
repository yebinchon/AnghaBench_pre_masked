
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct enic {int * intr; int * rq; int * cq; struct napi_struct* napi; } ;


 unsigned int FUNC_0 (struct enic*,unsigned int) ;
 unsigned int FUNC_1 (struct enic*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct napi_struct*) ;
 struct enic* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (int *,unsigned int,int ,int *) ;
 int FUNC_5 (int *,unsigned int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct napi_struct *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 struct enic *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6 = (VAR_2 - &VAR_5->napi[0]);
 unsigned int VAR_7 = FUNC_0(VAR_5, VAR_6);
 unsigned int VAR_8 = FUNC_1(VAR_5, VAR_6);
 unsigned int VAR_9 = VAR_3;
 unsigned int VAR_10;
 int VAR_11;




 VAR_10 = FUNC_4(&VAR_5->cq[VAR_7],
  VAR_9, VAR_1, ((void*)0));






 if (VAR_10 > 0)
  FUNC_5(&VAR_5->intr[VAR_8],
   VAR_10,
   0 ,
   0 );

 VAR_11 = FUNC_7(&VAR_5->rq[VAR_6], VAR_0);





 if (VAR_11)
  VAR_10 = VAR_9;

 if (VAR_10 < VAR_9) {





  FUNC_2(VAR_2);
  FUNC_6(&VAR_5->intr[VAR_8]);
 }

 return VAR_10;
}
