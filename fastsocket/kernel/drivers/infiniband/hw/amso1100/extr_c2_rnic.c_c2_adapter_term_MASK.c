
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wr ;
typedef union c2wr {int dummy; } c2wr ;
struct TYPE_2__ {scalar_t__ context; } ;
struct c2wr_init_req {TYPE_1__ hdr; } ;
struct c2_dev {scalar_t__ init; } ;


 int VAR_0 ;
 int FUNC_0 (struct c2wr_init_req*,int ) ;
 int FUNC_1 (struct c2wr_init_req*,int ,int) ;
 int FUNC_2 (struct c2_dev*,union c2wr*) ;

__attribute__((used)) static void FUNC_3(struct c2_dev *VAR_1)
{
 struct c2wr_init_req VAR_2;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 FUNC_0(&VAR_2, VAR_0);
 VAR_2.hdr.context = 0;


 FUNC_2(VAR_1, (union c2wr *) & VAR_2);
 VAR_1->init = 0;

 return;
}
