
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_eqe {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct ocrdma_eq {TYPE_1__ q; struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dev*,TYPE_1__*,int ,int) ;
 int FUNC_1 (struct ocrdma_dev*,TYPE_1__*) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_eq*) ;
 int FUNC_3 (struct ocrdma_dev*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_dev *VAR_1,
       struct ocrdma_eq *VAR_2, u16 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_2->q, VAR_0,
    sizeof(struct ocrdma_eqe));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4)
  goto mbx_err;
 VAR_2->dev = VAR_1;
 FUNC_3(VAR_1, VAR_2->q.id, 1, 1, 0);

 return 0;
mbx_err:
 FUNC_1(VAR_1, &VAR_2->q);
 return VAR_4;
}
